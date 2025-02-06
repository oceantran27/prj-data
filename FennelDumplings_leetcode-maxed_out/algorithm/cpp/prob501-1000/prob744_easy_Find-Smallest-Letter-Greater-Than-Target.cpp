#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
// prob744: Find Smallest Letter Greater Than Target

/*
 * https://leetcode-cn.com/problems/find-smallest-letter-greater-than-target/
 */

#include <vector>

using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        int left = 0, right = n - 1;
        while(left < right)
        {
            int mid = (left + right) / 2;
            if(letters[mid] <= target)
                left = mid + 1;
            else
                right = mid;
        }
        if(left == n - 1 && letters[left] <= target)
            return letters[0];
        return letters[left];
    }
};
