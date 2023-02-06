#ifndef MYTIME_H
#define MYTIME_H

/************************************************************************************
 * convert time : returns a time with the format HH:MM a.m. or p.m., 12 hour format *
 *               first argument is minutes post midnight, second argumento is a     *
 *               character array with at minimum 11 elements, which will be filled  *
 *               with the format described here (also returning a pointer to it)    *
 ************************************************************************************/
char *convert_time(int, char []);

/************************************************************************************
 * minutes_convert: returns minutes after midnight from a variety of formats,       *
 * 		    like 09hr30min PM, 09:30pm, 09:30am 		            *
 * 		    only argument is a string (with at maximum of 11 characters.    *
 * 		    returns a negative value on error.    			    *
 ***********************************************************************************/
int minutes_convert(const char string[]);
#endif
