#include "printer.h"

int main() {
	char *a_string = "Days since last \"days since last\" meme";

	printer.s(a_string).s(": ").d(0).s("\n");
	printer.s("A float: ").f(123.456).s("\n");
	printer.s("A char: ").c('a' + 10).s("\n");
}
