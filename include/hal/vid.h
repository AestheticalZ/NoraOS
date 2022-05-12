#pragma once

#include <nos_types.h>
#include <stivale2.h>

struct FRAMEBUFFER {
	PUINT VideoAddress;
	PUINT BackAddress;
	ULONG64 Pitch, Bpp;
	USHORT Width, Height;
	ULONG64 TextX, TextY;
	UINT TextColor;
	UINT BackgroundColor;
};

VOID HalVidInit(struct stivale2_struct_tag_framebuffer *VidFramebuffer);
VOID HalVidClearScreen(UINT Color);
VOID HalVidSetTextColor(UINT Color);
VOID HalVidPrintC(CHAR c);
VOID HalVidPrint(PCSTR String);
VOID HalVidScroll(VOID);
