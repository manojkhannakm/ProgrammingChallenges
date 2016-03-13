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
	int x, y;
	while (scanf("%d %d\n", &x, &y) != EOF)
	{
		int a = x, b = y;
		if (a > b)
		{
			swap(a, b);
		}

		int maxn = 0;
		for (int i = a; i <= b; ++i)
		{
			int j = i, n = 1;
			while (j != 1)
			{
				if (j % 2 == 0)
				{
					j /= 2;
				}
				else
				{
					j = j * 3 + 1;
				}

				++n;
			}

			if (n > maxn)
			{
				maxn = n;
			}
		}

		printf("%d %d %d\n", x, y, maxn);
	}

	return 0;
}
