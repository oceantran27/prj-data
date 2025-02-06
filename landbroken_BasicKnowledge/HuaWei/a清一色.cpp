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
#include <climits>
#include <algorithm>
using namespace std;

/*
һɫ齫֮һָһֻɫɵĺơ
1-9ÿ4
ǲǾ廨ɫֻϡ
ӣһƣ: 111, 222, 333, ..., 999
˳ӣƣ: 123, 234, 345, ..., 789
ӣͬƣ: 11, 22, 33, ..., 99
ҪʵһжϸƣǷԺƣƣ

Ҫ:
- 齫ֻ 2, 5, 8, 11, 14
- ƿϳɣ1ǿӻ˳
 - "11" -> "11", 1ӣԺ
- "11122233" -> "111"+"222"+"33", 2ӣ1ӣ
- "11223344567" -> "11"+"234"+"234"+"567", 1ӣ3˳ӣ
-> "123"+"123"+"44"+"567", һϣҲ

:
ϷCַֻ'1'-'9'ѾС˳źãַȲ15ͬһ4Σʵ

:
Cַ"yes""no"
*/

int test_һɫ()
{
	string str;
	while (cin >> str)
	{
		//
		if (str.size()!=2 && str.size() != 5 && str.size() != 8
			&& str.size() != 11 && str.size() != 14)
		{
			cout << "no" << endl;
			continue;
		}
		//
		if (str.size()==2)
		{
			if (str[0]==str[1])
			{
				cout << "yes" << endl;
			}
			else
			{
				cout << "no" << endl;
			}
			continue;
		}

		bool flag = false;
		for (size_t i = 0; i < str.size() - 1; i++)
		{
			if (str[i]==str[i+1])
			{
				flag = false;
				//жӣȱ
				//δַ
				string tmp = str.substr(0, i) + str.substr(i + 2);
				//ȫ
				//next_permutation() һеУпֵܵеһ
				do
				{
					int kezi = 0, shunzi = 0;
					flag = false;
					for (size_t j = 0; j < tmp.size()-2;)
					{
						if (tmp[j]==tmp[j+1]&&tmp[j+1]==tmp[j+2])
						{
							kezi++;
							j += 3;
						}
						else if(tmp[j]+1==tmp[j+1]&&tmp[j+1]+1==tmp[j+2])
						{
							shunzi++;
							j += 3;
						}
						else
						{
							j++;
						}
					}
					//kezi˳
					if (kezi*3+shunzi*3== tmp.size())
					{
						flag = true;
						break;
					}
				} while (next_permutation(tmp.begin(), tmp.end()));
				if (flag)
				{
					break;
				}
			}
		}
		if (flag)
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
		}
	}
	return 0;
}