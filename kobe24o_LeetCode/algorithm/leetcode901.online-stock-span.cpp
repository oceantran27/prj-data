#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class StockSpanner {
	stack<pair<int,int>> stk;
	int days;
public:
    StockSpanner() {

    }
    
    int next(int price) {
    	days = 1;
    	while(!stk.empty() && price >= stk.top().first)
    	{
            days += stk.top().second;
    		stk.pop();
    	}
    	stk.push({price,days});
    	return days;
    }
};