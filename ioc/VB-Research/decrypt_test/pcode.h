
unsigned char sub_main[] = {
	0xF5, 0x41, 0x00, 0x00, 0x00, 0x04, 0x68, 0xFF, 0x0A, 0x00, 0x00, 0x08, 0x00, 0xF4, 0xFF, 0x2B, 
	0x42, 0xFF, 0x04, 0x68, 0xFF, 0xFD, 0xFE, 0x44, 0xFF, 0x3A, 0x58, 0xFF, 0x01, 0x00, 0x4E, 0x48, 
	0xFF, 0x04, 0x48, 0xFF, 0x04, 0x30, 0xFF, 0x0A, 0x02, 0x00, 0x10, 0x00, 0x04, 0x30, 0xFF, 0x60, 
	0x31, 0x78, 0xFF, 0x2F, 0x44, 0xFF, 0x36, 0x06, 0x00, 0x48, 0xFF, 0x68, 0xFF, 0x30, 0xFF, 0xF5, 
	0x41, 0x00, 0x00, 0x00, 0x04, 0x68, 0xFF, 0x0A, 0x00, 0x00, 0x08, 0x00, 0xF4, 0xFF, 0x2B, 0x42, 
	0xFF, 0x04, 0x68, 0xFF, 0xFD, 0xFE, 0x44, 0xFF, 0x04, 0x78, 0xFF, 0x4D, 0x58, 0xFF, 0x08, 0x40, 
	0x04, 0x48, 0xFF, 0x0A, 0x02, 0x00, 0x10, 0x00, 0x04, 0x48, 0xFF, 0xFC, 0x4B, 0x23, 0x2C, 0xFF, 
	0x04, 0x28, 0xFF, 0x34, 0x6C, 0x28, 0xFF, 0x0A, 0x03, 0x00, 0x04, 0x00, 0x3C, 0x32, 0x06, 0x00, 
	0x44, 0xFF, 0x2C, 0xFF, 0x28, 0xFF, 0x36, 0x06, 0x00, 0x68, 0xFF, 0x48, 0xFF, 0x48, 0xFF, 0x14, 
	0xC0, 0x10, 0x40, 0x00, 0x04, 0x00, 0x54, 0x00, 0x90, 0x00, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x78, 0xFF, 0x01, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x44, 0xFF, 0x01, 0x00, 0x2C, 0xFF, 0x01, 0x00, 0x28, 0xFF, 0x01, 0x00, 
	0x68, 0xFF, 0x02, 0x00, 0x48, 0xFF, 0x02, 0x00, 0x30, 0xFF, 0x02, 0x00, 0x00, 0x08, 0x6C, 0x14, 
	0x00, 0x43, 0x68, 0xFF, 0x00, 0x05, 0x4B, 0xFF, 0xFF, 0x00, 0x18, 0x6C, 0x10, 0x00, 0x0B, 0x04
};


