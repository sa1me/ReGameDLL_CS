/*
*
*   This program is free software; you can redistribute it and/or modify it
*   under the terms of the GNU General Public License as published by the
*   Free Software Foundation; either version 2 of the License, or (at
*   your option) any later version.
*
*   This program is distributed in the hope that it will be useful, but
*   WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
*   General Public License for more details.
*
*   You should have received a copy of the GNU General Public License
*   along with this program; if not, write to the Free Software Foundation,
*   Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*
*   In addition, as a special exception, the author gives permission to
*   link the code of this program with the Half-Life Game Engine ("HL
*   Engine") and Modified Game Libraries ("MODs") developed by Valve,
*   L.L.C ("Valve").  You must obey the GNU General Public License in all
*   respects for all of the code used other than the HL Engine and MODs
*   from Valve.  If you modify this file, you may extend this exception
*   to your version of the file, but you are not obligated to do so.  If
*   you do not wish to do so, delete this exception statement from your
*   version.
*
*/

#ifndef CDLL_DLL_H
#define CDLL_DLL_H
#ifdef _WIN32
#pragma once
#endif

#define MAX_WEAPON_SLOTS		5		// hud item selection slots
#define MAX_ITEM_TYPES			6		// hud item selection slots

#define MAX_ITEMS			4		// hard coded item types

#define DEFAULT_FOV			90		// the default field of view

#define HIDEHUD_WEAPONS			(1<<0)
#define HIDEHUD_FLASHLIGHT		(1<<1)
#define HIDEHUD_ALL			(1<<2)
#define HIDEHUD_HEALTH			(1<<3)
#define HIDEHUD_TIMER			(1<<4)
#define HIDEHUD_MONEY			(1<<5)
#define HIDEHUD_CROSSHAIR		(1<<6)

#define STATUSICON_HIDE			0
#define STATUSICON_SHOW			1
#define STATUSICON_FLASH		2

#define HUD_PRINTNOTIFY			1
#define HUD_PRINTCONSOLE		2
#define HUD_PRINTTALK			3
#define HUD_PRINTCENTER			4
#define HUD_PRINTRADIO			5

#define STATUS_NIGHTVISION_ON		1
#define STATUS_NIGHTVISION_OFF		0

#define ITEM_STATUS_NIGHTVISION		(1<<0)
#define ITEM_STATUS_DEFUSER		(1<<1)

#define SCORE_STATUS_DEAD		(1<<0)
#define SCORE_STATUS_BOMB		(1<<1)
#define SCORE_STATUS_VIP		(1<<2)

#define SIGNAL_BUY			(1<<0)
#define SIGNAL_BOMB			(1<<1)
#define SIGNAL_RESCUE			(1<<2)
#define SIGNAL_ESCAPE			(1<<3)
#define SIGNAL_VIPSAFETY		(1<<4)

#define DATA_IUSER3_CANSHOOT		(1<<0)
#define DATA_IUSER3_FREEZETIMEOVER	(1<<1)
#define DATA_IUSER3_INBOMBZONE		(1<<2)
#define DATA_IUSER3_HOLDINGSHIELD	(1<<3)

#define VGUI_MENU_TEAM			2
#define VGUI_MENU_MAPBRIEFING		4
#define VGUI_MENU_CLASS_T		26
#define VGUI_MENU_CLASS_CT		27
#define VGUI_MENU_BUY			28
#define VGUI_MENU_BUY_PISTOL		29
#define VGUI_MENU_BUY_SHOTGUN		30
#define VGUI_MENU_BUY_RIFLE		31
#define VGUI_MENU_BUY_SUBMACHINEGUN	32
#define VGUI_MENU_BUY_MACHINEGUN	33
#define VGUI_MENU_BUY_ITEM		34

#define MAX_AMMO_TYPES			32		// ???
#define MAX_AMMO_SLOTS			32		// not really slots

#define HUD_PRINTNOTIFY			1
#define HUD_PRINTCONSOLE		2
#define HUD_PRINTTALK			3
#define HUD_PRINTCENTER			4

#define WEAPON_SUIT			31
#define WEAPON_ALLWEAPONS		(~( 1 << WEAPON_SUIT ))

#endif // CDLL_DLL_H