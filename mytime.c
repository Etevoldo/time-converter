#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mytime.h"

#define MIN_IN_HOUR 60
#define MAX_TIME_SIZE 11

char *convert_time(int user_time, char time12h[]){
        int hour, minute;

        hour   = user_time / MIN_IN_HOUR;
        minute = user_time % MIN_IN_HOUR;

        if (hour > 12)
                hour -= 12;

        sprintf(time12h, "%.2d:%.2d %s",
                hour, minute, (user_time >= 720) ? "p.m." : "a.m.");

        return time12h;
}

int minutes_convert(const char string[]){
	char *s, copy[MAX_TIME_SIZE];
	int min, hr, i = 0;
	bool is_pm = false, is_am = false;

	if (strlen(string) > MAX_TIME_SIZE - 1)
		return -1;

	s = strcpy(copy, string);
	while (*s){                                               //upper case the copy
		*s = toupper((unsigned int) *s);
		s++;
	}
	
	if ((s = strchr(copy, 'P')) != NULL && (*(s + 1) == 'M'))
		is_pm = true;
	if ((s = strchr(copy, 'A')) != NULL && (*(s + 1) == 'M'))
		is_am = true;

	sscanf(copy, "%2d%*[^0123456789]%2d", &hr, &min);
	if (hr == 12)
		is_pm = false;                                    //in case of 12:xxPM date situations
	if (min >= 60 || (is_pm && hr >= 13) || (is_am && hr >= 12) || hr >= 24)  //invalid hours
		return -1;
	
	return (hr * MIN_IN_HOUR) + min + (is_pm * 720);
}
