#include <stdio.h>

void main(void)
{
	int a = 1, v = 7;
	int *z;
	printf("%d %p \n", a, &a);
	printf("%d %p \n", v, &v);
	printf("%p \n", z);
	z = &a;
	printf("%p \n", z);
	printf("%d \n", *z);
}
