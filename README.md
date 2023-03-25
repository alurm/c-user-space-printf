# Printer

How could type safe formatted printing look in C, if it had no compiler support?

It might look something like this:

```c
int main() {
	char *a_string = "Days since last \"days since last\" meme";

	printer.s(a_string).s(": ").d(0).s("\n");
}
```

Not suited for production

Running:

```sh
cc user.c implementation.c && ./a.out
```

License: MIT
