#include "stdio.h"

int main ()
{
	int age = 37;
	int *address = &age;
	printf("%u", *address);

}
