#include <stdio.h>
/**
* main - prints program name
* @argc: argv count
* @argv: givin arguments
* Return: zero
*/
int main(int argc, char **argv)
{
	int i;

	for (i = 0;
	  i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
