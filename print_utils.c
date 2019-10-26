#include <stdarg.h>
#include <stdio.h>

#define DBGPRINTF(...) fprintf(stdout, __VA_ARGS__);\
		       fprintf(stdout, "Another line\n");
#define DBGPRINTF2(format, ...) fprintf(stdout, format, __VA_ARGS__);\
				fprintf(stdout, "Yet another line\n");

void dbg_print(const char *format, ...)
{
	va_list args;
	va_start(args, format);
	vprintf(format, args);
	va_end(args);
	return;
}

int main(int argc, char *argv[])
{
	dbg_print("test 1: %s %s\n", "one", "two");
	dbg_print("test 2: %s %d %c\n", "apple", 222, 'y');
	DBGPRINTF("%s:%d: %s\n", __FILE__, __LINE__, "Testing");
	DBGPRINTF("%s:%d: %s\n", __FILE__, __LINE__, "Testing again");
	DBGPRINTF2("Testing: %s %s\n", "string 1", "string 2");
	fprintf(stdout, "DEBUG %s:%d: " "test 1: %s %s" "\n",
		__FILE__, __LINE__, "one", "two");
	return 0;
}

