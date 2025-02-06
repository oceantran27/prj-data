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
    string compressString(string S) {
        char last = '$';
        int cnt = 0;
        string ans = "";

        for(auto c: S) {
            if (c == last) {
                cnt++;
            } else {
                if (last != '$') {
                    ans += last;
                    ans += to_string(cnt);
                }
                cnt = 1;
                last = c;
            }
        }
        ans += last;
        ans += to_string(cnt);

        if (ans.length() >= S.size()) return S;
        return ans;
    }
};