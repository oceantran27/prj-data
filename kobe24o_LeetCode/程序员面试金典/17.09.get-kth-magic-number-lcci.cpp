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
    int getKthMagicNumber(int k) {
    	set<long> q;//可以看做小顶堆
    	long ans;
    	q.insert(1);
    	while(k--)
    	{
    		ans = *q.begin();
    		q.erase(q.begin());
    		q.insert(ans*3);
    		q.insert(ans*5);
    		q.insert(ans*7);
    	}
    	return ans;
    }
};