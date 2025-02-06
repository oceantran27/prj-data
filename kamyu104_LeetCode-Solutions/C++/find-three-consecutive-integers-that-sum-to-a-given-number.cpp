#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(1)
// Space: O(1)

// math
class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        return (num % 3 == 0) ? vector<long long>({num / 3 - 1, num / 3, num / 3 + 1}) : vector<long long>();
    }
};
