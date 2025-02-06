#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/

class Solution {
public:
	int minAddToMakeValid(string S) {
		int result = 0;

		stack<char> s;	//stack to save '('

		for (int i = 0; i < S.size(); i++)
		{
			if (S[i] == '(') {
				s.push('(');
			}
			else {
				if (s.empty()) {
					result++;
				}
				else {
					s.pop();
				}
			}
		}

		result = result + s.size();

		return result;
	}
};
