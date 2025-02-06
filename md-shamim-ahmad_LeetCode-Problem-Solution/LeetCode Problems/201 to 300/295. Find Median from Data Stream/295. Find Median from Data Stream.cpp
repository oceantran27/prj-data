#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class MedianFinder {
    multiset<int> list;
    multiset<int>::iterator median = list.begin();

public:
    MedianFinder() {
        list.clear();
    }
    void addNum(int num) {
        list.insert(num);
        if (list.size() % 2) ++median;
        if (num < *median) --median;
    }
    double findMedian() {
        if (list.size() % 2 != 0) return *(median);
        return (*median + *next(median)) / 2.0;
    }
};