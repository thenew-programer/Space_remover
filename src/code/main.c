#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"


/**
 * main - starting point
 * Description: This programme removes the lines from 
 * the beginning of every line in a file and it prints the 
 * new lines to the stdout.
 * Return: As always 0 Success.
 * Return: 1 in Failure (it might be memory allocation error or-
 * file error);
 */

int main(int argc, char** argv)
{
	// check if the user input the file or not
	if (argc < 2)
	{
		perror("Please enter the name of the file!!");
		exit(EXIT_FAILURE);
	}

	// Define the variables
	FILE *fp;
	char line[BUFFER_l];
	char new_line[BUFFER_l];
	int buffer;

	// allocate the memory for the variables
	buffer = BUFFER_l;

	// open the file for reading mode
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		perror("Unable to open the file");
		exit(EXIT_FAILURE);
	}

	// loop over all the lines in the file
	while (fgets(line, buffer, fp))
	{
		// Remove the '\n' from the end of the line
		line[strlen(line) - 1] = 0;

		remove_spaces(line, new_line); /* function that removes the spaces from line*/

		write_line(new_line);/* function that print the new line to the stdout*/
	}

	// Say Goodbye and exit the programme
	//printf("GOODBYE!!\n");
	return (0);
}

