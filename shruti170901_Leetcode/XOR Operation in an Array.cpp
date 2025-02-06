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
    int xorOperation(int n, int start) {
        int ans=start;
        for(int i=start+2;i<=2*(n-1)+start;i+=2)
            ans^=i;
        return ans;
    }
};
