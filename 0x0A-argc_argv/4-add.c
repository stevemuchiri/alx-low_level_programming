#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * main - Entry point of the program.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 if successful, 1 if there's an error.
 */
int main(int argc, char *argv[])
{
	int sum = 0, i;

	bool hasError = false;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
	int num = atoi(argv[i]);

	if (num <= 0 || !isdigit(*argv[i]))
	{
		hasError = true;
		break;
	}

	sum += num;
	}

	if (hasError)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", sum);

	return (0);
}

