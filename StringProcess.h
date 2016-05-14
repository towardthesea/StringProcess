/*
 *   StringProcess.h
 *
 *   Created on: May 7, 2016
 *   Author:     Danh Doan
 *
 */


#ifndef STRINGPROCESS_H
#define STRINGPROCESS_H

#include <stdarg.h>

int   strConcat(char*, int, ...);
int   strToInt(char*);
float strToFloat(char*);
int   intToStr(char*, int);
int   floatToStr(char*, float);

#endif // STRINGPROCESS_H
