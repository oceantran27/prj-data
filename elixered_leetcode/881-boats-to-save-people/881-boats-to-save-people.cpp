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
        int low = 0;
        int high = people.size()-1;
        sort(people.begin(),people.end());
        int count = 0;
        while(low<high)
        {
            if(people[low]+people[high]<=limit)
            {
                high--;
                low++;
                count++;
            }
            else
            {
                high--;
                count++;
            }
        }
        if(low==high)
            count++;
        return count;
    }
};