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

class Solution {
public:
    int findComplement(int num) {
        unsigned int i = 1;
        while (i <= num) {
            i <<= 1;
        }
        return (i - 1) ^ num;
    }
};
