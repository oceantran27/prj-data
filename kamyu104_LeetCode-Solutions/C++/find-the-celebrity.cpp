#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(n)
// Space: O(1)

// Forward declaration of the knows API.
bool knows(int a, int b);

class Solution {
public:
    int findCelebrity(int n) {
        int candidate = 0;
        // Find the candidate.
        for (int i = 1; i < n; ++i) {
            if (knows(candidate, i)) {
              candidate = i;  // All candidates < i are not celebrity candidates.
            }
         }
         // Verify the candidate.
         for (int i = 0; i < n; ++i) {
             if (i != candidate &&
                 (knows(candidate, i) || !knows(i, candidate))) {
                 return -1;
             }
         }
         return candidate;
    }
};
