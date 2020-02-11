
#define MENU_ITEM_TITLE_LEFT			16 /* Left */
#define MENU_ITEM_TITLE_CENTER		166 /* Center */
#define MENU_ITEM_TITLE_RIGHT			316 /* Right */
#define MENU_ITEM_TITLE_WIDTH			300 /* Half of the screen: use with Left and Right */
#define MENU_ITEM_TITLE_WIDTH_FULL	600 /* Full screen: use with Center */
#define MENU_ITEM_TITLE_HEIGHT		32 /* Default title height */
#define MENU_ITEM_TITLE_HEIGHT_DOUBLE	64 /* Doubled title height */
#define MENU_ITEM_TITLE_Y				32 /* Title default vertical position */
#define MENU_ITEM_WIDTH			256 /* For two-columned menus */
#define MENU_ITEM_WIDTH_FULL		512 /* For single-columned menus */
#define MENU_ITEM_HEIGHT			32 /* Default item height */
#define MENU_ITEM_HEIGHT_DOUBLE	64 /* Double item height */
#define MENU2_ITEM_TITLE_LEFT			32 /* Left */
#define MENU2_ITEM_TITLE_CENTER		172 /* Center */
#define MENU2_ITEM_TITLE_RIGHT		332 /* Right */
#define MENU2_ITEM_TITLE_Y			70
#define MENU2_ITEM_TITLE_TEXTSCALE	0.5
#define MENU2_ITEM_WIDTH			144 /* For two-columned menus */
#define MENU2_ITEM_WIDTH_FULL	288 /* For single-columned menus */
#define MENU2_ITEM_HEIGHT		16 /* Default item height */
#define MENU2_ITEM_HEIGHT_DOUBLE	32 /* Double item height */
#define MENU2_ITEM_TEXTSCALE		0.28
#define MENU3_ITEM_WIDTH			192 /* For two-columned menus */
#define MENU3_ITEM_WIDTH_FULL	384 /* For single-columned menus */
#define MENU3_ITEM_HEIGHT		20 /* Default item height */
#define MENU3_ITEM_HEIGHT_DOUBLE	40 /* Double item height */

/*
#define TRANSITION_LOGOZOOM // Enable red logo zoomout for starting a game
*/
/*#define MP_MENUMUSIC		"music/azuremenu" // music to use for menu*/
#define MP_BACKGROUND	"ui/assets/splash22.jpg" // background of the menu
#define MP_SND_SELECT		"ui/assets5/select.wav" // confirm noise
#define MP_SND_HOVER		"ui/assets5/hover.wav" // hover noise

#define MP_BACKGROUND1	"background_azure" // background of the menu
//#define MP_BACKGROUND1 "debugbg2" // background of the menu

#define MP_BACKGROUND2	"mpbscroll" // background of the menu
#define MP_MENUMUSIC		"music/menu_azure.mod" // music to use for menu
#define MP_MAINBUTTONBG	"azurebutton" 
#define MP_FATBUTTONBG	"azurebuttoncombo"
#define MP_WIDEBUTTONBG	"azurebuttonlong" 
#define MP_WIDEBUTTONWONBG	"azurebuttonlongwon" 
#define MP_LONGBUTTONBG	"azurebuttonreallylong"
#define MP_LONGBUTTONBGA	"azurebuttonreallylonga"
#define MP_TABON			"ui/assets5/tabon.tga"
#define MP_TABOFF			"ui/assets5/taboff.tga"

//#define MP_DIALOGBG "dialogbg_azure" // used for every every and every box and every box and every box
//#define MP_DIALOGBG "ui/assets5/scan2" // used for every every and every box and every box and every box
#define MP_DIALOGBG		"ui/atlas/BG" // used for every every and every box and every box and every box

#define MP_INGAMEBUTTONBARBG	"ui/assets3/igtopbtn" 
#define MP_INGAMEBUTTONBARBG2	"ui/assets3/igtopbtn2" 
#define MP_BACKGROUNDMODEL	"ui/assets5/models/bg.md3"
#define MP_TITLECOLOR			1 1 1 1 // Title colors
#define MP_TEXTCOLOR			0.24 0.70 0.935 1 // regular color of menu button text
#define MP_FOCUSCOLOR			0.04 0.8 0.835 1 // focus 
#define MP_BOX_HEADERCOLOR	1 1 1 1 // for the text appearing above editboxes
#define MP_SMALLCOLOR			0.25 0.45 0.85 1 // the smaller options colors

#define MP_BOX_BORDER			0.25 0.25 0.25 1
#define MP_BOX_FORE			0.01 0.5 1 1
#define MP_BOX_BACK			0.0 0.0 0.1 1
#define MP_BOX_OUTLINE		0.01 0.5 1 0.3

#define MP_BUTTONBGCOLOR		0.254902 0.290196 0.427451 1.0
#define MP_BUTTON2BGCOLOR	0.156863 0.188235 0.258824 1.0
#define MP_TABLONGBGCOLOR		0.156863 0.188235 0.258824 1.0
#define MP_UNTABLONGBGCOLOR	0.156863 0.188235 0.258824 1.0
#define MP_DIALOGfBGCOLOR		0.0823529 0.101961 0.12549 0.7
#define MP_DIALOGBGCOLOR		1 1 1 0.6
#define MP_TABONBGCOLOR		1 1 1 1
#define MP_TABOFFBGCOLOR		1 1 1 1

#define MP_KEYBINDBGCOLOR		0.325 0.07 0.11 1.0
#define MP_KEYBINDSELCOLOR	0.18 0.73 0.91 1.0

// Context sensitive area at the bottom

#define TIP_BG					0 0 0 1
#define TIP_COLOR				1 1 1 1
#define TIP_SMALLTEXT			1 1 1 0.1

// Text Scales and stuff
// 
// 48pt - 1.0
// 24pt - 0.5
// 9pt - 0.1875

#define SMALLFONTSIZE			9
#define MEDIUMFONTSIZE		24
#define LARGEFONTSIZE			48

#define KEYBINDBITTEXTSCALE	.1875 // Controls menu columns

// Offsets and Alignments for main menus and the like (to adjust for like, background decoration images)

#define MMENU_ALIGNITEM		ITEM_ALIGN_CENTER
#define MMENU_OFFSETITEMH		60
#define TABPOSY				32

// Scheme color choices
#define HEXGENERIC			0 1 2 3
#define HEXTITLE				0 -1 -1 -1
#define HEXLISTBOX			0 1 2 3
#define HEXMAINBUTTON			0 1 2 3
#define HEXMAINBG				0 1 2 3
#define HEXBORDERS			1 1 2 3

#define MP_KEYBINDMENU		"ui/panels/keybind2.bit"
// uncomment this for simpler keybind choices

/* For general menu sorting */
#define MP_SND_BACK			""