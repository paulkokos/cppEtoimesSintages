//
// Created by paulkokos on 14-Mar-18.
//

#include "ChapterLibrary.h"

char *ChapterLibrary::strcpy(char *target, const char *source) {
    char *t =  target;
    while (*source) *target++ = *source++;
    *target = '\0';
    return t;
}
