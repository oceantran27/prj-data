#include <bits/stdc++.h>
#include <unordered_map>
#include <algorithm>
#include "stdafx.h"
#include "HuaWei.h"
#include <iostream>
#include <string>
#include <set>
#include <map>
#include <vector>
#include <cmath>
using namespace std;

int test_9()
{
	int n;
	while (cin >> n)
	{
		int ret, tmp = n;
		set<int> s;

		//n00
		//ѭ
		if (n == 0)
		{
			ret = 0;;
		}
		while (n != 0)
		{
			tmp = n % 10;
			n /= 10;
			//˵µĲظ
			if (s.find(tmp) == s.end())
			{
				s.insert(tmp);
				ret = ret * 10 + tmp;
			}
		}
		cout << ret << endl;
	}
	return 0;
}