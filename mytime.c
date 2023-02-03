#include <stdio.h>
#include "mytime.h"

char *convert_time(int user_time, char time12h[]){
        int hour, minute;

        hour   = user_time / 60;
        minute = user_time % 60;

        if (hour > 12)
                hour -= 12;

        sprintf(time12h, "%.2d:%.2d %s",
                hour, minute, (user_time >= 720) ? "p.m." : "a.m.");

        return time12h;
}
