#include "palindrome.h"
/**
 * reverse_number - reverse number
 * @n: unsigned long n
 * Return: Reversed number
 */

int reverse_number(unsigned long n)
{
	unsigned long r = 0;

	while (n != 0)
	{
		r = r * 10;
		r = r + n%10;
		n = n/10;
	}

	return (r);
}

int is_palindrome(unsigned long n)
{
	unsigned long r = reverse_number(n);

	if ((int)n == (int)r)
		return (1);
	else
		return (0);
}	
