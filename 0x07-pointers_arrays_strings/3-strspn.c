#include "main.h"
/**
 * _strspn - look for accept
 * @s: the string where we have to search for accept
 * @accept: the string to find
 * Return: how many bytes before finding the first identification
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int    count;

	count = 0;
	while (*s)
	{
		if (_strchr(accept, *s))
			count++;
		else
			break;
		s++;
	}
	return (count);
}

int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}