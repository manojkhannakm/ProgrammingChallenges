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
	int t;
	scanf("%d\n\n", &t);

	while (t--)
	{
		int reg[20];
		for (int i = 0; i < 20; ++i)
		{
			reg[i] = 0;
		}

		int ram[1010], i = 0;
		while (scanf("%d\n", &ram[i++]) != EOF)
		{
		}

		for (int j = 0; j < i - 1; ++j)
		{
			printf("%d\n", ram[j]);
		}
		printf("\n");
	}

	return 0;
}
