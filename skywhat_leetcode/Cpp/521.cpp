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
#include<string>

using namespace std;

class Solution {
public:
    int findLUSlength(string a, string b) {
        if(a==b){
            return -1;
        }
        
        return max(a.size(), b.size());
    }
};

int main(){
	string a = "aba";
	string b = "cdc";

	Solution s;

	cout<<(s.findLUSlength(a,b) == 3)<<endl;

	return 0;
}
