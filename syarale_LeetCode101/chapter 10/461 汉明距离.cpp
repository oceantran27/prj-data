#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;


// 461. Hamming Distance

class Solution {
public:
    int hammingDistance(int x, int y) {
        int diff = x ^ y;
        int count = 0;
        while (diff != 0) {
            count++;
            diff &= (diff - 1);
        }
        return count;
    }
}; 
