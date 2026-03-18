#include "level3.h"

static char	edge_char(int row, int col, int x, int y)
{
	if ((row == 1 || row == y) && (col == 1 || col == x))
		return ('o');
	if (row == 1 || row == y)
		return ('-');
	if (col == 1 || col == x)
		return ('|');
	return (' ');
}

int	rush_checksum(int x, int y)
{
	int	row;
	int	col;
	int	sum;

	sum = 0;
	row = 1;
	while (row <= y)
	{
		col = 1;
		if (row == 1 || row == y)
		{
			while (col <= x)
			{
				sum += edge_char(row, col, x, y) * ((row * 10) + col);
				col++;
			}
		}
		else
		{
			while (col < x)
			{
				sum += edge_char(row, col, x, y) * ((row * 10) + col);
				col++;
			}
		}
		row++;
	}
	return (sum);
}
