#include "main.h"
/**
 *_memcpy - copy n bytes from mem area src to dest
 *@dest - destination
 *@src - memory area
 *@n - bytes filled
 *Return : return pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}

