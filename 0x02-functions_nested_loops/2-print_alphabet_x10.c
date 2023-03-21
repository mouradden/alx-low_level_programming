#include "main.h"
/**
* print_alphabet_x10 - prints alphabets 10 times
*/
void print_alphabet_x10(void)
{
	int n;
	int i;

	for (n = 0; n <= 9; n++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			putchar(i);
		}
		putchar('\n');
	}
}
