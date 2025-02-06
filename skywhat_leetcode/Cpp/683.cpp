#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
There is a garden with N slots. In each slot, there is a flower. The N flowers
will bloom one by one in N days. In each day, there will be exactly one flower
blooming and it will be in the status of blooming since then.

Given an array flowers consists of number from 1 to N. Each number in the array
represents the place where the flower will open in that day.

For example, flowers[i] = x means that the unique flower that blooms at day i
will be at position x, where i and x will be in the range from 1 to N.

Also given an integer k, you need to output in which day there exists two
flowers in the status of blooming, and also the number of flowers between them
is k and these flowers are not blooming.

If there isn't such day, output -1.

Example 1:
Input:
flowers: [1,3,2]
k: 1
Output: 2
Explanation: In the second day, the first and the third flower have become
blooming. Example 2: Input: flowers: [1,2,3] k: 1 Output: -1 Note: The given
array will be in the range [1, 20000].
*/

class Solution {
public:
    int kEmptySlots(vector<int>& flowers, int k) {
        vector<int> days(flowers.size(), 0);
        for (int i = 0; i < days.size(); ++i) {
            days[flowers[i] - 1] = i + 1;
        }

        int left = 0, right = k + 1;
        int res = INT_MAX;
        for (int i = 0; i < days.size() && right < days.size(); ++i) {
            if (days[i] > days[left] && days[i] > days[right]) {
                continue;
            }

            if (right == i) {
                res = min(res, max(days[left], days[right]));
            }

            left = i;
            right = i + k + 1;
        }

        return res == INT_MAX ? -1 : res;
    }
};
