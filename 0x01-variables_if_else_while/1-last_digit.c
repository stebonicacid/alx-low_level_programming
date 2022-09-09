#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - entry point
*
* Description: a program that assigns a random number to a variable
*
* Return: Always 0, (success)
*
**/
int main(void)
{
	/* your local variable*/
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	/*if the number is greater than 5 with the last digit being 10*/
if (n % 10 > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
else if (n % 10 == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
return (0);
}
