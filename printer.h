#ifndef PRINTER_HEADER_GUARD
#define PRINTER_HEADER_GUARD

extern struct printer {
	struct printer (*s)(char *);
	struct printer (*d)(int);
	struct printer (*c)(char);
	struct printer (*f)(float);
} printer;

#endif
