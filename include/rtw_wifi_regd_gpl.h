/******************************************************************************
 *
 * Copyright(c) 2009 - 2010 Realtek Corporation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110, USA
 *
 ******************************************************************************/

#ifndef __RTW_WIFI_REGD_H__
#define __RTW_WIFI_REGD_H__

struct country_code_to_enum_rd {
	u16 countrycode;
	const char *iso_name;
};

enum country_code_type_t {
	COUNTRY_CODE_USER = 0,

	/*add new channel plan above this line */
	COUNTRY_CODE_MAX
}; 

int rtw_regd_init(_adapter *padapter);
void rtw_reg_notify_by_driver(_adapter *adapter);

#endif /* __RTW_WIFI_REGD_H__ */

