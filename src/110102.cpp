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

int main()
{
	int xoffs[] = { -1, 0, 1, -1, 1, -1, 0, 1},
				  yoffs[] = { -1, -1, -1, 0, 0, 1, 1, 1},
							m, n, t = 0;
	while (scanf("%d %d\n", &m, &n),
			m > 0 && n > 0)
	{
		char grid[110][110];
		for (int i = 0; i < m; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				char c;
				scanf(" %c", &c);

				grid[i][j] = c == '.' ? '0' : c;
			}
		}

		for (int i = 0; i < m; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				if (grid[i][j] == '*')
				{
					for (int k = 0; k < 8; ++k)
					{
						int x = i + xoffs[k],
							y = j + yoffs[k];
						if (x >= 0 && x < m && y >= 0 && y < n && grid[x][y] != '*')
						{
							++grid[x][y];
						}
					}
				}
			}
		}

		if (t > 0)
		{
			printf("\n");
		}

		printf("Field #%d:\n", ++t);
		for (int i = 0; i < m; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				printf("%c", grid[i][j]);
			}

			printf("\n");
		}
	}

	return 0;
}
