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
        int n=people.size();
        sort(people.begin(),people.end());
        int ans=0;
        int i=0,j=n-1;
        while(i<=j){
            ans++;
            if(people[i]+people[j]<=limit){
                i++;
                j--;
            }
            else{
                j--;
            }
        }
        return ans;
    }
};