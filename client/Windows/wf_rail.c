/**
 * FreeRDP: A Remote Desktop Protocol Implementation
 * Windows RAIL
 *
 * Copyright 2012 Jason Champion <jchampion@zetacentauri.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <freerdp/utils/event.h>
#include <freerdp/utils/hexdump.h>
#include <freerdp/utils/rail.h>
#include <freerdp/rail/rail.h>

#include "wf_window.h"
#include "wf_rail.h"

void wf_rail_paint(wfInfo* wfi, rdpRail* rail, sint32 uleft, sint32 utop, uint32 uright, uint32 ubottom)
{
}

void wf_rail_register_callbacks(wfInfo* wfi, rdpRail* rail)
{
}

void wf_rail_send_client_system_command(wfInfo* wfi, uint32 windowId, uint16 command)
{
}

void wf_rail_send_activate(wfInfo* wfi, HWND window, boolean enabled)
{
}

void wf_process_rail_event(wfInfo* wfi, rdpChannels* chanman, RDP_EVENT* event)
{
}

void wf_rail_adjust_position(wfInfo* wfi, rdpWindow *window)
{
}

void wf_rail_end_local_move(wfInfo* wfi, rdpWindow *window)
{
}
