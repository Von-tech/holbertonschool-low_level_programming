#include <stdio.h>

int main(void)

{
	char name[7] = "Vonzell";
	
	for (int i = 0; name[i] != '\0'; i++)
	{
	    printf("%c", name[i]);
	}
	
	printf("\n");
	
	return 0;
}

