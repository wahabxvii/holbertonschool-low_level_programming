#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to a string
 * @b: constant byte
 * @n: how many bytes will be replaced
 * Return: pointer to a string
 */
char *_memset(char *s, char b, unsigned int n) {
  int i;

  for (i = 0; i < n; i++)
    s[i] = b;
}
