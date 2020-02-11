/*
===========================================================================
Copyright (C) 2015 Open Arena Team

This file is part of Open Arena.

Open Arena is free software; you can redistribute it
and/or modify it under the terms of the GNU General Public License as
published by the Free Software Foundation; either version 2 of the License,
or (at your option) any later version.

Open Arena is distributed in the hope that it will be
useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Open Arena; if not, write to the Free Software
Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
===========================================================================
*/
/* General settings */
#define MENU_ITEM_ALIGN_16_LEFT		16	/* Left column (2 column-layout) */
#define MENU_ITEM_ALIGN_16_CENTER	166	/* Center column (1 column-layout) */
#define MENU_ITEM_ALIGN_16_RIGHT		316	/* Right column (2 column-layout) */
#define MENU_ITEM_16_0		80
#define MENU_ITEM_16_1		96
#define MENU_ITEM_16_2		112
#define MENU_ITEM_16_3		128
#define MENU_ITEM_16_4		144
#define MENU_ITEM_16_5		160
#define MENU_ITEM_16_6		176
#define MENU_ITEM_16_7		192
#define MENU_ITEM_16_8		208
#define MENU_ITEM_16_9		224
#define MENU_ITEM_16_10		240
#define MENU_ITEM_16_11		256
#define MENU_ITEM_16_12		272
#define MENU_ITEM_16_13		288
#define MENU_ITEM_16_14		304
#define MENU_ITEM_16_15		320
#define MENU_ITEM_16_16		336
#define MENU_ITEM_16_17		352
#define MENU_ITEM_16_18		368
#define MENU_ITEM_16_19		384

#define MENU_ITEM_ALIGN_20_LEFT		20	/* Left column (2 column-layout) */
#define MENU_ITEM_ALIGN_20_CENTER	170	/* Center column (1 column-layout) */
#define MENU_ITEM_ALIGN_20_RIGHT		320	/* Right column (2 column-layout) */
#define MENU_ITEM_20_0		80
#define MENU_ITEM_20_1		100
#define MENU_ITEM_20_2		120
#define MENU_ITEM_20_3		140
#define MENU_ITEM_20_4		160
#define MENU_ITEM_20_5		180
#define MENU_ITEM_20_6		200
#define MENU_ITEM_20_7		220
#define MENU_ITEM_20_8		240
#define MENU_ITEM_20_9		260
#define MENU_ITEM_20_10		280
#define MENU_ITEM_20_11		300
#define MENU_ITEM_20_12		320
#define MENU_ITEM_20_13		340
#define MENU_ITEM_20_14		360
#define MENU_ITEM_20_15		380

#define MENU_ITEM_ALIGN_32_LEFT		32	/* Left column (2 column-layout) */
#define MENU_ITEM_ALIGN_32_CENTER	172	/* Center column (1 column-layout) */
#define MENU_ITEM_ALIGN_32_RIGHT		332	/* Right column (2 column-layout) */
#define MENU_ITEM_32_0		64
#define MENU_ITEM_32_1		96
#define MENU_ITEM_32_2		128
#define MENU_ITEM_32_3		160
#define MENU_ITEM_32_4		192
#define MENU_ITEM_32_5		224
#define MENU_ITEM_32_6		256
#define MENU_ITEM_32_7		288
#define MENU_ITEM_32_8		320
#define MENU_ITEM_32_9		352
#define MENU_ITEM_32_10		384

typedef enum {
	MENU_TAB_1,
	MENU_TAB_2,
	MENU_TAB_3,
	MENU_TAB_4,
	MENU_SUB_1,
	MENU_SUB_2,
	MENU_SUB_3,
	MENU_SUB_4,
	MENU_SUB_5,
	MENU_SUB_6,
	MENU_SUB_7,
	MENU_SUB_8,
	MENU_SUB_9,
	MENU_SUB_10
}

/* Menu tabs: uses cvar ui_menutab in order to set current screen. Only four tabs per menu. */
#define MENU_TAB_X_1			16	/* Horizontal origin of tab 1. */
#define MENU_TAB_X_2			144	/* Horizontal origin of tab 2. */
#define MENU_TAB_X_3			272	/* Horizontal origin of tab 3. */
#define MENU_TAB_X_4			400	/* Horizontal origin of tab 4. */
#define MENU_TAB_Y			32	/* Vertical origin of the tab. */
#define MENU_TAB_WIDTH		128	/* Tab general width */
#define MENU_TAB_HEIGHT		16	/* Tab general height */
#define MENU_TAB_STYLE		1
#define MENU_TAB_TEXTALIGN	ITEM_ALIGN_CENTER	/* Text align */
#define MENU_TAB_MARGIN_X	48 /* Tab general horizontal margin */
#define MENU_TAB_MARGIN_Y	12 /* Tab general vertical margin */
#define MENU_TAB_TEXTSCALE	0.30 /* Tab general text scale */
#define MENU_TAB_TEXTSTYLE	2
#define MENU_TAB_FORECOLOR	0.24 0.70 0.935 1	/* Foreground color of the tabs */
#define MENU_TAB_BACKCOLOR_OFF	1 1 1 1	/* Background color of the tabs (Off) */
#define MENU_TAB_BACKCOLOR_ON	1 1 1 1	/* Background color of the tabs (On) */
#define MENU_TAB_BACKGROUND_OFF	"ui/assets5/taboff.tga"	/* Background image of the tabs (Off) */
#define MENU_TAB_BACKGROUND_ON	"ui/assets5/tabon.tga"	/* Background image of the tabs (On) */
#define MENU_TAB_SOUND_ONCLICK	"ui/assets5/select.wav"	/* Sound played on tab selection */

