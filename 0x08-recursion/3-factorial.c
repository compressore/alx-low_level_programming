#include "main.h"

/**
* factorial - searchs for the factorial of a number
* @n: the number to find the factorial of
*
* Return: the factorial of the number
*/

int factorial(int n)
{

	if (n < 0)
		return (-1);
	if (n == 0 || n== 1)
		return (1)
	return (n * factorial(n - 1));

}
