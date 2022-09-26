#include "main.h"
/**
* _memcpy - Copies @n bytes from the memory area pointed
*           to by @src into that pointed to by @dest.
* @dest: A pointer to the memory area to copy @src into.
* @src: The source buffer to copy characters from.
* @n: The number of bytes to copy from @src.
* main - checks the code
* Return: Always 0.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
for (; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
