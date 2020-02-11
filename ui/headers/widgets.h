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

/* -----------------------------------
    MAIN MENU
    
    MENU_TITLE(_text)
    MENU_TITLE_CONDITIONAL(_text,_cvarForShow,_cvarForShowValue)
    MENU_ITEM(_text,_position,_closeMenu,_openMenu,_menuTip)
    MENU_ITEM_CONDITIONAL(_text,_position,_closeMenu,_openMenu,_cvarForShow,_cvarForShowValue,_menuTip)
    MENU_CUSTOMITEM(_text,_position,_menuType,_menuParms,_menuTip)
    MENU_CUSTOMITEM_CONDITIONAL(_text,_position,_menuType,_menuParms,_cvarForShow,_cvarForShowValue,_menuTip)
    ----------------------------------- */

#define MENU_TITLE(_text) \
itemDef { \
	name mainmenu_title \
	background MENU_MAIN_TITLE_BACKGROUND textscale MENU_MAIN_TITLE_TEXTSCALE textalign MENU_MAIN_TITLE_TEXTALIGN textalignx MENU_MAIN_TITLE_MARGIN_X textaligny MENU_MAIN_TITLE_MARGIN_Y forecolor MENU_MAIN_TITLE_FORECOLOR style MENU_MAIN_TITLE_STYLE textstyle MENU_MAIN_TITLE_TEXTSTYLE visible 1 hexcolor 0 1 2 3 \
	type 0 decoration \
	rect MENU_MAIN_TITLE_X MENU_MAIN_TITLE_Y MENU_MAIN_TITLE_WIDTH MENU_MAIN_TITLE_HEIGHT \
	text _text \
}
#define MENU_TITLE_CONDITIONAL(_text,_cvarForShow,_cvarForShowValue) \
itemDef { \
	name mainmenu_title \
	background MENU_MAIN_TITLE_BACKGROUND textscale MENU_MAIN_TITLE_TEXTSCALE textalign MENU_MAIN_TITLE_TEXTALIGN textalignx MENU_MAIN_TITLE_MARGIN_X textaligny MENU_MAIN_TITLE_MARGIN_Y forecolor MENU_MAIN_TITLE_FORECOLOR style MENU_MAIN_TITLE_STYLE textstyle MENU_MAIN_TITLE_TEXTSTYLE visible 1 hexcolor 0 1 2 3 \
	type 0 decoration \
	rect MENU_MAIN_TITLE_X MENU_MAIN_TITLE_Y MENU_MAIN_TITLE_WIDTH MENU_MAIN_TITLE_HEIGHT \
	text _text \
	cvarTest _cvarForShow showCVar { _cvarForShowValue } \
}
#define MENU_ITEM(_text,_position,_closeMenu,_openMenu,_menuTip) \
itemDef { \
	name mainmenu_item \
	background MENU_MAIN_ITEM_BACKGROUND_OFF textscale MENU_MAIN_ITEM_TEXTSCALE textalign MENU_MAIN_ITEM_TEXTALIGN textalignx MENU_MAIN_ITEM_MARGIN_X textaligny MENU_MAIN_ITEM_MARGIN_Y forecolor MENU_MAIN_ITEM_FORECOLOR style MENU_MAIN_ITEM_STYLE textstyle MENU_MAIN_ITEM_TEXTSTYLE visible 1 hexcolor 0 1 2 3 \
	type ITEM_TYPE_BUTTON \
	action { play MENU_MAIN_ITEM_SOUND_ONCLICK; close _closeMenu; open _openMenu; setcvar ui_menutab 0; } \
	mouseEnter { setcvar ui_tip _menuTip; fadein tooltip; setbackground MENU_MAIN_ITEM_BACKGROUND_ON; } \
	mouseExit { fadeout tooltip; setbackground MENU_MAIN_ITEM_BACKGROUND_OFF; } \
	rect MENU_MAIN_ITEM_X _position MENU_MAIN_ITEM_WIDTH MENU_MAIN_ITEM_HEIGHT \
	text _text \
}
#define MENU_ITEM_CONDITIONAL(_text,_position,_closeMenu,_openMenu,_cvarForShow,_cvarForShowValue,_menuTip) \
itemDef { \
	name mainmenu_item \
	background MENU_MAIN_ITEM_BACKGROUND_OFF textscale MENU_MAIN_ITEM_TEXTSCALE textalign MENU_MAIN_ITEM_TEXTALIGN textalignx MENU_MAIN_ITEM_MARGIN_X textaligny MENU_MAIN_ITEM_MARGIN_Y forecolor MENU_MAIN_ITEM_FORECOLOR style MENU_MAIN_ITEM_STYLE textstyle MENU_MAIN_ITEM_TEXTSTYLE visible 1 hexcolor 0 1 2 3 \
	type ITEM_TYPE_BUTTON \
	action { play MENU_MAIN_ITEM_SOUND_ONCLICK; close _closeMenu; open _openMenu; setcvar ui_menutab 0; } \
	mouseEnter { setcvar ui_tip _menuTip; fadein tooltip; setbackground MENU_MAIN_ITEM_BACKGROUND_ON; } \
	mouseExit { fadeout tooltip; setbackground MENU_MAIN_ITEM_BACKGROUND_OFF; } \
	rect MENU_MAIN_ITEM_X _position MENU_MAIN_ITEM_WIDTH MENU_MAIN_ITEM_HEIGHT \
	text _text \
	cvarTest _cvarForShow showCVar { _cvarForShowValue } \
}

