#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include"stdafx.h"
#include"HuaWei.h"
#include<set>
#include<map>
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;

int test_һֻһεַ()
{
	string str;
	while (cin >> str)
	{
		int left = 0;
		map<char, int> s;
		int size = str.size();
		for (int i = 0;i<size;i++)
		{
			char tmp = str[i];
			if (s.find(tmp) == s.end())
				s[tmp] = i;//¼
			else
				s[tmp] = size + 1;//ظӵsize
		}
		int minNum = size + 1;
		for (auto it = s.begin();it != s.end();it++)
		{
			minNum = min(minNum, it->second);
		}

		if (minNum<size)
			cout << str[minNum] << endl;
		else
			cout << -1 << endl;
	}
	return 0;
}