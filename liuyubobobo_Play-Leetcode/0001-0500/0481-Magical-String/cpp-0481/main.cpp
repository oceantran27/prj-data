#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
/// Source : https://leetcode.com/problems/magical-string/
/// Author : liuyubobobo
/// Time   : 2022-10-30

#include <iostream>

using namespace std;


/// Simulation
/// Time Complexity: O(n)
/// Space Complexity: O(n)
class Solution {
public:
    int magicalString(int n) {

        string s = "122";
        int index = 2;
        while(s.size() < n){
            s += string(s[index] - '0', s.back() == '1' ? '2' : '1');
            index ++;
        }

        int res = 0;
        for(int i = 0; i < n; i ++)
            res += s[i] == '1';
        return res;
    }
};


int main() {

    return 0;
}
