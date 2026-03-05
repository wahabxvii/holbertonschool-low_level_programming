#include "main.h"
/**
 * _strncat -
 *
 *
 *
 * Return:
 */
char *_strncat(char *dest, char *src, int n)
{
	char *s = dest;

	while (*s != '\0')
		s++;
	while (n--)
	{
		if (!(*s++ = *src++))
			return (dest);
	}
	*s = '\0';
	return (dest);
}
