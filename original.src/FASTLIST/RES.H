#define RT_CURSOR	1
#define RT_BITMAP	2
#define RT_ICON	3
#define RT_MENU	4
#define RT_DIALOG	5
#define RT_STRING	6
#define RT_FONTDIR	7
#define RT_FONT	8
#define RT_ACCELERATOR	9
#define RT_RCDATA	10
#define RT_MESSAGETABLE	11
#define RT_GROUP_CURSOR	12
#define RT_GROUP_ICON	14
#define RT_VERSION	16
#define RT_DLGINCLUDE	17
#define RT_PLUGPLAY	19
#define RT_VXD	20
#define RT_ANICURSOR	21
#define RT_ANIICON	22


#define MOVEABLE	0x0010
#define FIXED	~MOVEABLE
#define PURE	0x0020
#define IMPURE	~PURE
#define PRELOAD	0x0040
#define LOADONCALL	~PRELOAD
#define DISCARDABLE	0x1000

#define DRESNUM 100;

enum{
rc_accelerators,rc_auto3state,     rc_autocheckbox,rc_autoradiobutton,rc_bitmap,
rc_caption,     rc_characteristics,rc_checkbox,    rc_class,          rc_combobox,
rc_control,     rc_ctext,          rc_cursor,      rc_defpushbutton,  rc_dialog,
rc_dialogex,    rc_edittext,       rc_exstyle,     rc_font,           rc_groupbox,
rc_icon,        rc_listbox,        rc_ltext,       rc_menu,           rc_menuex,
rc_menuitem,    rc_messagetable,   rc_popup,       rc_pushbox,        rc_pushbutton,
rc_radiobutton, rc_rcdata,         rc_rtext,       rc_scrollbar,      rc_state3,
rc_stringtable, rc_style,          rc_version,     rc_versioninfo,    rc_begin,
rc_end,         rc_language
};
