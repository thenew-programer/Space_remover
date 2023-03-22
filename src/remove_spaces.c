#include "main.h"

/**
 * main - Entry point
 * This function removes all the spaces from the beginning of a file
 * and stores it in a new variable
 * Return: the new line
 */

void remove_spaces(char *line, char *new_line)
{
	// Declare the counter for the for loop
	int i, j;

	// Find the index where the character start showing
	i = 0;
	while (line[i] == ' ' || line[i] == 9)
	{
		i++;
	}
	
	// Write the text into the new line
	for (j = 0; j < BUFFER_l; j++)
	{
		new_line[j] = line[i++];
	}

}
