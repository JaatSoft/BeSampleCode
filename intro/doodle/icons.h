/*
	Copyright 1999, Be Incorporated.   All Rights Reserved.
	This file may be used under the terms of the Be Sample Code License.
*/

#ifndef _icons_h
#define _icons_h

/////////////////////////////////////////////////////////////////////////////
// icons.h
// -------
// Mini icons for the standard toolbar.
//
// MFC NOTE: You would expect these items to go into a resource file. This
// is possible but not necessarily easy to do in BeOS. For this simple
// example, I've hardcoded them.

const float kBitmapWidth = 16;
const float kBitmapHeight = 16;
const int32 kBitmapBytes = 256;
const color_space kBitmapColorSpace = B_CMAP8;

const uint8 kHelpBitmap[] = {
	0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 
	0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0xfa, 0xfa, 0xfa, 0xfa, 0x00, 0x19, 0x19, 0x19, 0x19, 0x19, 
	0x19, 0x19, 0x19, 0x19, 0x19, 0xfa, 0xfa, 0xfa, 0xfa, 0xfa, 0xfa, 0x00, 0x19, 0x19, 0x19, 0x19, 
	0x19, 0x19, 0x19, 0x19, 0xfa, 0xfa, 0xfa, 0xfa, 0xfa, 0xfa, 0xfa, 0xfa, 0x00, 0x19, 0x19, 0x19, 
	0x19, 0x19, 0x19, 0x19, 0xfa, 0xfa, 0xfa, 0x00, 0x00, 0xfa, 0xfa, 0xfa, 0x00, 0x19, 0x19, 0x19, 
	0x19, 0x19, 0x19, 0x19, 0xfa, 0xfa, 0xfa, 0x00, 0x19, 0xfa, 0xfa, 0xfa, 0x00, 0x19, 0x19, 0x19, 
	0x19, 0x19, 0x19, 0x19, 0x19, 0x00, 0x00, 0x19, 0xfa, 0xfa, 0xfa, 0x00, 0x19, 0x19, 0x19, 0x19, 
	0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0xfa, 0xfa, 0xfa, 0x00, 0x19, 0x19, 0x19, 0x19, 0x19, 
	0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0xfa, 0xfa, 0xfa, 0x00, 0x19, 0x19, 0x19, 0x19, 0x19, 
	0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0xfa, 0xfa, 0xfa, 0x00, 0x19, 0x19, 0x19, 0x19, 0x19, 
	0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x00, 0x00, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 
	0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0xfa, 0x00, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 
	0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0xfa, 0xfa, 0xfa, 0x00, 0x19, 0x19, 0x19, 0x19, 0x19, 
	0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0xfa, 0xfa, 0xfa, 0x00, 0x19, 0x19, 0x19, 0x19, 0x19, 
	0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x00, 0xfa, 0x00, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 
	0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x00, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19
};


const uint8 kNewBitmap[] = {
	0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 
	0x19, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x19, 0x19, 0x19, 0x19, 
	0x19, 0x19, 0x00, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x00, 0x00, 0x19, 0x19, 0x19, 0x19, 
	0x19, 0x19, 0x00, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x00, 0x3f, 0x00, 0x19, 0x19, 0x19, 
	0x19, 0x19, 0x00, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x19, 0x19, 
	0x19, 0x19, 0x00, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x00, 0x19, 0x19, 
	0x19, 0x19, 0x00, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x00, 0x19, 0x19, 
	0x19, 0x19, 0x00, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x00, 0x19, 0x19, 
	0x19, 0x19, 0x00, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x00, 0x19, 0x19, 
	0x19, 0x19, 0x00, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x00, 0x19, 0x19, 
	0x19, 0x19, 0x00, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x00, 0x19, 0x19, 
	0x19, 0x19, 0x00, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x00, 0x19, 0x19, 
	0x19, 0x19, 0x00, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x00, 0x19, 0x19, 
	0x19, 0x19, 0x00, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x00, 0x19, 0x19, 
	0x19, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x19, 
	0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19
};

const uint8 kOpenBitmap[] = {
	0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 
	0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x00, 0x00, 0x00, 0x19, 0x19, 0x19, 0x19, 
	0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x00, 0x19, 0x19, 0x19, 0x00, 0x19, 0x00, 0x19, 
	0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x00, 0x00, 0x19, 
	0x19, 0x00, 0x00, 0x00, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x00, 0x00, 0x00, 0x19, 
	0x00, 0xfa, 0x3f, 0xfa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x19, 0x19, 0x19, 0x19, 
	0x00, 0x3f, 0xfa, 0x3f, 0xfa, 0x3f, 0xfa, 0x3f, 0xfa, 0x3f, 0x00, 0x19, 0x19, 0x19, 0x19, 0x19, 
	0x00, 0xfa, 0x3f, 0xfa, 0x3f, 0xfa, 0x3f, 0xfa, 0x3f, 0xfa, 0x00, 0x19, 0x19, 0x19, 0x19, 0x19, 
	0x00, 0x3f, 0xfa, 0x3f, 0xfa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 
	0x00, 0xfa, 0x3f, 0xfa, 0x00, 0x8b, 0x8b, 0x8b, 0x8b, 0x8b, 0x8b, 0x8b, 0x8b, 0x8b, 0x00, 0x19, 
	0x00, 0x3f, 0xfa, 0x00, 0x8b, 0x8b, 0x8b, 0x8b, 0x8b, 0x8b, 0x8b, 0x8b, 0x8b, 0x00, 0x19, 0x19, 
	0x00, 0xfa, 0x00, 0x8b, 0x8b, 0x8b, 0x8b, 0x8b, 0x8b, 0x8b, 0x8b, 0x8b, 0x00, 0x19, 0x19, 0x19, 
	0x00, 0x00, 0x8b, 0x8b, 0x8b, 0x8b, 0x8b, 0x8b, 0x8b, 0x8b, 0x8b, 0x00, 0x19, 0x19, 0x19, 0x19, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x19, 0x19, 0x19, 0x19, 
	0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 
	0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19
};

