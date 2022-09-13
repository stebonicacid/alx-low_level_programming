#include <unistd.h>
#include <stdio.h>
/**
 * main - Check description
 * Description: It prints the word Prince, followed by a new line.
 * Return: 0.
 */
int main(void)
{
	char word[6] = "Prince";
	int i;

	for (i = 0; i < 6; i++)
		putchar(word[i]);
	putchar('\n');
	return (0);
}
