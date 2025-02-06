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
    vector<int> beautifulArray(int N) {
        vector<int> result = {1};
        while (result.size() < N) {
            vector<int> temp;
            for (int i : result) {
                if (i * 2 - 1 <= N) {
                    temp.push_back(i * 2 - 1);
                }
            }
            for (int i : result) {
                if (i * 2 <= N) {
                    temp.push_back(i * 2);
                }
            }
            result = temp;
        }
        return result;
    }
};
