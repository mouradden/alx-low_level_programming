#include "main.h"
/**
 * more_numbers - print numbers to 14
 */
void more_numbers(void)
{
	int	i;
	int n;

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				putchar(i / 10 + '0');
			putchar(i % 10 + '0');
		}
		putchar('\n');
	}
	
}
int main(void)
{
    more_numbers();
    return (0);
}