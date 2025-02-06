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

int test_48()
{
	int n;
	while (cin >> n)
	{
		int val, last;
		list<int> li;
		list<int>::iterator it22;
		cin >> val;
		li.insert(li.begin(), val);
		for (int i = 1;i<n;i++)
		{
			cin >> val >> last;
			for (auto it = li.begin();it != li.end();it++)
			{
				if ((*it) == last)
				{
					auto it2 = it;
					if ((++it2) == li.end())
					{
						li.push_back(val);
					}
					else
					{
						li.insert(it2, val);
					}
					break;
				}
			}
		}
		//ɾ
		cin >> last;
		for (auto it = li.begin();it != li.end();it++)
		{
			if ((*it) == last)
			{
				it = li.erase(it);
				break;
			}
		}
		//
		for (auto it = li.begin();it != li.end();it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	return 0;
}