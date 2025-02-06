#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "stdafx.h"

int test_41()
{
	int num;
	while (cin >> num)
	{
		//
		vector<int>m(num, 0);
		vector<int>x(num, 0);
		for (int i = 0;i < num;i++)
			cin >> m[i];
		for (int i = 0;i < num;i++)
			cin >> x[i];

		//ôֿ
		int allweight = 0;
		for (int i = 0;i < num;i++)
			allweight += m[i] * x[i];
		//Ѿ
		vector<int> temp(allweight + 1, 0);
		vector<int>weight;
		//ֻ1
		for (int i = 0;i <= x[0];i++)
		{
			weight.push_back(i*m[0]);
			temp[i*m[0]] = 1;
		}
		//Ӻ
		//iǺmi
		//jǵi
		//kѾ
		for (int i = 1;i <num;i++)
		{
			int len = weight.size();
			for (int j = 0;j <= x[i];j++)
			{
				for (int k = 0;k < len;k++)
				{
					//cout << weight[k] + j*m[i] << endl;
					int curW = weight[k] + j*m[i];
					if (temp[curW] == 0)
					{
						weight.push_back(curW);
						temp[curW] = 1;
					}
				}
			}
		}

		cout << weight.size() << endl;
	}
	return 0;
}