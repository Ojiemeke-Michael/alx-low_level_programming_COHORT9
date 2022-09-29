#include "main.h"
int _strlength(char *s);
void palin_check(char *s, int start, int end, int *flag);
int is_palindrome(char *s);

/**
 * _strlength - finds the length of the string which is being
 * checked if it is a palindrome.
 *
 * @s: pointer to the string.
 *
 * Return: unsigned integer value "len".
 */
int _strlength(char *s)
{
	int len = 1;

	if (*s == '\0')
		return (0);
	else
		return (len + _strlength(s + 1));
}

/**
 * palin_check - the real function which checks the string
 * if it is a palindrom or not.
 *
 * @s: string to be checked.
 * @start: this is the starting index of the string. this is
 * zero as C is zero index based
 * @end: this is the end index of the string. this is gotten by
 * _strlength(s) - 1.
 * @flag: this contains the end value for which we will know if
 * the string in question is a palindrome or not.
 * Return: void i.e. no return.
 */
void palin_check(char *s, int start, int end, int *flag)
{
	if (start <= end)
	{
		if (*(s + start) == *(s + end))
			*flag *= 1;
		else
			*flag *= 0;
		palin_check(s, start + 1, end - 1, flag);
	}
}

/**
 * is_palindrome - returns the actual value of the palin_check function.
 * this is the actual code that will be returned to the main function.
 *
 * @s: string to be checked if it is a palindrome or not.
 * Return: if successful that the string is a palindrome, return 1. else 0.
 */
int is_palindrome(char *s)
{
	int flag = 1;

	palin_check(s, 0, _strlength(s) - 1, &flag);
	return (flag);
}
