/*
 *   StringProcess.cpp
 *
 *   Created on: May 7, 2016
 *   Author:     Danh Doan
 *
 */

#include "StringProcess.h"

int strConcat(char* res, int sz, ... ) {
    int len=0;
    va_list lst;

    va_start(lst, sz);

    for (int i = 0; i < sz; i++ ) {
        char* str = va_arg(lst, char*);
        for ( int id = 0; str[id]; id++ ) {
            res[len] = str[id];
            len++;
        }
    }

    res[len] = '\0';
    return len;
}

int strToInt(char* str) {
    int res = 0;
    bool isNeg = str[0] == '-';
    for (int i = (int)isNeg; str[i]; i++ )
        (res *= 10) += str[i] - '0';

    return (isNeg ? -res : res);
}

float strToFloat(char* str) {
    float res = 0.0f, p = 1.0f;
    bool dot = false;
    bool isNeg = str[0] == '-';
    for (int i = (int)isNeg; str[i]; i++) {
        if (str[i] == '.')
            dot = true;
        else if (!dot)
            (res *= 10) += str[i] - '0';
        else {
            p *= 10;
            res += (str[i] - '0') / p;
        }
    }

    return (isNeg ? -res : res);
}

int intToStr(char* str, int value) {
    bool isNeg = false;
    if (value < 0) {
        value = -value;
        isNeg = true;
    }

    int len = 0;
    for ( ; value; value /= 10 )
        str[len++] = char(value % 10 + '0');

    if (isNeg)
        str[len++] = '-';

    for (int i = 0; i < len/2; i++) {
        char tmp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = tmp;
    }

    if (!len) str[len++] = '0';
    str[len] = '\0';
    return len;
}

int floatToStr(char* str, float value) {
    int len = intToStr(str, (int) value);
    if ( value < 0 ) value = -value;
    value -= (int) value;
    str[len++] = '.';

    for (int i = 0; i < 3; i++) {
        value *= 10;
        str[len++] = char(int(value) + '0');
        value -= (int) value;
    }

    str[len] = '\0';
    return len;
}
