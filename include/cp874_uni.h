/* single-byte charset to unicode. 0x0000 means no mapping */
const uint16_t cp874_to_unicode[256] = {
	0x0000,0x0001,0x0002,0x0003,0x0004,0x0005,0x0006,0x0007, /* 0x00-0x07 */
	0x0008,0x0009,0x000a,0x000b,0x000c,0x000d,0x000e,0x000f, /* 0x08-0x0F */
	0x0010,0x0011,0x0012,0x0013,0x0014,0x0015,0x0016,0x0017, /* 0x10-0x17 */
	0x0018,0x0019,0x001a,0x001b,0x001c,0x001d,0x001e,0x001f, /* 0x18-0x1F */
	0x0020,0x0021,0x0022,0x0023,0x0024,0x0025,0x0026,0x0027, /* 0x20-0x27 */
	0x0028,0x0029,0x002a,0x002b,0x002c,0x002d,0x002e,0x002f, /* 0x28-0x2F */
	0x0030,0x0031,0x0032,0x0033,0x0034,0x0035,0x0036,0x0037, /* 0x30-0x37 */
	0x0038,0x0039,0x003a,0x003b,0x003c,0x003d,0x003e,0x003f, /* 0x38-0x3F */
	0x0040,0x0041,0x0042,0x0043,0x0044,0x0045,0x0046,0x0047, /* 0x40-0x47 */
	0x0048,0x0049,0x004a,0x004b,0x004c,0x004d,0x004e,0x004f, /* 0x48-0x4F */
	0x0050,0x0051,0x0052,0x0053,0x0054,0x0055,0x0056,0x0057, /* 0x50-0x57 */
	0x0058,0x0059,0x005a,0x005b,0x005c,0x005d,0x005e,0x005f, /* 0x58-0x5F */
	0x0060,0x0061,0x0062,0x0063,0x0064,0x0065,0x0066,0x0067, /* 0x60-0x67 */
	0x0068,0x0069,0x006a,0x006b,0x006c,0x006d,0x006e,0x006f, /* 0x68-0x6F */
	0x0070,0x0071,0x0072,0x0073,0x0074,0x0075,0x0076,0x0077, /* 0x70-0x77 */
	0x0078,0x0079,0x007a,0x007b,0x007c,0x007d,0x007e,0x007f, /* 0x78-0x7F */
	0x20ac,0x0000,0x0000,0x0000,0x0000,0x2026,0x0000,0x0000, /* 0x80-0x87 */
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000, /* 0x88-0x8F */
	0x0000,0x2018,0x2019,0x201c,0x201d,0x2022,0x2013,0x2014, /* 0x90-0x97 */
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000, /* 0x98-0x9F */
	0x00a0,0x0e01,0x0e02,0x0e03,0x0e04,0x0e05,0x0e06,0x0e07, /* 0xA0-0xA7 */
	0x0e08,0x0e09,0x0e0a,0x0e0b,0x0e0c,0x0e0d,0x0e0e,0x0e0f, /* 0xA8-0xAF */
	0x0e10,0x0e11,0x0e12,0x0e13,0x0e14,0x0e15,0x0e16,0x0e17, /* 0xB0-0xB7 */
	0x0e18,0x0e19,0x0e1a,0x0e1b,0x0e1c,0x0e1d,0x0e1e,0x0e1f, /* 0xB8-0xBF */
	0x0e20,0x0e21,0x0e22,0x0e23,0x0e24,0x0e25,0x0e26,0x0e27, /* 0xC0-0xC7 */
	0x0e28,0x0e29,0x0e2a,0x0e2b,0x0e2c,0x0e2d,0x0e2e,0x0e2f, /* 0xC8-0xCF */
	0x0e30,0x0e31,0x0e32,0x0e33,0x0e34,0x0e35,0x0e36,0x0e37, /* 0xD0-0xD7 */
	0x0e38,0x0e39,0x0e3a,0x0000,0x0000,0x0000,0x0000,0x0e3f, /* 0xD8-0xDF */
	0x0e40,0x0e41,0x0e42,0x0e43,0x0e44,0x0e45,0x0e46,0x0e47, /* 0xE0-0xE7 */
	0x0e48,0x0e49,0x0e4a,0x0e4b,0x0e4c,0x0e4d,0x0e4e,0x0e4f, /* 0xE8-0xEF */
	0x0e50,0x0e51,0x0e52,0x0e53,0x0e54,0x0e55,0x0e56,0x0e57, /* 0xF0-0xF7 */
	0x0e58,0x0e59,0x0e5a,0x0e5b,0x0000,0x0000,0x0000,0x0000  /* 0xF8-0xFF */
};