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
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
    	sort(people.begin(), people.end(),[&](auto a, auto b){
    		if(a[0] == b[0])
    			return a[1] < b[1];
    		return a[0] < b[0];
    	});//身高降序，一样大就按k升序
    	vector<vector<int>> ans;
    	for(int i = 0; i < people.size(); ++i)
    		ans.insert(ans.begin()+people[i][1], people[i]);
    	return ans;
    }
};