const uint8 kPrintBitmap[] = {
	0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 
	0x19, 0x19, 0x19, 0x19, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x19, 
	0x19, 0x19, 0x19, 0x19, 0x00, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x00, 0x19, 0x19, 
	0x19, 0x19, 0x19, 0x19, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x19, 0x19, 0x19, 
	0x19, 0x19, 0x19, 0x00, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x00, 0x19, 0x19, 0x19, 
	0x19, 0x19, 0x19, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x19, 
	0x19, 0x19, 0x00, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x00, 0x19, 0x00, 0x19, 0x00, 
	0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x19, 0x00, 0x00, 
	0x00, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x00, 0x19, 0x00, 0x19, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x19, 0x00, 
	0x00, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x10, 0x10, 0x10, 0x19, 0x19, 0x00, 0x19, 0x00, 0x19, 
	0x00, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0xfa, 0xfa, 0xfa, 0x19, 0x19, 0x00, 0x00, 0x00, 0x19, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x19, 
	0x19, 0x00, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x00, 0x19, 0x00, 0x19, 0x19, 
	0x19, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x19, 0x19, 
	0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19
};

const uint8 kSaveBitmap[] = {
	0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 
	0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 
	0x19, 0x00, 0x8b, 0x00, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x00, 0x19, 0x00, 0x19, 
	0x19, 0x00, 0x8b, 0x00, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x00, 0x00, 0x00, 0x19, 
	0x19, 0x00, 0x8b, 0x00, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x00, 0x8b, 0x00, 0x19, 
	0x19, 0x00, 0x8b, 0x00, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x00, 0x8b, 0x00, 0x19, 
	0x19, 0x00, 0x8b, 0x00, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x00, 0x8b, 0x00, 0x19, 
	0x19, 0x00, 0x8b, 0x00, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x00, 0x8b, 0x00, 0x19, 
	0x19, 0x00, 0x8b, 0x8b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8b, 0x8b, 0x00, 0x19, 
	0x19, 0x00, 0x8b, 0x8b, 0x8b, 0x8b, 0x8b, 0x8b, 0x8b, 0x8b, 0x8b, 0x8b, 0x8b, 0x8b, 0x00, 0x19, 
	0x19, 0x00, 0x8b, 0x8b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8b, 0x00, 0x19, 
	0x19, 0x00, 0x8b, 0x8b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x19, 0x00, 0x8b, 0x00, 0x19, 
	0x19, 0x00, 0x8b, 0x8b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x19, 0x00, 0x8b, 0x00, 0x19, 
	0x19, 0x00, 0x8b, 0x8b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x19, 0x00, 0x8b, 0x00, 0x19, 
	0x19, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 
	0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19
};

const uint8 kWidthBitmap[] = {
	0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 
	0x19, 0x19, 0x00, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x00, 0x00, 0x00, 0x19, 
	0x19, 0x19, 0x00, 0x19, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x19, 0x00, 0x00, 0x00, 0x19, 
	0x19, 0x19, 0x00, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x19, 
	0x19, 0x19, 0x00, 0x19, 0x00, 0x00, 0x19, 0x19, 0x19, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x19, 
	0x19, 0x19, 0x00, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x19, 
	0x19, 0x19, 0x00, 0x19, 0x19, 0x19, 0x19, 0x19, 0x00, 0x00, 0x19, 0x19, 0x00, 0x00, 0x00, 0x19, 
	0x19, 0x19, 0x00, 0x19, 0x19, 0x19, 0x19, 0x00, 0x00, 0x19, 0x19, 0x19, 0x00, 0x00, 0x00, 0x19, 
	0x19, 0x19, 0x00, 0x19, 0x19, 0x19, 0x19, 0x00, 0x00, 0x19, 0x19, 0x19, 0x00, 0x00, 0x00, 0x19, 
	0x19, 0x19, 0x00, 0x19, 0x19, 0x19, 0x19, 0x00, 0x00, 0x19, 0x19, 0x19, 0x00, 0x00, 0x00, 0x19, 
	0x19, 0x19, 0x00, 0x19, 0x19, 0x19, 0x19, 0x00, 0x00, 0x19, 0x19, 0x19, 0x00, 0x00, 0x00, 0x19, 
	0x19, 0x19, 0x00, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x00, 0x00, 0x00, 0x19, 
	0x19, 0x19, 0x00, 0x19, 0x19, 0x19, 0x19, 0x00, 0x00, 0x19, 0x19, 0x19, 0x00, 0x00, 0x00, 0x19, 
	0x19, 0x19, 0x00, 0x19, 0x19, 0x19, 0x19, 0x00, 0x00, 0x19, 0x19, 0x19, 0x00, 0x00, 0x00, 0x19, 
	0x19, 0x19, 0x00, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x00, 0x00, 0x00, 0x19, 
	0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19
};

#endif /* _icons_h */
