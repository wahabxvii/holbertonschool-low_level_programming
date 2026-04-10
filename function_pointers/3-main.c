#include "3-calc.h"
/**
* main - entry point
* @argc: number of arguments
* @argv: array of arguments
*
* Return: 0 on success 98 if wrong number of arguments
*		99 if invalid operator 100 if divided by 0
*/
int main(int argc, char *argv[])
{
	int n1;
	int n2;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && n2 == 0)
	{
		printf("Error\n");
			exit(100);
	}
	printf("%d\n", func(n1, n2));
	return (0);
}
