#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

char a[10001];
int ans = 0, sum = 0;

int main()
{

	while (gets(a))
	{
		if (a[0] == '+')
		{
			sum++;
		}
		else if (a[0] == '-')
		{
			sum--;
		}
		else
		{
			for (int i = 0; i < strlen(a); i++)
			{
				if (a[i] == ':')
				{
					ans += (strlen(a) - i - 1) * sum;
				}
			}
		}
	}
	cout << ans;

	return 0;
}
