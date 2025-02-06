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
    map<int,int> map;
    int k;
    MyCalendarThree() {
        k = 0;
    }
    
    int book(int start, int end) {
        map[start]++;
        map[end]--;
        int sum = 0;
        for(auto it:map)
        {
            sum += it.second;
            k = max(k,sum);
        }
        return k;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */