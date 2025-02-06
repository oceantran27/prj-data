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
    bool checkRecord(string s) {
        return (s.find("LLL")==-1) && (s.find('A')==s.rfind('A'));
    }
};
