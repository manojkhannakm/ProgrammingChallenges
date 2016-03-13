/*
 * @Author: Manoj Khanna
 */

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iostream>
#include <string>
#include <iterator>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
#include <utility>

using namespace std;

#define MAX 999999999

void fill(char grid[260][260], int m, int n, int x, int y, char c)
{
	char old_c = grid[y][x];

	grid[y][x] = c;

	if (x - 1 >= 1 && grid[y][x - 1] == old_c)
	{
		fill(grid, m, n, x - 1, y, c);
	}

	if (x + 1 <= m && grid[y][x + 1] == old_c)
	{
		fill(grid, m, n, x + 1, y, c);
	}

	if (y - 1 >= 1 && grid[y - 1][x] == old_c)
	{
		fill(grid, m, n, x, y - 1, c);
	}

	if (y + 1 <= n && grid[y + 1][x] == old_c)
	{
		fill(grid, m, n, x, y + 1, c);
	}
}

int main()
{
	char grid[260][260] = {};
	int m = 0, n = 0;

	char line[999999];
	while (gets(line),
			line[0] != 'X')
	{
		switch (line[0])
		{

			case 'I':
				sscanf(line, "I %d %d", &m, &n);

			case 'C':
				for (int i = 1; i <= n; ++i)
				{
					for (int j = 1; j <= m; ++j)
					{
						grid[i][j] = 'O';
					}
				}

				break;

			case 'L':
			{
				int x, y;
				char c;
				sscanf(line, "L %d %d %c", &x, &y, &c);

				grid[y][x] = c;
				break;
			}

			case 'V':
			{
				int x, y1, y2;
				char c;
				sscanf(line, "V %d %d %d %c", &x, &y1, &y2, &c);

				if (y2 < y1)
				{
					int tmp = y1;
					y1 = y2;
					y2 = tmp;
				}

				for (int i = y1; i <= y2; ++i)
				{
					grid[i][x] = c;
				}

				break;
			}

			case 'H':
			{
				int x1, x2, y;
				char c;
				sscanf(line, "H %d %d %d %c", &x1, &x2, &y, &c);

				if (x2 < x1)
				{
					int tmp = x1;
					x1 = x2;
					x2 = tmp;
				}

				for (int i = x1; i <= x2; ++i)
				{
					grid[y][i] = c;
				}

				break;
			}

			case 'K':
			{
				int x1, y1, x2, y2;
				char c;
				sscanf(line, "K %d %d %d %d %c", &x1, &y1, &x2, &y2, &c);

				for (int i = y1; i <= y2; ++i)
				{
					for (int j = x1; j <= x2; ++j)
					{
						grid[i][j] = c;
					}
				}

				break;
			}

			case 'F':
			{
				int x, y;
				char c;
				sscanf(line, "F %d %d %c", &x, &y, &c);

				if (grid[y][x] == c)
				{
					break;
				}

				fill(grid, m, n, x, y, c);
				break;
			}

			case 'S':
			{
				int i = 2;
				while (line[i] != '\0')
				{
					printf("%c", line[i++]);
				}
				printf("\n");

				for (int i = 1; i <= n; ++i)
				{
					for (int j = 1; j <= m; ++j)
					{
						printf("%c", grid[i][j]);
					}

					printf("\n");
				}

				break;
			}

		}
	}

	return 0;
}
