#include <bits/stdc++.h>
#include <string>
#include <map>
#include <set>
#include <algorithm>
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

/*
һַ (s) һַģʽ (p) ʵһ֧ '?'  '*' ͨƥ䡣

'?' ƥκεַ
'*' ƥַַ
ַȫƥƥɹ

˵:

s Ϊգֻ a-z Сдĸ
p Ϊգֻ a-z СдĸԼַ ?  *
ʾ 1:

:
s = "aa"
p = "a"
: false
: "a" ޷ƥ "aa" ַ
ʾ 2:

:
s = "aa"
p = "*"
: true
: '*' ƥַ
ʾ 3:

:
s = "cb"
p = "?a"
: false
: '?' ƥ 'c', ڶ 'a' ޷ƥ 'b'
ʾ 4:

:
s = "adceb"
p = "*a*b"
: true
: һ '*' ƥַ, ڶ '*' ƥַ "dce".
ʾ 5:

:
s = "acdcb"
p = "a*c?b"
: false
*/

class Solution {
public:
	
	/*
	ֱѭжϣûͨ
	s="abefcdgiescdfimde"
    p="ab*cd?i*de"
	ʱͨӦƥڶcdǵһ
	*/
	bool method1(string s, string p)
	{
		size_t i = 0;
		size_t j = 0;
		string ss, pp;
		bool flag_star = false;
		bool ret = true;
		while (i < s.size() && j<p.size())
		{
			//ضƥ䵱ǰַ
			if ('?' == p[j])
			{
				i++;
				j++;
				flag_star = false;
			}
			//ȷƥ䵽ǰַ
			else if (s[i] == p[j])
			{
				i++;
				j++;
				flag_star = false;
			}
			//*ƥ
			//**
			//*?
			//*
			//*a
			else if ('*' == p[j])
			{
				flag_star = true;
				//**תΪ3
				while ('*' == p[j])
				{
					j++;
				}
				if (j == p.size())
				{
					ret = true;
					return ret;
				}
			}
			else
			{
				if (flag_star)
				{
					i++;
					if (i == s.size())
					{
						ret = false;
						return ret;
					}
				}
				else
				{
					ret = false;
					return ret;
				}
			}
		}

		if (i<s.size())
		{
			ret = false;
			return ret;
		}

		while (j<p.size())
		{
			if (p[j] != '*')
			{
				return false;
			}
			j++;
		}

		return ret;
	}

	/*
	̬滮
	*/
	bool method2(string s, string p)
	{
		//pҪƥ䵽ַ=p-'*'
		int cnt_star=0;
		for (auto& it : p)
		{
			if (it == '*')
			{
				cnt_star++;
			}
		}
		if (p.size() - cnt_star > s.size())
			return false;

		vector<bool> vec_s(s.size() + 1);
		vector<vector<bool>> dp(p.size() + 1, vec_s);

		dp[0][0] = true;

		for (size_t i = 1; i <= p.size(); i++)
		{
			//ÿѭĳֵǺŲλʱƥַĳֵΪfalse
			dp[i][0] = dp[i - 1][0] && p[i - 1] == '*';
		}
		for (size_t j = 1; j <= s.size(); j++)
		{
			//0pΪգʱûжƥ
			dp[0][j] = false;
		}

		for (size_t i = 1; i <= p.size(); i++)
		{
			for (size_t j = 1; j <= s.size(); j++)
			{
				if (s[j - 1] == p[i - 1]|| p[i - 1] == '?')
				{
					dp[i][j] = dp[i - 1][j - 1];
				}
				else if (p[i-1]=='*')
				{
					//̬滮ʽǺţ ʾǺſƥ
					//0ϴѭĽ
					//ڸղѭĽ
					dp[i][j] = dp[i - 1][j] || dp[i][j - 1];
				}
			}
		}

		return dp[p.size()][s.size()];
	}

	bool isMatch(string s, string p) 
	{
		return method2(s, p);
	}
};

bool test_44(string s, string p)
{
	Solution so;
	return so.isMatch(s, p);
}