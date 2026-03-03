#include "main.h"
/**
 * print_rev - 
 * @s: pointer 
 * Return: nothing
 */
void print_rev(char *s)
{
	int l = 0;
	int r = _strlen(s) - 1;
	char t;

	while (l < r)
	{
		t = s[l];
		s[l] = s[r];
		s[r] = t;
		l++;
		r--;
	}
}
