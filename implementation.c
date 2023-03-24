#include <stdio.h>
#include "printer.h"

#define WRAP(NAME, TYPE) struct printer NAME(TYPE arg) { printf("%" #NAME, arg); return printer; }

WRAP(s, char *);
WRAP(d, int);
WRAP(c, char);
WRAP(f, float);

struct printer printer = { s, d, c, f };
