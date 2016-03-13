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
	int n;
	while (scanf("%d\n", &n),
			n > 0)
	{
		double a[n], avg = 0.0;
		for (int i = 0; i < n; ++i)
		{
			scanf("%lf\n", &a[i]);

			avg += a[i];
		}

		avg /= n;

		double neg = 0.0, pos = 0.0;
		for (int i = 0; i < n; ++i)
		{
			double d = (long) ((a[i] - avg) * 100.0) / 100.0;
			if (d < 0.0)
			{
				neg += d;
			}
			else
			{
				pos += d;
			}
		}

		neg *= -1;

		printf("$%.2f\n", neg > pos ? neg : pos);
	}

	return 0;
}
