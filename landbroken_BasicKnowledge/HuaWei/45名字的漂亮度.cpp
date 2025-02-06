#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include"stdafx.h"

int test_45()
{
	int N;
	while (cin >> N)
	{
		string str;
		vector<string> vec;
		vector<vector<int>> ivec(N);
		for (int i = 0;i<N;i++)
		{
			cin >> str;
			vec.push_back(str);
			ivec[i].resize(26);
			//ͳظ
			for (int j = 0;j<str.size();j++)
			{
				int tmp;
				if (str[j] >= 'a'&&str[j] <= 'z')
					tmp = str[j] - 'a';
				else
					tmp = str[j] - 'A';
				ivec[i][tmp]++;
			}
			sort(ivec[i].rbegin(), ivec[i].rend());
		}

		//iѭ
		for (int i = 0;i<vec.size();i++)
		{
			//jѭظ
			int nmax = 26;
			int sum = 0;
			for (int j = 0;j<ivec[i].size();j++)
			{
				if (ivec[i][j] == 0)
					break;
				sum += nmax*ivec[i][j];
				nmax--;
			}
			cout << sum << endl;
		}
	}
	return 0;
}