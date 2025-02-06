#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include "stdafx.h"
#include "HuaWei.h"
#include <iostream>
#include <string>
using namespace std;

int test_36()
{
	string key, s;
	while (cin >> key >> s)
	{
		//ܳ
		string R;
		int p[26] = { 0 };
		//
		for (int i = 0;i<key.length();i++)
		{
			if (key[i] >= 'a'&&key[i] <= 'z')
			{
				if (p[key[i] - 'a'] == 0)
				{
					R += key[i] - ('a' - 'A');
					p[key[i] - 'a'] = 1;
				}
			}
			else
			{
				if (p[key[i] - 'A'] == 0)
				{
					R += key[i];
					p[key[i] - 'A'] = 1;
				}
			}
		}
		//ĸ
		for (int i = 0;i<26;i++)
		{
			if (p[i] == 0)
			{
				R += 'A' + i;
			}
		}
		//
		for (int i = 0;i<s.length();i++)
		{
			if (s[i] >= 'a')
			{
				char c = R[s[i] - 'a'] + ('a' - 'A');
				cout << c;
			}
			else
			{
				cout << R[s[i] - 'A'];
			}
		}
		cout << endl;
	}
	return 0;
}