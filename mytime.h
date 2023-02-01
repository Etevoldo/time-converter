#ifndef MYTIME_H
#define MYTIME_H

/************************************************************************************
 * convert time : returns a time with the format HH:MM a.m. or p.m., 12 hour format *
 *               first argument is minutes post midnight, second argumento is a     *
 *               character array with at minimum 11 elements, which will be filled  *
 *               with the format described here (also returning a pointer to it)    *
 ************************************************************************************/
char * convert_time(int, char []);

#endif