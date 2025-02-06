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
    int minPartitions(string n) {
    	int max = 0;
        for (int i = 0; i < n.length(); ++i)
        {
        	int x = int(n[i])-48;
        	max = (x>max)?x:max;
        }
        return max;
    }
};