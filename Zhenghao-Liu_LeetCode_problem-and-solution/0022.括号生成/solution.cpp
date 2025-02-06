#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

static const auto SpeedUp = []{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    vector<string> generateParenthesis(int n) 
    {
	    vector<string>answer;
	    generate(answer,"(",1,0,n);
	    return answer;
    }
    void generate(vector<string>&answer,string str,int left,int right,const int& n)
    {
	    if (right>left || left>n || right>n)
		    return;
        else if (left+right==n*2-1)
	    {
		    answer.push_back(string(str+")"));
		    return;
	    }
	    generate(answer,str+"(",left+1,right,n);
	    generate(answer,str+")",left,right+1,n);
	    return;	
    }
};
