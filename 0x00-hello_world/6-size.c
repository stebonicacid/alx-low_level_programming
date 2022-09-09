#include <stdio.h>
/**
* main-entry point for the program.
*
*Retrun:0 if no errors, return non zero if errors.
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;

printf("size of char = %d bytes\n", sizeof(a));
printf("size of int = %d bytes\n", sizeof(b));
printf("size of long int = %d bytes\n", sizeof(c));
printf("size of long long int = %d bytes\n", sizeof(d));
printf("size of float = %d bytes\n", sizeof(e));
return (0);
}
