/*
 * This file is part of playerctl.
 *
 * playerctl is free software: you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * playerctl is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
 * more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with playerctl If not, see <http://www.gnu.org/licenses/>.
 *
 * Copyright © 2014, Tony Crisci and contributors
 */

#ifndef __PLAYERCTL_COMMON_H__
#define __PLAYERCTL_COMMON_H__

#include <glib.h>
#include <playerctl/playerctl-player.h>
#include <playerctl/playerctl-player-manager.h>

#define MPRIS_PREFIX "org.mpris.MediaPlayer2."

gboolean pctl_parse_playback_status(const gchar *playback_status, PlayerctlPlaybackStatus *status);

const gchar *pctl_playback_status_to_string(PlayerctlPlaybackStatus status);

gboolean pctl_parse_loop_status(const gchar *loop_status, PlayerctlLoopStatus *status);

const gchar *pctl_loop_status_to_string(PlayerctlLoopStatus status);

gchar *pctl_print_gvariant(GVariant *value);

gint pctl_player_name_compare(PlayerctlPlayerName *name_a,
                              PlayerctlPlayerName *name_b);

gint pctl_player_name_instance_compare(PlayerctlPlayerName *name, PlayerctlPlayerName *instance);

gint pctl_player_name_string_instance_compare(gchar *name, gchar *instance);

GList *pctl_player_name_find(GList *list, gchar *player_id, GBusType bus_type);

GList *pctl_player_name_find_instance(GList *list, gchar *player_id, GBusType bus_type);

void pctl_player_name_list_destroy(GList *list);

#undef __PLAYERCTL_COMMON_H__
#endif