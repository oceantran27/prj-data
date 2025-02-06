#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
string reverseWords(string s) 
{
	if (s.size()==0)
		return "";
	stringstream ss;
	ss << s;
	string temporary,answer="";
	while (ss >> temporary)
		answer=temporary+' '+answer;
	answer.erase(answer.end()-1);
	return answer;
}
};
