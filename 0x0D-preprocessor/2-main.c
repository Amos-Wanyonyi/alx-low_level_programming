#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>
#define ABS(x) ((x < 0) ? (-x) : (x))
void print_file_name()
{
	puts(__FILE__);
}
int main()
{
	print_file_name();

	return (0);
}
#endif
