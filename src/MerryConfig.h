#ifndef _MERRY_CONFIG_H_
#define _MERRY_CONFIG_H_

#include "MerryWx.h"
#include "ALMRunConfig.h"

const wxChar	MERRY_DEFAULT_TITLE[] = wxT("ALMRun");
const int		MERRY_DEFAULT_WIDTH = 360;
const int		MERRY_DEFAULT_HEIGHT = 36;
const int		MERRY_DEFAULT_TEXT_CTRL_LEFT = 80;
const int		MERRY_DEFAULT_TEXT_CTRL_TOP = 10;
const int		MERRY_DEFAULT_TEXT_CTRL_WIDTH = 259;
const int		MERRY_DEFAULT_TEXT_CTRL_HEIGHT = 17;
#ifdef __WXMSW__
const int		MERRY_DEFAULT_TEXT_CTRL_FONT_HEIGHT = 13;
#else
const int		MERRY_DEFAULT_TEXT_CTRL_FONT_HEIGHT = 15;
#endif
const char		MERRY_DEFAULT_CONFIG_FILE[] = "LuaEx/ALMRun.lua";
const wxChar	MERRY_DEFAULT_BACKGROUND_FILE[] = wxT("skin/merry.png");
const wxColor	MERRY_DEFAULT_BORDER_COLOR = wxColor(210, 210, 210);
const int		MERRY_DEFAULT_SEPERATOR_OFFSET = 80;
const int		MERRY_DEFAULT_SEPERATOR_MARGIN = 6;
//const int		MERRY_DEFAULT_LIST_BOX_MAIN_WIDTH = 200;
#define		    MERRY_DEFAULT_LIST_BOX_MAIN_WIDTH (this->GetClientSize().x - 1)
const wxColor	MERRY_DEFAULT_LIST_BOX_MAIN_COLOR = wxColor(240, 240, 240);
const wxColor	MERRY_DEFAULT_LIST_BOX_MAIN_FONT_COLOR = wxColor(50, 50, 50);
const wxColor	MERRY_DEFAULT_LIST_BOX_HELP_COLOR = wxColor(188, 199, 216);
const wxColor	MERRY_DEFAULT_LIST_BOX_HELP_FONT_COLOR = wxColor(0, 0, 0);
const wxColor	MERRY_DEFAULT_LIST_BOX_SEPERATOR_COLOR = wxColor(200,200,200);
const wxColor	MERRY_DEFAULT_LIST_BOX_SUB_FONT_COLOR = wxColor(100, 100, 100);
const int		MERRY_DEFAULT_LIST_BOX_ITEM_HEIGHT = 25;
#ifdef __WXMSW__
const int		MERRY_DEFAULT_LIST_BOX_ITEM_FONT_HEIGHT = 15;
#else
const int		MERRY_DEFAULT_LIST_BOX_ITEM_FONT_HEIGHT = 15;
#endif
const int		MERRY_DEFAULT_LIST_BOX_ITEM_MARGIN = 5;
const int		MERRY_DEFAULT_LIST_BOX_ITEM_H = MERRY_DEFAULT_LIST_BOX_ITEM_HEIGHT - MERRY_DEFAULT_LIST_BOX_ITEM_MARGIN;
const int		MERRY_DEFAULT_LIST_BOX_ITEM_MAX_NUM = 10;
const wxChar	MERRY_DEFAULT_LIST_BOX_ITEM_SELECTION_BACKGROUND_FILE[] = wxT("skin/merry_selection.png");

#endif
