#include "monty.h"
/**
 * malloc_err - prints an error upon failure of malloc
 * Return: EXIT_FAILURE
 */
int malloc_err(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	return (EXIT_FAILURE);
}

/**
 * usage_err - prints an error upon failure of to read file
 * Return: EXIT_FAILURE
 */
int usage_err(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	return (EXIT_FAILURE);
}

/**
 * line_err - prints an error message after encountering an error on a line
 * @line_number: the line that the error was encountered
 * Return: EXIT_FAILURE
 */
int line_err(unsigned int line_number)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
	return (EXIT_FAILURE);
}
/**
 * file_err -prints error message for failure to open file
 * @filename: pointer to the name of the file
 * Return: EXIT_FAILURE
 */
int file_err(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	return (EXIT_FAILURE);
}
