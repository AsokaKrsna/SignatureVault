
#include <windows.h>
#include <stdio.h>
#include <conio.h>

#include "vb.h"     //structures
#include "pcode.h"

int lpProcCallEngine = 0;

/*
Dim g As Long

Private Declare Sub callback Lib "dummy.dll" (ByVal s As Long)

Sub Main()
    g = 21
    callback g + 1
End Sub
*/

unsigned char sub_main[] = {
	0xF5, 0x15, 0x00, 0x00, 0x00, 0x99, 0x08, 0x00, 0x00, 0x00, 0x94, 0x08, 0x00, 0x00, 0x00, 0xF5, 
	0x01, 0x00, 0x00, 0x00, 0xAA, 0x0A, 0x00, 0x00, 0x04, 0x00, 0x3C, 0x14, 0x90, 0x10, 0x40, 0x00, 
	0x04, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCC, 
	0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xE9, 0xE9, 0xE9, 0xE9, 0xCC, 0xCC, 0xCC, 0xCC, 
	0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x9E, 0x9E, 0x9E, 0x9E, 0x5C, 0x15, 0x00, 0x00, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x70, 0x15, 0x00, 0x00
};

//examples progress callback (same vb declare as sleep)
void __stdcall callback(int arg){
	printf("c callback received %d\n",arg);
}

void main(void){

	int rv = 0;
	int abort = 0; 
	int constPool[20] = {0};
	int lpProjObj[10] = {0};
	int publicVars[10] = {0};

	objInfo.aObject = (int)&codeObj;
	objInfo.lpConstantPool = (int)&constPool;
	objInfo.aObjectTable = (int)&objtable;
	objtable.lpProjectObject = (int)&lpProjObj;

	HMODULE hRuntime = (HMODULE)LoadLibrary("msvbvm60.dll");
	lpProcCallEngine = (int)GetProcAddress(hRuntime,"ProcCallEngine");
	CreateIExprSrvObj IExprSrvObj = (CreateIExprSrvObj)GetProcAddress(hRuntime,"CreateIExprSrvObj"); 

	IExprSrvObj(0,4,0); //initilize runtime enough for most things to work (COM, native pcode handlers etc)

	constPool[0x0] = (int)&callback;

	int offset_sub_main = (int)&sub_main + 0x1C;
	(*(int*)offset_sub_main) = (int)&objInfo;
	
	codeObj.aModulePublic = &publicVars[0];

	_asm{
		//int 3
		mov edx, offset_sub_main 
        mov ecx, lpProcCallEngine
		call ecx
		mov rv, eax
	}
	 
	printf("global[0] = %d\n", publicVars[0]);
	printf("Press any key to exit...");
	getch();

}


