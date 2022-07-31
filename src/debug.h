//
// Created by thomasf on 22/05/08.
//

#ifndef ECGLIB_DEBUG_H
#define ECGLIB_DEBUG_H

#define DEBUG 0

#if DEBUG
#include <stdio.h>
#define dprint(fmt, ...) printf(fmt, ##__VA_ARGS__)
#else
#define dprint(fmt, ...)
#endif

#endif //ECGLIB_DEBUG_H
