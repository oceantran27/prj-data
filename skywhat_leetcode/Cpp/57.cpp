#include <bits/stdc++.h>
#include <map>
#include <set>
#include <unordered_map>
/*
Given a set of non-overlapping intervals, insert a new interval into the
intervals (merge if necessary).

You may assume that the intervals were initially sorted according to their start
times.

Example 1:
Given intervals [1,3],[6,9], insert and merge [2,5] in as [1,5],[6,9].

Example 2:
Given [1,2],[3,5],[6,7],[8,10],[12,16], insert and merge [4,9] in as
[1,2],[3,10],[12,16].

This is because the new interval [4,9] overlaps with [3,5],[6,7],[8,10].
*/

#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

using namespace std;

struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
    friend ostream& operator<<(ostream& os, const Interval& i) {
        os << "[" << i.start << ", " << i.end << "]";
        return os;
    }
};

// insert newInterval into appropriate position, and then merge intervals with
// overlapping
class Solution {
public:
    vector<Interval> insert(vector<Interval>& intervals, Interval newInterval) {
        bool flag = false;
        for (int i = 0; i < intervals.size(); ++i) {
            if (newInterval.start < intervals[i].start) {
                intervals.insert(intervals.begin() + i, newInterval);
                flag = true;
                break;
            }
        }
        if (!flag)
            intervals.push_back(newInterval);
        vector<Interval> res;
        int size = intervals.size();
        for (int i = 0; i < size; i++) {
            Interval tmp = intervals[i];
            while (i + 1 < size && tmp.end >= intervals[i + 1].start) {
                if (tmp.end < intervals[i + 1].end)
                    tmp.end = intervals[i + 1].end;
                i++;
            }
            res.push_back(tmp);
        }
        return res;
    }
};

class Solution2 {
public:
    vector<Interval> insert(vector<Interval>& intervals, Interval newInterval) {
        int n = intervals.size();
        vector<Interval> res;
        int i = 0;
        while (i < n && intervals[i].end < newInterval.start) {
            res.push_back(intervals[i++]);
        }
        while (i < n && intervals[i].start <= newInterval.end) {
            newInterval.start = min(intervals[i].start, newInterval.start);
            newInterval.end = max(intervals[i].end, newInterval.end);
            i++;
        }
        res.push_back(newInterval);
        while (i < n) {
            res.push_back(intervals[i++]);
        }

        return res;
    }
};

int main() {
    Solution s;
    vector<vector<int>> given = {{1, 2}, {3, 5}, {6, 7}, {8, 10}, {12, 16}};
    vector<Interval> v;
    for (int i = 0; i < given.size(); ++i) {
        v.push_back(Interval(given[i][0], given[i][1]));
    }

    cout << "before:" << endl;
    copy(v.begin(), v.end(), ostream_iterator<Interval>(cout, ", "));
    cout << endl;

    vector<Interval> res;
    Interval newInterval(4, 9);
    cout << "insert new interval: " << newInterval << endl;

    res = s.insert(v, newInterval);

    cout << "after:" << endl;
    copy(res.begin(), res.end(), ostream_iterator<Interval>(cout, ", "));
    cout << endl;
    /*
    for (auto i : res)
        cout << "start: " << i.start << " end: " << i.end << endl;
    */
    return 0;
}
