Certainly! Here is a program that prints all possible combinations of single-digit numbers, adhering to the given constraints:

```c
#include <stdio.h>

int main(void)
{
    int num = 0;

    while (num < 10)
    {
        putchar((num % 10) + '0');

        if (num < 9)
        {
            putchar(',');
            putchar(' ');
        }

        num++;
    }

    putchar('\n');

    return (0);
}