unsigned char rc4[] = {
	0x00, 0x08, 0x6C, 0x14, 0x00, 0x43, 0x68, 0xFF, 0x00, 0x05, 0x4B, 0xFF, 0xFF, 0x00, 0x18, 0x6C, 
	0x10, 0x00, 0x0B, 0x04, 0x00, 0x04, 0x00, 0x23, 0x2C, 0xFF, 0x1B, 0x05, 0x00, 0xFB, 0x30, 0x2F, 
	0x2C, 0xFF, 0x1C, 0x49, 0x00, 0x00, 0x14, 0xFD, 0x16, 0x10, 0x00, 0x1C, 0xFF, 0xFC, 0x60, 0x18, 
	0xFF, 0x04, 0x18, 0xFF, 0x04, 0x34, 0xFF, 0xFF, 0x01, 0x00, 0x0D, 0xF5, 0x01, 0x00, 0x00, 0x00, 
	0x0A, 0x06, 0x00, 0x04, 0x00, 0x3C, 0x1E, 0xAF, 0x00, 0x00, 0x18, 0x6C, 0x10, 0x00, 0x0B, 0x04, 
	0x00, 0x04, 0x00, 0x23, 0x2C, 0xFF, 0x1B, 0x07, 0x00, 0xFB, 0x30, 0x2F, 0x2C, 0xFF, 0x1C, 0x9A, 
	0x00, 0x00, 0x29, 0xF5, 0x09, 0x04, 0x00, 0x00, 0xF5, 0x80, 0x00, 0x00, 0x00, 0x6C, 0x10, 0x00, 
	0x04, 0x08, 0xFF, 0x0A, 0x08, 0x00, 0x10, 0x00, 0x04, 0x08, 0xFF, 0xFC, 0x60, 0x18, 0xFF, 0x04, 
	0x18, 0xFF, 0x04, 0x34, 0xFF, 0xFF, 0x01, 0x35, 0x08, 0xFF, 0x00, 0x0D, 0xF5, 0x02, 0x00, 0x00, 
	0x00, 0x0A, 0x06, 0x00, 0x04, 0x00, 0x3C, 0x1E, 0xAF, 0x00, 0x00, 0x02, 0x00, 0x0D, 0xF5, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x0A, 0x06, 0x00, 0x04, 0x00, 0x3C, 0x00, 0x06, 0xFD, 0x95, 0x10, 0x00, 0x00, 
	0x02, 0x00, 0x1D, 0x04, 0x68, 0xFF, 0x4D, 0x1C, 0xFF, 0x08, 0x40, 0x0B, 0x04, 0x00, 0x04, 0x00, 
	0x23, 0x2C, 0xFF, 0x1B, 0x05, 0x00, 0xFB, 0x30, 0x2F, 0x2C, 0xFF, 0x1C, 0x1A, 0x01, 0x00, 0x11, 
	0x6C, 0x68, 0xFF, 0xFC, 0x5F, 0x18, 0xFF, 0x04, 0x18, 0xFF, 0x04, 0x3C, 0xFF, 0xFF, 0x01, 0x00, 
	0x12, 0x6C, 0x3C, 0xFF, 0xF4, 0x01, 0xFC, 0xCB, 0xF5, 0xFF, 0x00, 0x00, 0x00, 0xDB, 0x1C, 0x0A, 
	0x01, 0x00, 0x19, 0xF5, 0x00, 0x00, 0x00, 0x00, 0xF5, 0xFF, 0x00, 0x00, 0x00, 0x04, 0x3C, 0xFF, 
	0xFE, 0x8F, 0x01, 0x00, 0x11, 0x00, 0x01, 0x00, 0x80, 0x00, 0x00, 0x0D, 0xF5, 0x03, 0x00, 0x00, 
	0x00, 0x0A, 0x06, 0x00, 0x04, 0x00, 0x3C, 0x1E, 0xDC, 0x01, 0x00, 0x02, 0x00, 0x0F, 0x6C, 0x68, 
	0xFF, 0x4A, 0xF5, 0x00, 0x00, 0x00, 0x00, 0xC7, 0x1C, 0x3E, 0x01, 0x00, 0x0D, 0xF5, 0xFE, 0xFF, 
	0xFF, 0xFF, 0x0A, 0x06, 0x00, 0x04, 0x00, 0x3C, 0x00, 0x06, 0xFD, 0x95, 0x10, 0x00, 0x00, 0x02, 
	0x00, 0x0F, 0x6C, 0x68, 0xFF, 0x4A, 0xF5, 0x00, 0x01, 0x00, 0x00, 0xDB, 0x1C, 0x95, 0x01, 0x00, 
	0x43, 0xF5, 0x00, 0x01, 0x00, 0x00, 0x6C, 0x68, 0xFF, 0x0B, 0x09, 0x00, 0x08, 0x00, 0x31, 0x2C, 
	0xFF, 0xF5, 0x09, 0x04, 0x00, 0x00, 0xF5, 0x80, 0x00, 0x00, 0x00, 0x3E, 0x2C, 0xFF, 0x46, 0x08, 
	0xFF, 0x04, 0xF8, 0xFE, 0x0A, 0x08, 0x00, 0x10, 0x00, 0x04, 0xF8, 0xFE, 0xFC, 0x60, 0x18, 0xFF, 
	0x04, 0x18, 0xFF, 0x04, 0x3C, 0xFF, 0xFF, 0x01, 0x2F, 0x2C, 0xFF, 0x36, 0x04, 0x00, 0x08, 0xFF, 
	0xF8, 0xFE, 0x1E, 0xCD, 0x01, 0x00, 0x02, 0x00, 0x36, 0xF5, 0x09, 0x04, 0x00, 0x00, 0xF5, 0x80, 
	0x00, 0x00, 0x00, 0x6C, 0x68, 0xFF, 0x46, 0x1C, 0xFF, 0x4E, 0x08, 0xFF, 0x04, 0x08, 0xFF, 0x04, 
	0xF8, 0xFE, 0x0A, 0x08, 0x00, 0x10, 0x00, 0x04, 0xF8, 0xFE, 0xFC, 0x60, 0x18, 0xFF, 0x04, 0x18, 
	0xFF, 0x04, 0x3C, 0xFF, 0xFF, 0x01, 0x36, 0x04, 0x00, 0x08, 0xFF, 0xF8, 0xFE, 0x00, 0x02, 0x00, 
	0x0D, 0xF5, 0x04, 0x00, 0x00, 0x00, 0x0A, 0x06, 0x00, 0x04, 0x00, 0x3C, 0x00, 0x02, 0x00, 0x12, 
	0x6C, 0x3C, 0xFF, 0xF4, 0x01, 0xFC, 0xCB, 0xF5, 0x01, 0x00, 0x00, 0x00, 0xAA, 0x71, 0x30, 0xFF, 
	0x00, 0x0D, 0xF5, 0x06, 0x00, 0x00, 0x00, 0x0A, 0x06, 0x00, 0x04, 0x00, 0x3C, 0x00, 0x15, 0xF5, 
	0x00, 0x00, 0x00, 0x00, 0x04, 0x48, 0xFF, 0xF5, 0xFF, 0x00, 0x00, 0x00, 0xFE, 0x64, 0xF0, 0xFE, 
	0x29, 0x02, 0x00, 0x0D, 0x6C, 0x48, 0xFF, 0xE4, 0x6C, 0x48, 0xFF, 0x04, 0x50, 0xFF, 0xA2, 0x00, 
	0x0A, 0x04, 0x48, 0xFF, 0x66, 0xF0, 0xFE, 0x12, 0x02, 0x00, 0x0A, 0xF5, 0x00, 0x00, 0x00, 0x00, 
	0x71, 0x48, 0xFF, 0x00, 0x0A, 0xF5, 0x00, 0x00, 0x00, 0x00, 0x71, 0x44, 0xFF, 0x00, 0x0A, 0xF5, 
	0x00, 0x00, 0x00, 0x00, 0x71, 0x40, 0xFF, 0x00, 0x15, 0xF5, 0x00, 0x00, 0x00, 0x00, 0x04, 0x48, 
	0xFF, 0xF5, 0xFF, 0x00, 0x00, 0x00, 0xFE, 0x64, 0xE8, 0xFE, 0xB9, 0x02, 0x00, 0x25, 0x6C, 0x44, 
	0xFF, 0x6C, 0x48, 0xFF, 0x04, 0x50, 0xFF, 0x9D, 0xE7, 0xAA, 0x6C, 0x48, 0xFF, 0x6C, 0x30, 0xFF, 
	0xC2, 0x6C, 0x3C, 0xFF, 0xFC, 0x90, 0xE7, 0xAA, 0xF5, 0x00, 0x01, 0x00, 0x00, 0xC2, 0x71, 0x44, 
	0xFF, 0x00, 0x0F, 0x6C, 0x48, 0xFF, 0x04, 0x50, 0xFF, 0x9D, 0xFC, 0x0D, 0xFC, 0xF0, 0x3A, 0xFF, 
	0x00, 0x10, 0x6C, 0x44, 0xFF, 0x04, 0x50, 0xFF, 0x9D, 0x6C, 0x48, 0xFF, 0x04, 0x50, 0xFF, 0xA2, 
	0x00, 0x0F, 0xFC, 0xE0, 0x3A, 0xFF, 0xFC, 0x14, 0x6C, 0x44, 0xFF, 0x04, 0x50, 0xFF, 0xA2, 0x00, 
	0x0A, 0x04, 0x48, 0xFF, 0x66, 0xE8, 0xFE, 0x5C, 0x02, 0x00, 0x0A, 0xF5, 0x00, 0x00, 0x00, 0x00, 
	0x71, 0x48, 0xFF, 0x00, 0x0A, 0xF5, 0x00, 0x00, 0x00, 0x00, 0x71, 0x44, 0xFF, 0x00, 0x0A, 0xF5, 
	0x00, 0x00, 0x00, 0x00, 0x71, 0x40, 0xFF, 0x00, 0x17, 0xF5, 0x00, 0x00, 0x00, 0x00, 0x04, 0x48, 
	0xFF, 0x6C, 0x34, 0xFF, 0xF4, 0x01, 0xFC, 0xCB, 0xFE, 0x64, 0xE0, 0xFE, 0x81, 0x03, 0x00, 0x14, 
	0x6C, 0x44, 0xFF, 0xF5, 0x01, 0x00, 0x00, 0x00, 0xAA, 0xF5, 0x00, 0x01, 0x00, 0x00, 0xC2, 0x71, 
	0x44, 0xFF, 0x00, 0x17, 0x6C, 0x40, 0xFF, 0x6C, 0x44, 0xFF, 0x04, 0x50, 0xFF, 0x9D, 0xE7, 0xAA, 
	0xF5, 0x00, 0x01, 0x00, 0x00, 0xC2, 0x71, 0x40, 0xFF, 0x00, 0x0F, 0x6C, 0x44, 0xFF, 0x04, 0x50, 
	0xFF, 0x9D, 0xFC, 0x0D, 0xFC, 0xF0, 0x3A, 0xFF, 0x00, 0x10, 0x6C, 0x40, 0xFF, 0x04, 0x50, 0xFF, 
	0x9D, 0x6C, 0x44, 0xFF, 0x04, 0x50, 0xFF, 0xA2, 0x00, 0x0F, 0xFC, 0xE0, 0x3A, 0xFF, 0xFC, 0x14, 
	0x6C, 0x40, 0xFF, 0x04, 0x50, 0xFF, 0xA2, 0x00, 0x30, 0x6C, 0x48, 0xFF, 0x6C, 0x34, 0xFF, 0xFC, 
	0x90, 0xFC, 0x14, 0x6C, 0x44, 0xFF, 0x04, 0x50, 0xFF, 0x9D, 0x6C, 0x40, 0xFF, 0x04, 0x50, 0xFF, 
	0x9D, 0xA9, 0xF3, 0x00, 0x01, 0xC1, 0xE7, 0x04, 0x50, 0xFF, 0x9D, 0xFB, 0x12, 0xFC, 0x0D, 0x6C, 
	0x48, 0xFF, 0x6C, 0x34, 0xFF, 0xFC, 0xA0, 0x00, 0x0A, 0x04, 0x48, 0xFF, 0x66, 0xE0, 0xFE, 0xEE, 
	0x02, 0x00, 0x08, 0x7F, 0x18, 0x00, 0x1C, 0xBC, 0x03, 0x00, 0x0D, 0xF5, 0x07, 0x00, 0x00, 0x00, 
	0x0A, 0x06, 0x00, 0x04, 0x00, 0x3C, 0x00, 0x23, 0xF5, 0x09, 0x04, 0x00, 0x00, 0xF5, 0x40, 0x00, 
	0x00, 0x00, 0x04, 0x34, 0xFF, 0x4D, 0x1C, 0xFF, 0x11, 0x60, 0x04, 0x08, 0xFF, 0x0A, 0x08, 0x00, 
	0x10, 0x00, 0x04, 0x08, 0xFF, 0xFC, 0xF6, 0x6C, 0xFF, 0x1E, 0xD9, 0x03, 0x00, 0x02, 0x00, 0x0D, 
	0xF5, 0x08, 0x00, 0x00, 0x00, 0x0A, 0x06, 0x00, 0x04, 0x00, 0x3C, 0x00, 0x0E, 0x6C, 0x34, 0xFF, 
	0x4D, 0x1C, 0xFF, 0x11, 0x20, 0xFD, 0x00, 0x6C, 0xFF, 0x00, 0x02, 0x00, 0x00, 0xFD, 0x95, 0x10, 
	0x00, 0xF0, 0xF0, 0xF0, 0xC0, 0x10, 0x40, 0x00, 0x14, 0x00, 0x9C, 0x00, 0xE4, 0x03, 0x6C, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 
	0x01, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x01, 0x6C, 0xFF, 0x02, 0x00, 0x68, 0xFF, 0x01, 0x00, 
	0x50, 0xFF, 0x05, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 
	0x01, 0x00, 0x92, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0xF0, 0xF0, 0x34, 0xFF, 0x05, 0x01, 
	0xF0, 0xF0, 0xF0, 0xF0
};
