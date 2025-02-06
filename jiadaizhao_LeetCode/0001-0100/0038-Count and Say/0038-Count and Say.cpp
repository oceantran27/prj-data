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
    string countAndSay(int n) {
        string result = "1";
        for (int i = 2; i <= n; ++i) {
            int count = 1;
            string temp = "";
            for (int j = 1; j < result.size(); ++j) {
                if (result[j] != result[j - 1]) {
                    temp += to_string(count);
                    temp += result[j - 1];
                    count = 1;
                }
                else {
                    ++count;
                }
            }

            temp += to_string(count);
            temp += result.back();

            result = temp;
        }
        
        return result;
    }
};
