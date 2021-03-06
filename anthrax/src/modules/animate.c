/**
 * GreenPois0n Anthrax - animate.c
 * Copyright (C) 2011 Chronic-Dev Team
 * Copyright (C) 2011 Joshua Hill
 * Copyright (C) 2011 Nicolas Haunold
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
 **/

#include "utils.h"
#include "device.h"
#include "animate.h"

#define SIGKILL 9

static int animate_pid = 0;
const char* animate[] = { "/usr/bin/animate", NULL };
const char *animate2[] = { "/usr/bin/animate", "-l", NULL };

int animate_start() {
	int ret = 0;
	device_info_t info;
	ret = device_info(&info);
	if(ret < 0) return -1;

	// Don't play animation is this is an iPad or AppleTV
	if(strcmp(info.model, DEVICE_IPAD1G) && strcmp(info.model, DEVICE_APPLETV2)) {
		// unlink("/mnt/usr/bin/animate");sync(); // removed because of custom logos
		if (file_exists("/mnt/usr/bin/animate")==-1) {
			puts("- Installing animate binary\n");
			ret = install("/files/animate", "/mnt/usr/bin/animate", 0, 80, 0755);sync();
			if(ret < 0) return -1;
		} else {
			puts("[!] animate binary already exists. Will not overwite.\n");
		}

		puts("- Launching animate in background\n");
		ret = fsexec(animate, cache_env, true);
		if (ret < 0) return -1;
	}

	return 0;
}

int animate_stop() {
	int ret = 0;
	if(animate_pid > 0) {
		puts("- Killing PID\n");
		kill(animate_pid, SIGKILL);
		unlink("/mnt/usr/bin/animate");
	}
	return 0;
}

