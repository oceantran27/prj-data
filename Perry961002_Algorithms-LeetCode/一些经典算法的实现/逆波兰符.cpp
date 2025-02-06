#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include<iostream>
#include<unordered_map>
#include<stack>
#include<vector>
#include<string>

using namespace std;

unordered_map<string, int> grade = { { "(", -1 }, { "+", 0 }, { "-", 0 }, { "*", 1 }, { "/", 1 } };//ȼ

vector<string> transform(string str) {
	vector<string> result;
	if (str.empty())
		return result;
	stack<string> oper;//Ų
	str = "(" + str + ")";
	int len = str.size();
	for (int i = 0; i < len; i++) {
		//ȡ
		if (isdigit(str[i])){
			string tmp;
			while (i < len && isdigit(str[i])){
				tmp += str[i];
				i++;
			}
			result.push_back(tmp);
			i--;
			continue;
		}
		//ջ
		if (str[i] == '(')
			oper.push(string(1,str[i]));
		//,֮ǰĲջ,
		else if (str[i] == ')'){
			while (oper.top() != "("){
				result.push_back(oper.top());
				oper.pop();
			}
			oper.pop();//ųջ
		}
		//ǰȼջԪ
		else if (oper.empty() || grade[string(1, str[i])] > grade[oper.top()])
			oper.push(string(1, str[i]));
		//ջԪȼ߻ͬ
		else{
			while (!oper.empty()){
				string tmpoper = oper.top();
				if (grade[tmpoper] >= grade[string(1, str[i])]){
					result.push_back(tmpoper);
					oper.pop();
				}
				else
					break;
			}
			oper.push(string(1, str[i]));//ǰջ
		}
	}
	return result;
}
int main(){
	string str;
	cout << "ʽ,м䲻ֿܳո";
	cin >> str;
	vector<string> res = transform(str);
	for (int i = 0; i < res.size(); i++)
		cout << res[i] << " ";
	while (1);
	return 0;
}