#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
* 其实是差分数组
* 其实只用单独考虑增大或单独考虑减小
*/
class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        int size=target.size();
        int ans=0;
        for (int i=0;i<size;++i)
        {
            if (i==0)
                ans+=target.at(i);
            else if (target.at(i)>target.at(i-1))
                ans+=target.at(i)-target.at(i-1);
        }
        return ans;
    }
};
