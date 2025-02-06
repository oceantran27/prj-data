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
    bool checkPowersOfThree(int n) {
        while (n!=0) {
            int cur=n%3;
            if (!(cur==0 || cur==1)) {
                return false;
            }
            n/=3;
        }
        return true;
    }
};
