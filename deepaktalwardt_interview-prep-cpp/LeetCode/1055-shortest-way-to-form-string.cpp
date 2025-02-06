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
    int shortestWay(string source, string target) {
        int result = 0;
        int skips = 0;
        int i = 0;
        int j = 0;
        
        while (i < target.size()) {
            if (source[j] == target[i]) {
                skips = 0;
                i++;
            } else {
                skips++;
                if (skips == source.size()) {
                    return -1;
                }
            }
            j++;
            if (j == source.size() || i == target.size()) {
                result++;
                j = 0;
            }
        }
        return result;
    }
};