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
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
