#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

//Author: Abdelrrahman Elhaddad

/*
  Intuition:
    We can count from the full sequence by using the following formula n * (n + 1) / 2.
    If we had the following sequence [0, 0, 0] then w can get six valid subsequences:
          1- [0, 0, 0]
          2- [_, 0, 0]
          3- [0, 0, _]
          4- [_, _, 0]
          5- [0, _, _]
          6- [_, 0, _]
          
          Note: [0, _, 0] is not valid because it is not a subarray, There is a missing element in the middle
          Thus we have 6 valid subarrays which equals to 3 * (3 + 1) / 2 = 6
  */

class Solution {
    public:
    long long zeroFilledSubarray(vector<int> &nums) {
        long long sum = 0, c = 0;
      
        for (int i = 0; i < nums.size(); i++) {
          
          // Counting the contiguous zero elements sequence
            if (nums[i] == 0)
                c++;
          /* If the sequence ends then we will add the number of the valid subarrays
          that we can count from the full sequence by using the following formula n * (n + 1) / 2   */
            else {
                sum += c * (c + 1) / 2;
                c = 0;
            }
        }
      // Make sure there is not any uncounted subarrays
        sum += c * (c + 1) / 2;
        return sum;
    }
};
