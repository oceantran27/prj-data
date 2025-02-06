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
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        if(event1[1] >= event2[0] && event1[1] <= event2[1])
            return true;
        else if(event2[1] >= event1[0] && event2[1] <= event1[1])
            return true;
        return false;
    }
};