#define  MENU_CUSTOMITEM(_text,_position,_menuType,_menuParms,_menuTip) \
itemDef { \
	name mainmenu_item \
	background MENU_MAIN_ITEM_BACKGROUND_OFF textscale MENU_MAIN_ITEM_TEXTSCALE textalign MENU_MAIN_ITEM_TEXTALIGN textalignx MENU_MAIN_ITEM_MARGIN_X textaligny MENU_MAIN_ITEM_MARGIN_Y forecolor MENU_MAIN_ITEM_FORECOLOR style MENU_MAIN_ITEM_STYLE textstyle MENU_MAIN_ITEM_TEXTSTYLE visible 1 hexcolor 0 1 2 3 \
	type _menuType _menuParms \
	action { play MENU_MAIN_ITEM_SOUND_ONCLICK; } \
	mouseEnter { setcvar ui_tip _menuTip; fadein tooltip; setbackground MENU_MAIN_ITEM_BACKGROUND_ON; } \
	mouseExit { fadeout tooltip; setbackground MENU_MAIN_ITEM_BACKGROUND_OFF; } \
	rect MENU_MAIN_ITEM_X _position MENU_MAIN_ITEM_WIDTH MENU_MAIN_ITEM_HEIGHT \
	text _text \
}
#define  MENU_CUSTOMITEM_CONDITIONAL(_text,_position,_menuType,_menuParms,_cvarForShow,_cvarForShowValue,_menuTip) \
itemDef { \
	name mainmenu_item \
	background MENU_MAIN_ITEM_BACKGROUND_OFF textscale MENU_MAIN_ITEM_TEXTSCALE textalign MENU_MAIN_ITEM_TEXTALIGN textalignx MENU_MAIN_ITEM_MARGIN_X textaligny MENU_MAIN_ITEM_MARGIN_Y forecolor MENU_MAIN_ITEM_FORECOLOR style MENU_MAIN_ITEM_STYLE textstyle MENU_MAIN_ITEM_TEXTSTYLE visible 1 hexcolor 0 1 2 3 \
	type _menuType _menuParms \
	action { play MENU_MAIN_ITEM_SOUND_ONCLICK; } \
	mouseEnter { setcvar ui_tip _menuTip; fadein tooltip; setbackground MENU_MAIN_ITEM_BACKGROUND_ON; } \
	mouseExit { fadeout tooltip; setbackground MENU_MAIN_ITEM_BACKGROUND_OFF; } \
	rect MENU_MAIN_ITEM_X _position MENU_MAIN_ITEM_WIDTH MENU_MAIN_ITEM_HEIGHT \
	text _text \
	cvarTest _cvarForShow showCVar { _cvarForShowValue } \
}

/* -----------------------------------
    SUBMENU WIDGETS
    
    LOWBUTTON_MENUS(_text,_alignment,_menuToClose,_menuToOpen,_cvarForTabs,_tip)
    LOWBUTTON_MENUS_CONDITIONAL(_text,_alignment,_menuToClose,_menuToOpen,_cvarForTabs,_cvarForShow,_cvarForShowValue,_tip)
    LOWBUTTON_TABS(_text,_alignment,_cvarForTabs,_tabForShow,_tip)
    LOWBUTTON_TABS_CONDITIONAL(_text,_alignment,_cvarForTabs,_tabForShow,_cvarForShow,_cvarForShowValue,_tip)
    ----------------------------------- */

