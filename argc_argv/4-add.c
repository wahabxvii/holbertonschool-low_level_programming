#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
/**
* main - prints program name
* @argc: argv count
* @argv: givin arguments
* Return: zero
*/
int main(int argc, char **argv)
{
	int i;
	int j;
	int sum = 0;

	for (i = 1;
	  i < argc; i++)
	{
		for (j = 0;
		argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
