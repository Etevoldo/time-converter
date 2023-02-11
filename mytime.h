#ifndef MYTIME_H
#define MYTIME_H

/************************************************************************************
 * convert time : Returns a time with the format HH:MM AM or PM or 24HRS            *
 *               first argument is minutes post midnight, second argumento is a     *
 *               character array with at minimum 11 elements, which will be filled  *
 *               with the format described here (also returning a pointer to it)    *
 ************************************************************************************/
char *convert_time(int, char [], int);

/************************************************************************************
 * minutes_convert: Returns minutes after midnight from a variety of formats,       *
 * 		   like 09hr30min PM, 09:30pm, 09:30am, 12:30PM, 13:00	            *
 * 		   only argument is a string (with at maximum of 11 characters)     *
 * 		   returns a -1  value on error.        			    *
 ***********************************************************************************/
int minutes_convert(const char string[]);

/********************************************************************* 
 * fwd_time: advances time in string by an integer amount of minutes *
 *	     does loop in case it reaches midnight                   *
 * *******************************************************************/
void fwd_time(char string[], int adv);

#endif
