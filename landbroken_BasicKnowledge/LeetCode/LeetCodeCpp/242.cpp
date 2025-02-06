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

/*
ַ s  t дһж t Ƿ s һĸλʡ

ʾ 1:

: s = "anagram", t = "nagaram"
: true
ʾ 2:

: s = "rat", t = "car"
: false
˵:
ԼַֻСдĸ

:
ַ unicode ַô죿ܷĽⷨӦ
*/
class Solution {
public:
	/*ȣo(nlogn)*/
	bool method_1(string s, string t)
	{
		sort(s.begin(), s.end());
		sort(t.begin(), t.end());
		return s == t;
	}

	/*,o(n)*/
	bool method_2(string s, string t)
	{
		if (s.size() != t.size())
			return false;

		vector<int> vec(26, 0);
		for (int i = 0;i<s.size();i++)
		{
			vec[s[i] - 'a']++;
			vec[t[i] - 'a']--;
		}
		for (int i = 0;i<vec.size();i++)
		{
			if (vec[i] != 0)
			{
				return false;
			}
		}

		return true;
	}

	bool isAnagram(string s, string t) {
		return method_2(s, t);
	}
};