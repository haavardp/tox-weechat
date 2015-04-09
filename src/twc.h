/*
 * Copyright (c) 2015 Håvard Pettersson <mail@haavard.me>
 *
 * This file is part of Tox-WeeChat.
 *
 * Tox-WeeChat is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Tox-WeeChat is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Tox-WeeChat.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef TOX_WEECHAT_H
#define TOX_WEECHAT_H

extern struct t_weechat_plugin *weechat_plugin;

/// Return codes used throughout Tox-WeeChat.
enum t_twc_rc {
    TWC_RC_OK,
    /// Generic error return code.
    TWC_RC_ERROR,
    /// Malloc error return code.
    TWC_RC_ERROR_MALLOC,
};

#endif // TOX_WEECHAT_H

