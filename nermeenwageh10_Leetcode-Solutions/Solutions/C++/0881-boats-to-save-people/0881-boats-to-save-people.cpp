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
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int l = 0, r = people.size()-1;
        int boats = 0;
        while (l <= r){
            if (people[r] + people[l] <= limit){
                boats++;
                r--;
                l++;
            }else {
                r--;
                boats++;
            }
        }
        return boats;
    }
};