#define LOWBUTTON_MENUS(_text,_alignment,_menuToClose,_menuToOpen,_cvarForTabs,_buttonTip) \
itemDef {\
	name submenu_button\
	text _text\
	background MENU_LOWBUTTON_BACKGROUND style MENU_LOWBUTTON_STYLE textstyle MENU_LOWBUTTON_TEXTSTYLE textscale MENU_LOWBUTTON_TEXTSCALE textalign MENU_LOWBUTTON_TEXTALIGN textalignx MENU_LOWBUTTON_MARGIN_X textaligny MENU_LOWBUTTON_MARGIN_Y backcolor MENU_LOWBUTTON_BACKCOLOR forecolor MENU_LOWBUTTON_FORECOLOR visible 1 hexcolor 0 1 2 3 \
	type ITEM_TYPE_BUTTON\
	rect _alignment MENU_LOWBUTTON_Y MENU_LOWBUTTON_WIDTH MENU_LOWBUTTON_HEIGHT\
	mouseEnter { setcvar ui_tip _buttonTip; fadein tooltip; }\
	mouseExit { fadeout tooltip; }\
	action { play MENU_LOWBUTTON_SOUND_ONCLICK; close _menuToClose; open _menuToOpen; setcvar _cvarForTabs 0; }\
}

#define LOWBUTTON_MENUS_CONDITIONAL(_text,_alignment,_menuToClose,_menuToOpen,_cvarForTabs,_cvarForShow,_cvarForShowValue,_tip) \
itemDef {\
	name submenu_button\
	text _text\
	background MENU_LOWBUTTON_BACKGROUND style MENU_LOWBUTTON_STYLE textstyle MENU_LOWBUTTON_TEXTSTYLE textscale MENU_LOWBUTTON_TEXTSCALE textalign MENU_LOWBUTTON_TEXTALIGN textalignx MENU_LOWBUTTON_MARGIN_X textaligny MENU_LOWBUTTON_MARGIN_Y backcolor MENU_LOWBUTTON_BACKCOLOR forecolor MENU_LOWBUTTON_FORECOLOR visible 1 hexcolor 0 1 2 3 \
	type ITEM_TYPE_BUTTON\
	rect _alignment MENU_LOWBUTTON_Y MENU_LOWBUTTON_WIDTH MENU_LOWBUTTON_HEIGHT\
	mouseEnter { setcvar ui_tip _buttonTip; fadein tooltip; }\
	mouseExit { fadeout tooltip; }\
	action { play MENU_LOWBUTTON_SOUND_ONCLICK; close _menuToClose; open _menuToOpen; setcvar _cvarForTabs 0; }\
	cvarTest _cvarForShow showCVar { _cvarForShowValue }\
}
#define LOWBUTTON_TABS(_text,_alignment,_cvarForTabs,_tabForShow,_buttonTip) \
itemDef {\
	name submenu_button\
	text _text\
	background MENU_LOWBUTTON_BACKGROUND style MENU_LOWBUTTON_STYLE textstyle MENU_LOWBUTTON_TEXTSTYLE textscale MENU_LOWBUTTON_TEXTSCALE textalign MENU_LOWBUTTON_TEXTALIGN textalignx MENU_LOWBUTTON_MARGIN_X textaligny MENU_LOWBUTTON_MARGIN_Y backcolor MENU_LOWBUTTON_BACKCOLOR forecolor MENU_LOWBUTTON_FORECOLOR visible 1 hexcolor 0 1 2 3 \
	type ITEM_TYPE_BUTTON\
	rect _alignment MENU_LOWBUTTON_Y MENU_LOWBUTTON_WIDTH MENU_LOWBUTTON_HEIGHT\
	mouseEnter { setcvar ui_tip _buttonTip; fadein tooltip; }\
	mouseExit { fadeout tooltip; }\
	action { play MENU_LOWBUTTON_SOUND_ONCLICK; setcvar _cvarForTabs _tabForShow; }\
}

#define LOWBUTTON_TABS_CONDITIONAL(_text,_alignment,_cvarForTabs,_tabForShow,_cvarForShow,_cvarForShowValue,_tip) \
itemDef {\
	name submenu_button\
	text _text\
	background MENU_LOWBUTTON_BACKGROUND style MENU_LOWBUTTON_STYLE textstyle MENU_LOWBUTTON_TEXTSTYLE textscale MENU_LOWBUTTON_TEXTSCALE textalign MENU_LOWBUTTON_TEXTALIGN textalignx MENU_LOWBUTTON_MARGIN_X textaligny MENU_LOWBUTTON_MARGIN_Y backcolor MENU_LOWBUTTON_BACKCOLOR forecolor MENU_LOWBUTTON_FORECOLOR visible 1 hexcolor 0 1 2 3 \
	type ITEM_TYPE_BUTTON\
	rect _alignment MENU_LOWBUTTON_Y MENU_LOWBUTTON_WIDTH MENU_LOWBUTTON_HEIGHT\
	mouseEnter { setcvar ui_tip _buttonTip; fadein tooltip; }\
	mouseExit { fadeout tooltip; }\
	action { play MENU_LOWBUTTON_SOUND_ONCLICK; setcvar _cvarForTabs _tabForShow; }\
	cvarTest _cvarForShow showCVar { _cvarForShowValue }\
}
