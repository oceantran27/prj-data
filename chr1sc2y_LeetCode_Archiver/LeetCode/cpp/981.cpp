#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class TimeMap {
public:
    map<string, map<int, string>> m;

    TimeMap() {
        m.clear();
    }

    void set(string key, string value, int timestamp) {
        m[key][timestamp] = value;
    }

    string get(string key, int timestamp) {
        if (m.find(key) == m.end())
            return "";
        for (int i = timestamp; i >= 0; --i) {
            if (m[key].find(i) != m[key].end())
                return m[key][i];
        }
        return "";
    }
};