/* "Main menu" items */
#define MENU_MAIN_TITLE_X				60
#define MENU_MAIN_TITLE_Y				32
#define MENU_MAIN_TITLE_WIDTH		512
#define MENU_MAIN_TITLE_HEIGHT		32
#define MENU_MAIN_TITLE_STYLE			1
#define MENU_MAIN_TITLE_TEXTALIGN		ITEM_ALIGN_CENTER
#define MENU_MAIN_TITLE_MARGIN_X		256
#define MENU_MAIN_TITLE_MARGIN_Y		24
#define MENU_MAIN_TITLE_TEXTSCALE		0.7
#define MENU_MAIN_TITLE_TEXTSTYLE		2
#define MENU_MAIN_TITLE_BACKGROUND	"azurebuttonreallylong"
#define MENU_MAIN_TITLE_FORECOLOR	0.24 0.70 0.935 1

#define MENU_MAIN_ITEM_X				60
#define MENU_MAIN_ITEM_WIDTH			600
#define MENU_MAIN_ITEM_HEIGHT		32
#define MENU_MAIN_ITEM_STYLE			1
#define MENU_MAIN_ITEM_BACKGROUND_OFF	"azurebuttonreallylong"
#define MENU_MAIN_ITEM_BACKGROUND_ON	"azurebuttonreallylonga"
#define MENU_MAIN_ITEM_TEXTALIGN		ITEM_ALIGN_CENTER
#define MENU_MAIN_ITEM_MARGIN_X		256
#define MENU_MAIN_ITEM_MARGIN_Y		24
#define MENU_MAIN_ITEM_TEXTSCALE		0.5
#define MENU_MAIN_ITEM_TEXTSTYLE		2
#define MENU_MAIN_ITEM_FORECOLOR		0.24 0.70 0.935 1
#define MENU_MAIN_ITEM_SOUND_ONCLICK		"ui/assets5/select.wav"
/* Menu items - up to 10 per column. */

/* Submenu items */
#define MENU_ITEM_TITLE_Y			32
#define MENU_ITEM_TITLE_WIDTH		144
#define MENU_ITEM_TITLE_HEIGHT	32
#define MENU_ITEM_TITLE_STYLE		1
#define MENU_ITEM_TITLE_BACKGROUND	""
#define MENU_ITEM_TITLE_TEXTALIGN	ITEM_ALIGN_CENTER
#define MENU_ITEM_TITLE_MARGIN_X	0
#define MENU_ITEM_TITLE_MARGIN_Y	12
#define MENU_ITEM_TITLE_TEXTSCALE	0.5
#define MENU_ITEM_TITLE_TEXTSTYLE	6
#define MENU_ITEM_TITLE_FORECOLOR	0.24 0.70 0.935 1
#define MENU_ITEM_TITLE_BACKCOLOR	""
#define MENU_ITEM_TITLE_NOFOCUSCOLOR	0

#define MENU_ITEM_WIDTH			144
#define MENU_ITEM_HEIGHT			32
#define MENU_ITEM_STYLE			1
#define MENU_ITEM_BACKGROUND		""
#define MENU_ITEM_TEXTALIGN		ITEM_ALIGN_RIGHT
#define MENU_ITEM_MARGIN_X		0
#define MENU_ITEM_MARGIN_Y		12
#define MENU_ITEM_TEXTSCALE		0.28
#define MENU_ITEM_TEXTSTYLE		6
#define MENU_ITEM_FORECOLOR		0.24 0.70 0.935 1
#define MENU_ITEM_BACKCOLOR		0.254902 0.290196 0.427451 1.0
#define MENU_ITEM_NOFOCUSCOLOR	0

#define MENU_LOWBUTTON_WIDTH			256
#define MENU_LOWBUTTON_HEIGHT		32
#define MENU_LOWBUTTON_STYLE			1
#define MENU_LOWBUTTON_BACKGROUND	"azurebuttonlong"
#define MENU_LOWBUTTON_Y				384
#define MENU_LOWBUTTON_TEXTALIGN		ITEM_ALIGN_CENTER
#define MENU_LOWBUTTON_MARGIN_X		32
#define MENU_LOWBUTTON_MARGIN_Y		24
#define MENU_LOWBUTTON_TEXTSTYLE		2
#define MENU_LOWBUTTON_TEXTSCALE		0.5
#define MENU_LOWBUTTON_FORECOLOR		0.24 0.70 0.935 1
#define MENU_LOWBUTTON_BACKCOLOR		0.254902 0.290196 0.427451 1.0
#define MENU_LOWBUTTON_SOUND_ONCLICK	"ui/assets5/select.wav"
/* ---------------------------------------------------------------------------------------------------------------------- */