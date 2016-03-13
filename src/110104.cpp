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
	char nos[10][5][3] =
	{
		{
			{' ', '-', ' '},
			{'|', ' ', '|'},
			{' ', ' ', ' '},
			{'|', ' ', '|'},
			{' ', '-', ' '}
		},
		{
			{' ', ' ', ' '},
			{' ', ' ', '|'},
			{' ', ' ', ' '},
			{' ', ' ', '|'},
			{' ', ' ', ' '}
		},
		{
			{' ', '-', ' '},
			{' ', ' ', '|'},
			{' ', '-', ' '},
			{'|', ' ', ' '},
			{' ', '-', ' '}
		},
		{
			{' ', '-', ' '},
			{' ', ' ', '|'},
			{' ', '-', ' '},
			{' ', ' ', '|'},
			{' ', '-', ' '}
		},
		{
			{' ', ' ', ' '},
			{'|', ' ', '|'},
			{' ', '-', ' '},
			{' ', ' ', '|'},
			{' ', ' ', ' '}
		},
		{
			{' ', '-', ' '},
			{'|', ' ', ' '},
			{' ', '-', ' '},
			{' ', ' ', '|'},
			{' ', '-', ' '}
		},
		{
			{' ', '-', ' '},
			{'|', ' ', ' '},
			{' ', '-', ' '},
			{'|', ' ', '|'},
			{' ', '-', ' '}
		},
		{
			{' ', '-', ' '},
			{' ', ' ', '|'},
			{' ', ' ', ' '},
			{' ', ' ', '|'},
			{' ', ' ', ' '}
		},
		{
			{' ', '-', ' '},
			{'|', ' ', '|'},
			{' ', '-', ' '},
			{'|', ' ', '|'},
			{' ', '-', ' '}
		},
		{
			{' ', '-', ' '},
			{'|', ' ', '|'},
			{' ', '-', ' '},
			{' ', ' ', '|'},
			{' ', '-', ' '}
		}
	};

	int s;
	char n[10];
	while (scanf("%d %s\n", &s, n),
			s > 0)
	{
		for (int i = 0, x = s - 1; i < 5; )
		{
			for (int j = 0, len = strlen(n); j < len; ++j)
			{
				if (j > 0)
				{
					printf(" ");
				}

				for (int k = 0, y = s - 1; k < 3; )
				{
					printf("%c", nos[n[j] - '0'][i][k]);

					if (k == 1 && y > 0)
					{
						--y;
					}
					else
					{
						++k;
					}
				}
			}

			printf("\n");

			if ((i == 1 || i == 3) && x > 0)
			{
				--x;
			}
			else
			{
				++i;
				x = s - 1;
			}
		}

		printf("\n");
	}

	return 0;
}
