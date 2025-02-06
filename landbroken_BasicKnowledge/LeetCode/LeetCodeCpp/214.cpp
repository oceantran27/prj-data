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
һַ sַͨǰַתΪĴҵؿַʽת̻Ĵ

ʾ 1:

: "aacecaaa"
: "aaacecaaa"
ʾ 2:

: "abcd"
: "dcbabcd"

*/
/*
ҪӶٸַַǰ׺Ӵĵĳйأ
Ҳ˵ȥǰ׺ĻӴֻҪʣµӴ
ˡ
ٸӣaacecaaaǰ׺Ӵaacecaaʣһa
ֻҪǰһaaˡ

KMPȽ
*/
class Solution {
public:
	string shortestPalindrome(string s) {
		string str = s;
		reverse(str.begin(), str.end());
		str = s + "#" + str;
		int len1 = s.size(), len2 = str.size();
		vector<int> vec(len2, 0);

		for (int i = 1; i < len2; i++)
		{
			int k = vec[i - 1];
			while (k > 0 && str[k] != str[i])
				k = vec[k - 1];
			k += str[i] == str[k];
			vec[i] = k;
		}

		return str.substr(len1 + 1, len1 - vec[len2 - 1]) + s;
	}
};