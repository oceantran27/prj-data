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
    bool isStrobogrammatic(string num) {
        // write your code here
        unordered_map<char, char> mirrorMap;
        mirrorMap['1'] = '1';
        mirrorMap['6'] = '9';
        mirrorMap['8'] = '8';
        mirrorMap['9'] = '6';
        mirrorMap['0'] = '0';

        int left = 0;
        int right = num.size() - 1;
        while (left <= right) 
        {
            if (mirrorMap.count(num[left]) == 0 || mirrorMap[num[left]] != num[right])
            {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};
