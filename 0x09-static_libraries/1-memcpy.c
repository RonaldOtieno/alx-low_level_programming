cat 1-memcpy.c
#include "main.h"

/**
 * _memcpy - copies n bytes from memory area
 * @src: source
 * @dest: destination
 * @n: number of bytes filled
 *
 * Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++)
*(dest + a) = *(src + a);

return (dest);
}