#include <stdio.h>
/**
 *main - entry point
 *
 *Description:using the main function
 *this program Prints "Programming is like building a multilingual puzzle"
 *Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %id byte(s)\n", sizeof(c));
	printf("Size of an int: %id byte(s)\n", sizeof(i));
	printf("Size of a a long int: %id byte(s)\n", sizeof(li));
	printf("Size of a long long int: %id byte(s)\n", sizeof(lli));
	printf("Size of a float: %id byte(s)\n", sizeof(f));
	return (0);
}
