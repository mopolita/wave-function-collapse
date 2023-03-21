#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <errno.h>
#include <err.h>
#include "sudoku.h"

char* init_empty()
{
	char* grid = calloc(81, sizeof(char));
	if (grid == NULL)
		err(1, NULL);
	return grid;
}

char* init_grid(size_t nb_in)
{
	int l;
	int c;
	char filled[81] = {0};
	size_t i = 0;	
	if (nb_in >= 81)
		errx(1,"cannot initialise the grid : nb_in must be inferior to 81");
	char* grid = calloc(81, sizeof(char));
	if (grid == NULL)
		err(1, NULL);
	srand(time(NULL));
	while(i<nb_in)
	{
		l = rand() % 9;
		c = rand() % 9;
		if (filled[l*9 + c] == 0)
		{
			filled[l*9 + c] = 1;
			// TODO: modify so function verifies that the number added is valid
			char valid = 0;
			while(valid == 0)
			{
				valid = 1;
			}
			grid[l*9 + c] = rand() % 9;
			i++;
		}
	}
	return grid;
}

int save_grid(char* grid, char* path)
{
	//TODO
}

char* load_grid(char* path)
{
	//TODO
}

void print_grid(char* grid)
{
	//TODO
}
