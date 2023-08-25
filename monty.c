#include "monty.h"

/**
 * main - Entry point
 * @args: Argument count
 * @argv: Argument vector
 *
 * Return: 0
 */

char *token2 = NULL;
int main(int argc, char *argv[])
{
	char *line_ptr = NULL;
	char *token1;
	FILE *fp;
	int line_number = 0, getline_val;

	if (argc != 2)
	{
		dprintf(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		dprintf(2, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	ope_rations(line_ptr, line_number, fp);

	free(line_ptr);
	fclose(fp);
	return (0);
}
