#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include<iostream>
#include<vector>
using namespace std;

class Solution {
private:
	vector<string> res;
	vector<int> charIndex;
	string inputStr;
public:
	vector<string> letterCasePermutation(string S) {
		inputStr = S;
		// ¼ַÿĸλ
		for (int i = 0; i < S.size(); i++) {
			if (isChar(S[i])) {
				charIndex.push_back(i);
			}
		}

		dfs(0);
		return res;
	}
public:
	void dfs(int index) {
		if (index >= charIndex.size()) {
			res.push_back(inputStr);
			return;
		}
		chageCapitalLowercase(&inputStr, charIndex[index]);
		dfs(index + 1);
		chageCapitalLowercase(&inputStr, charIndex[index]);
		dfs(index + 1);
	}

	bool isChar(char c) {
		if ((c >= 'a' && c <= 'z')
			|| (c >= 'A' && c <= 'Z')) {
			return true;
		}
		else {
			return false;
		}
	}

	void chageCapitalLowercase(string *s, int index) {
		int diff = 'a' - 'A';
		if ((*s)[index] > 'Z') {
			(*s)[index] -= diff;
		}
		else {
			(*s)[index] += diff;
		}
	}
};

int main() {
	Solution s;
	string str("a1b2");
	vector<string> res = s.letterCasePermutation(str);
	return 0;
}

