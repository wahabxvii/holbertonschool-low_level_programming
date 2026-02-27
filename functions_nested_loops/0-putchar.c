#include <unistd.h>
/**
 * main -starting point
 * print _putchar without standered liprarys
 * Return: 0
 */
int _putchar(char c);
int main(void)
{
const char *str = "_putchar";
int n = 0;
while (str[n] != '\0')
{
_putchar(n);
n++;
}
_putchar("\n");
return (0);
}
