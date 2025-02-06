#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

//׺ת׺ټ׺ʽֵҪעǶڡ-ΪһԪĴ
#include "stdafx.h"

int test_50() {
	string s;
	while (cin >> s) {
		stack<char> opera;
		vector<int> numcnt;//ÿֵλԱ֤׺ʽʱȷ
		string s1;//׺ʽ
				  //׺ʽת׺ʽ
		for (int i = 0;i<s.size();i++) {
			if (s[i] >= '0'&&s[i] <= '9') {
				int tmp = 0;
				while (s[i] >= '0'&&s[i] <= '9') {
					tmp++;
					s1 += s[i];
					i++;
				}
				i--;
				numcnt.push_back(tmp);
			}
			else if (s[i] == '-' || s[i] == '+') {
				if (s[i] == '-' && (s[i - 1] == '(' || s[i - 1] == '[' || s[i - 1] == '{'))
					s1 += '0';
				while (!opera.empty() && (opera.top() == '*' || opera.top() == '/' || opera.top() == '+' || opera.top() == '-')) {
					s1 += opera.top();
					opera.pop();
				}
				opera.push(s[i]);
			}
			else if (s[i] == '*' || s[i] == '/') {
				while (!opera.empty() && (opera.top() == '*' || opera.top() == '/')) {
					s1 += opera.top();
					opera.pop();
				}
				opera.push(s[i]);
			}
			else if (s[i] == '(' || s[i] == '[' || s[i] == '{')
				opera.push(s[i]);
			else if (s[i] == ')') {
				while (opera.top() != '(') {
					s1 += opera.top();
					opera.pop();
				}
				opera.pop();
			}
			else if (s[i] == ']') {
				while (opera.top() != '[') {
					s1 += opera.top();
					opera.pop();
				}
				opera.pop();
			}
			else if (s[i] == '}') {
				while (opera.top() != '{') {
					s1 += opera.top();
					opera.pop();
				}
				opera.pop();
			}
			else
				cout << "Invalid input!" << endl;
		}
		while (!opera.empty()) {
			s1 += opera.top();
			opera.pop();
		}
		//׺ʽֵ
		stack<int> nums;
		int ind = 0;
		for (int i = 0;i<s1.size();i++) {
			if (s1[i] >= '0'&&s1[i] <= '9') {
				int total = 0;
				while (numcnt[ind]--)
					total = 10 * total + (s1[i++] - '0');
				i--;
				nums.push(total);
				ind++;
			}
			else {
				int tmp1 = nums.top();
				nums.pop();
				int tmp2 = nums.top();
				nums.pop();
				if (s1[i] == '+')
					nums.push(tmp2 + tmp1);
				else if (s1[i] == '-')
					nums.push(tmp2 - tmp1);
				else if (s1[i] == '*')
					nums.push(tmp2*tmp1);
				else
					nums.push(tmp2 / tmp1);
			}
		}
		cout << nums.top() << endl;
	}
	return 0;
}