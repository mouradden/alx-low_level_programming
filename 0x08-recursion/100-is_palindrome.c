#include "main.h"
/**
 * _strlen_recursion - display s in reverse
 * @s: the string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (s[0])
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * verify_palindrome - check if palindrome
 * @str: string to check
 * @start: int start
 * @end: int end
 * Return: 1 if str is palindrome, 0 otherwise
 */
int verify_palindrome(char *str, int start, int end)
{
	if (start >= end)
		return (1);
	if (str[start] != str[end])
		return (0);
	return verify_palindrome(str, start + 1, end - 1);
}
/**
 * is_palindrome - check if palindrome
 * @s: string to check
 * Return: 1 if str is palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (!s)
		return (1);
	else
		return (verify_palindrome(s, 0, len - 1));
}
