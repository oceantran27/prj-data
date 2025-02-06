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
    char findTheDifference(string s, string t) {
        int ans=0;
        for (char &i:t)
            ans+=i;
        for (char &i:s)
            ans-=i;
        return ans;
    }
};
