#include "monty.h"
int controls(FILE *file)
{
	int len = 0;
	char *buffer;
	size_t characters, bufsize = 0;
	/* getline() is an inbuilt function in the stdio.h library*/
	/* usage: https://linuxhint.com/getline-function-c/ */
	characters = getline(&buffer, &bufsize, file);
	if (file)
	{
		while (characters >= 1)
		{
			len++;

			printf("%s", buffer);
		}


	return (0);
}
