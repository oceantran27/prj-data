#include <bits/stdc++.h>
#include <unordered_map>
#include "stdafx.h"
#include "HuaWei.h"
#include <iostream>
#include <string>
#include <set>
#include <map>
#include <vector>
#include <cctype>
#include <cmath>
#include <algorithm>
using namespace std;

int test_26()
{
	string str;
	while (getline(cin, str))
	{
		string english;
		for (int i = 0; i<str.size(); i++)//ȡӢĸ
			if (isalpha(str[i]))
				english += str[i];
		//Ӣĸ
		string english_sort;
		for (int i = 0; i<26; i++)
			for (int j = 0; j<english.size(); j++)
				if (english[j] - 'a' == i || english[j] - 'A' == i)
					english_sort += english[j];
		int tmp = 0;
		for (int i = 0; i<str.size(); i++)
			if (isalpha(str[i]))
			{
				str[i] = english_sort[tmp];
				tmp++;
			}
		cout << str << endl;
	}
	return 0;
}