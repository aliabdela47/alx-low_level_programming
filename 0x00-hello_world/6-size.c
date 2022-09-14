#include<stdio.h>

/**
* main - print a size with sizeo
*
* Return: cero
*/
int main(void)
{
char c;
int i;
long li;
long long lli;
float f;
printf("Size of a char: %u byte(s)\n", sizeof(char));
printf("Size of an int: %u byte(s)\n", sizeof(int));
printf("Size of a long int: %u byte(s)\n", sizeof(long int));
printf("Size of a long long int: %u byte(s)\n", sizeof(long long int));
printf("Size of a float: %u byte(s)\n", sizeof(float));
return (0);
}
