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
        int count=0;
        for (int i=1;i<=n;++i)
            if (n%i==0)
            {
                ++count;
                if (count==k)
                    return i;
            }
        return -1;
    }
};
