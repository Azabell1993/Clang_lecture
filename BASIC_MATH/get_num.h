#ifndef GET_NUM_H
#define GET_NUM_H

#define GN_NONNEG 01
#define GN_GT_0

#define GN_ANY_BASE 0100
#define GN_BASE_8  0200
#define GN_BASE_16 0400

long getLong(const char *arg, int flages, const char *name);

int getlnt(const char *arg, int flages, const char *name);

#endif
