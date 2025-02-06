#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class MyCalendarThree {
public:
    map<int,int> mp;
    MyCalendarThree() {

    }

    int book(int start, int end) {
        mp[start]++;
        mp[end]--;
        int sum=0;
        int curr_sum=0;
        for(auto it : mp){
            curr_sum+= it.second;
            sum=max(sum,curr_sum);            
        }
        return sum;
    }
};