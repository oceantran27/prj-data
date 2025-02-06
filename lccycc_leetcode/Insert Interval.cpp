#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
    1 pass the intervals of end < newInterval.start
    2 merge newInterval with those of start <= newInterval.end
    3 push newInterval
    4 pass the rest intervals
    
    what if the intervals are not sorted?
*/

/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    vector<Interval> insert(vector<Interval> &intervals, Interval newInterval) {
        vector<Interval> res;
        int n = intervals.size();
        int i = 0;
        for (; i<n && intervals[i].end < newInterval.start; i++){
            res.push_back(intervals[i]);
        }
        for (; i<n && intervals[i].start <= newInterval.end; i++){
            newInterval.start = min(newInterval.start, intervals[i].start);
            newInterval.end = max(newInterval.end, intervals[i].end);
        }
        res.push_back(newInterval);
        for (; i<n; i++){
            res.push_back(intervals[i]);
        }
        return res;
    }
};

