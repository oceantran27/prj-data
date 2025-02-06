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
    public int deleteAndEarn(int[] nums) {
        int[] sums = new int[10001];
        for (int num : nums) {
            sums[num] += num;
        }
        
        int prev = 0, curr = 0;
        for (int sum : sums) {
            int temp = curr;
            curr = Math.max(curr, prev + sum);
            prev = temp;
        }
        
        return curr;
    }
}
