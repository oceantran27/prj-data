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
    int kthFactor(int n, int k) {
        set<int> s;
        for(int i = 1; i <= n; i++) {
            if(n%i==0)
                s.insert(i);
        }
        if(s.size() < k)
            return -1;
        auto it = s.begin();
        while(--k && it != s.end())
        {
            it++;
        }
        return *it;
    }
};