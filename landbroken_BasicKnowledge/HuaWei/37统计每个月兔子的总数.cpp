#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include "stdafx.h"
#include "HuaWei.h"
#include <iostream>
using namespace std;

int test_37()
{
	int m;
	while (cin >> m)
	{
		//a:һbcӸ
		int a = 1, b = 0, c = 0;
		while (--m)
		{
			//ÿһ仯
			c += b;
			b = a;
			a = c;
		}
		cout << a + b + c << endl;
	}
	return 0;
}