#include "monty.h"
/**
 * main - the entry point for the monty project interpreter
 * @argc: the numbe rof arguments sent from the terminal
 * @argv: pointer to an array of char pointers of the arguments
 * Return: depends on the error file
 */
int main(int argc, char **argv)
{
	FILE *file = NULL;

	if (argc != 2)
		return (usage_err());

	file = fopen(argv[1], "r");

	if (file == NULL)
		return (file_err(argv[1]));
	controls(file);	
	fclose(file);
	return (0);
}

