
#include <windows.h>
#include <stdio.h>
#include <conio.h>

#include "vb.h"     //structures
#include "pcode.h"

int lpProcCallEngine = 0;

//the easiest way to control the mem layout of several different types to replicate our expected global mem
//pragma pack 1 mandatory
#pragma pack(1)  
struct globals{
	int i;           //FMemLdRf  [arg_8+0x0]   size: 4       Dim g As Long
	VARIANT v;       //FMemLdRf  [arg_8+0x4]   size: 0x10    Dim v As Variant
	SAFEARRAY* b;    //FMemLdR4  [arg_8+0x14]  size: 0x4     Dim b() As Byte
	short boolean;   //FMemLdRf  [arg_8+0x18]  size: 0x2     Dim bool As Boolean
	short s;         //FMemLdRf  [arg_8+0x1A]  size: 0x2     Dim s As Integer
};

unsigned char sub_main[] = {
	0x3A, 0x4C, 0xFF, 0x00, 0x00, 0x07, 0x08, 0x00, 0x00, 0x00, 0x4D, 0x6C, 0xFF, 0x03, 0x40, 0x04, 
	0x5C, 0xFF, 0x0A, 0x01, 0x00, 0x08, 0x00, 0x04, 0x5C, 0xFF, 0xFB, 0xEF, 0x3C, 0xFF, 0xFD, 0xFE, 
	0x38, 0xFF, 0x04, 0x34, 0xFF, 0x34, 0x6C, 0x34, 0xFF, 0x0A, 0x02, 0x00, 0x04, 0x00, 0x3C, 0x32, 
	0x04, 0x00, 0x38, 0xFF, 0x34, 0xFF, 0x36, 0x04, 0x00, 0x5C, 0xFF, 0x3C, 0xFF, 0x1B, 0x03, 0x00, 
	0x94, 0x08, 0x00, 0x14, 0x00, 0xF4, 0x01, 0xFC, 0xCB, 0xFB, 0xFE, 0x23, 0x38, 0xFF, 0x2A, 0x23, 
	0x34, 0xFF, 0x04, 0x30, 0xFF, 0x34, 0x6C, 0x30, 0xFF, 0x0A, 0x02, 0x00, 0x04, 0x00, 0x3C, 0x32, 
	0x06, 0x00, 0x38, 0xFF, 0x34, 0xFF, 0x30, 0xFF, 0x3A, 0x4C, 0xFF, 0x04, 0x00, 0x07, 0x08, 0x00, 
	0x18, 0x00, 0x4D, 0x6C, 0xFF, 0x0B, 0x40, 0x04, 0x5C, 0xFF, 0x0A, 0x01, 0x00, 0x08, 0x00, 0x04, 
	0x5C, 0xFF, 0xFB, 0xEF, 0x3C, 0xFF, 0xFD, 0xFE, 0x38, 0xFF, 0x04, 0x34, 0xFF, 0x34, 0x6C, 0x34, 
	0xFF, 0x0A, 0x02, 0x00, 0x04, 0x00, 0x3C, 0x32, 0x04, 0x00, 0x38, 0xFF, 0x34, 0xFF, 0x36, 0x04, 
	0x00, 0x5C, 0xFF, 0x3C, 0xFF, 0x3A, 0x4C, 0xFF, 0x05, 0x00, 0x07, 0x08, 0x00, 0x1A, 0x00, 0x4D, 
	0x6C, 0xFF, 0x02, 0x40, 0x04, 0x5C, 0xFF, 0x0A, 0x01, 0x00, 0x08, 0x00, 0x04, 0x5C, 0xFF, 0xFB, 
	0xEF, 0x3C, 0xFF, 0xFD, 0xFE, 0x38, 0xFF, 0x04, 0x34, 0xFF, 0x34, 0x6C, 0x34, 0xFF, 0x0A, 0x02, 
	0x00, 0x04, 0x00, 0x3C, 0x32, 0x04, 0x00, 0x38, 0xFF, 0x34, 0xFF, 0x36, 0x04, 0x00, 0x5C, 0xFF, 
	0x3C, 0xFF, 0x1B, 0x06, 0x00, 0x07, 0x08, 0x00, 0x04, 0x00, 0x0B, 0x07, 0x00, 0x04, 0x00, 0x23, 
	0x38, 0xFF, 0x2A, 0x23, 0x34, 0xFF, 0x04, 0x30, 0xFF, 0x34, 0x6C, 0x30, 0xFF, 0x0A, 0x02, 0x00, 
	0x04, 0x00, 0x3C, 0x32, 0x06, 0x00, 0x38, 0xFF, 0x34, 0xFF, 0x30, 0xFF, 0x14, 0x00, 0x00, 0x00, 
	0x9C, 0x10, 0x40, 0x00, 0x04, 0x00, 0x4C, 0x00, 0x10, 0x01, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x38, 0xFF, 0x01, 0x00, 0x34, 0xFF, 0x01, 0x00, 0x30, 0xFF, 0x01, 0x00, 0x5C, 0xFF, 0x02, 0x00, 
	0x3C, 0xFF, 0x02, 0x00, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 
	0xE9, 0xE9, 0xE9, 0xE9, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC
};


void __stdcall strCallback(char* arg){
	printf("%s\n",arg);
}

void main(void){

	int rv = 0;
	int abort = 0; 
	int constPool[20] = {0};
	int lpProjObj[10] = {0};

	objInfo.aObject = (int)&codeObj;
	objInfo.lpConstantPool = (int)&constPool;
	objInfo.aObjectTable = (int)&objtable;
	objtable.lpProjectObject = (int)&lpProjObj;

	HMODULE hRuntime = (HMODULE)LoadLibrary("msvbvm60.dll");
	lpProcCallEngine = (int)GetProcAddress(hRuntime,"ProcCallEngine");
	CreateIExprSrvObj IExprSrvObj = (CreateIExprSrvObj)GetProcAddress(hRuntime,"CreateIExprSrvObj"); 

	IExprSrvObj(0,4,0); //initilize runtime enough for most things to work (COM, native pcode handlers etc)

	// sub_main  - 368 bytes
	int offset_sub_main = (int)&sub_main + 0x110;
	(*(int*)offset_sub_main) = (int)&objInfo;
		
	globals g;
	codeObj.aModulePublic = (int*)&g;
	g.i = 0x11223344;
	g.v.vt = VT_BSTR;
	g.v.bstrVal = SysAllocString(L"test string");
	g.b = SafeArrayCreateVector(VT_UI1, 0, 5);
	g.boolean = -1; //vbtrue
	g.s = 0x33;

	constPool[0x0] = (int)SysAllocString(L"g = ");
	constPool[0x1] = (int)GetProcAddress(hRuntime,"rtcHexVarFromVar");
	constPool[0x2] = (int)&strCallback;
	constPool[0x3] = (int)SysAllocString(L"ubound(b) = ");
	constPool[0x4] = (int)SysAllocString(L"bool = ");
	constPool[0x5] = (int)SysAllocString(L"s = ");
	constPool[0x6] = (int)SysAllocString(L"typename(v) = ");
	constPool[0x7] = (int)GetProcAddress(hRuntime,"rtcTypeName");

	_asm{
		//int 3
		mov edx, offset_sub_main 
        mov ecx, lpProcCallEngine
		call ecx
		mov rv, eax
	}
	 
	printf("\nPress any key to exit...");
	getch();

}


