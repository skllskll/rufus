/*
 * Rufus: The Reliable USB Formatting Utility
 * UI element lists
 * Copyright © 2018 Pete Batard <pete@akeo.ie>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <windows.h>
#include "resource.h"

#pragma once

// Progress bar colors
#define PROGRESS_BAR_NORMAL_TEXT_COLOR		RGB(0x00, 0x00, 0x00)
#define PROGRESS_BAR_INVERTED_TEXT_COLOR	RGB(0xFF, 0xFF, 0xFF)
#define PROGRESS_BAR_BACKGROUND_COLOR		RGB(0xE6, 0xE6, 0xE6)
#define PROGRESS_BAR_BOX_COLOR				RGB(0xBC, 0xBC, 0xBC)
#define PROGRESS_BAR_NORMAL_COLOR			RGB(0x06, 0xB0, 0x25)
#define PROGRESS_BAR_PAUSED_COLOR			RGB(0xDA, 0xCB, 0x26)
#define PROGRESS_BAR_ERROR_COLOR			RGB(0xDA, 0x26, 0x26)

static int image_option_move_ids[] = {
	IDS_PARTITION_TYPE_TXT,
	IDC_PARTITION_TYPE,
	IDS_TARGET_SYSTEM_TXT,
	IDC_TARGET_SYSTEM,
	IDS_CSM_HELP_TXT,
	IDC_ADVANCED_DEVICE_TOOLBAR,
	IDC_LIST_USB_HDD,
	IDC_OLD_BIOS_FIXES,
	IDC_RUFUS_MBR,
	IDC_DISK_ID,
	IDS_FORMAT_OPTIONS_TXT,
	IDS_LABEL_TXT,
	IDC_LABEL,
	IDS_FILE_SYSTEM_TXT,
	IDC_FILE_SYSTEM,
	IDS_CLUSTER_SIZE_TXT,
	IDC_CLUSTER_SIZE,
	IDC_ADVANCED_FORMAT_TOOLBAR,
	IDC_QUICK_FORMAT,
	IDC_BAD_BLOCKS,
	IDC_NB_PASSES,
	IDC_EXTENDED_LABEL,
	IDS_STATUS_TXT,
	IDC_PROGRESS,
	IDC_ABOUT,
	IDC_LOG,
	IDC_MULTI_TOOLBAR,
	IDC_TEST,
	IDC_START,
	IDCANCEL,
	IDC_STATUS,
	IDC_STATUS_TOOLBAR,
};

static int image_option_toggle_ids[] = {
	IDS_IMAGE_OPTION_TXT,
	IDC_IMAGE_OPTION,
};

static int advanced_device_move_ids[] = {
	IDC_LIST_USB_HDD,
	IDC_OLD_BIOS_FIXES,
	IDC_RUFUS_MBR,
	IDS_FORMAT_OPTIONS_TXT,
	IDS_LABEL_TXT,
	IDC_LABEL,
	IDS_FILE_SYSTEM_TXT,
	IDC_FILE_SYSTEM,
	IDS_CLUSTER_SIZE_TXT,
	IDC_CLUSTER_SIZE,
	IDC_ADVANCED_FORMAT_TOOLBAR,
	IDC_QUICK_FORMAT,
	IDC_BAD_BLOCKS,
	IDC_NB_PASSES,
	IDC_EXTENDED_LABEL,
	IDS_STATUS_TXT,
	IDC_PROGRESS,
	IDC_ABOUT,
	IDC_LOG,
	IDC_MULTI_TOOLBAR,
	IDC_TEST,
	IDC_START,
	IDCANCEL,
	IDC_STATUS,
	IDC_STATUS_TOOLBAR,
};

static int advanced_device_toggle_ids[] = {
	IDC_SAVE,
	IDC_LIST_USB_HDD,
	IDC_OLD_BIOS_FIXES,
	IDC_RUFUS_MBR,
	IDC_DISK_ID,
};

static int advanced_format_move_ids[] = {
	IDS_STATUS_TXT,
	IDC_PROGRESS,
	IDC_ABOUT,
	IDC_LOG,
	IDC_MULTI_TOOLBAR,
	IDC_TEST,
	IDC_START,
	IDCANCEL,
	IDC_STATUS,
	IDC_STATUS_TOOLBAR,
};

static int advanced_format_toggle_ids[] = {
	IDC_QUICK_FORMAT,
	IDC_BAD_BLOCKS,
	IDC_NB_PASSES,
	IDC_EXTENDED_LABEL,
};

static int main_button_ids[] = {
	IDC_SELECT,
	IDC_START,
	IDCANCEL,
};

static int full_width_controls[] = {
	IDS_DEVICE_TXT,
	IDS_BOOT_SELECTION_TXT,
	IDS_IMAGE_OPTION_TXT,
	IDC_IMAGE_OPTION,
	IDS_LABEL_TXT,
	IDC_LABEL,
	IDC_ADVANCED_DRIVE_PROPERTIES,
	IDC_LIST_USB_HDD,
	IDC_OLD_BIOS_FIXES,
	IDC_ADVANCED_FORMAT_OPTIONS,
	IDC_QUICK_FORMAT,
	IDC_EXTENDED_LABEL,
	IDC_PROGRESS,
};

static int full_width_checkboxes[] = {
	IDC_LIST_USB_HDD,
	IDC_OLD_BIOS_FIXES,
	IDC_QUICK_FORMAT,
	IDC_EXTENDED_LABEL,
};

static int half_width_ids[] = {
	IDC_BAD_BLOCKS,
	IDC_RUFUS_MBR,
	IDS_PARTITION_TYPE_TXT,
	IDC_PARTITION_TYPE,
	IDC_FILE_SYSTEM,
	IDS_TARGET_SYSTEM_TXT,
	IDC_TARGET_SYSTEM,
	IDC_DISK_ID,
	IDS_CLUSTER_SIZE_TXT,
	IDC_CLUSTER_SIZE,
	IDC_NB_PASSES,
};

static int adjust_dpi_ids[][5] = {
	{IDS_DEVICE_TXT, IDC_DEVICE, IDC_SAVE, 0, 0},
	{IDS_BOOT_SELECTION_TXT, IDC_BOOT_SELECTION, IDC_HASH, IDC_SELECT, 0},
	{IDS_IMAGE_OPTION_TXT, IDC_IMAGE_OPTION, 0, 0, 0},
	{IDS_PARTITION_TYPE_TXT, IDC_PARTITION_TYPE, IDS_TARGET_SYSTEM_TXT, IDC_TARGET_SYSTEM, IDS_CSM_HELP_TXT},
	{IDC_ADVANCED_DEVICE_TOOLBAR, 0, 0, 0, 0},
	{IDC_LIST_USB_HDD, 0, 0, 0, 0 },
	{IDC_OLD_BIOS_FIXES, 0, 0, 0, 0},
	{IDC_RUFUS_MBR, IDC_DISK_ID, 0, 0, 0},
	{IDS_FORMAT_OPTIONS_TXT, 0, 0, 0, 0},
	{IDS_LABEL_TXT, IDC_LABEL, 0, 0, 0},
	{IDS_FILE_SYSTEM_TXT, IDC_FILE_SYSTEM, IDS_CLUSTER_SIZE_TXT, IDC_CLUSTER_SIZE, 0},
	{IDC_ADVANCED_FORMAT_TOOLBAR, 0, 0, 0, 0},
	{IDC_QUICK_FORMAT, 0, 0, 0, 0},
	{IDC_EXTENDED_LABEL, 0, 0, 0, 0},
	{IDC_BAD_BLOCKS, IDC_NB_PASSES, 0, 0, 0},
	{IDS_STATUS_TXT, 0, 0, 0, 0},
	{IDC_PROGRESS, 0, 0, 0, 0 },
	{IDC_MULTI_TOOLBAR, IDC_TEST, IDC_START, IDCANCEL, 0}
};
