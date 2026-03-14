#include <stdio.h>
#include <stdlib.h>
/**
* main -
* @argc:
* @argv:
* Return:
*/
int main(int argc, char **argv)
{
	int cents;
	int coins = 0;
	int coin_val[] = {25, 10, 5, 2, 1};
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0;
	  i < 5; i++)
	{
		coins += cents / coin_val[i];
		cents = cents % coin_val[i];
	}
	printf("%d\n", coins);
	return (0);
}
