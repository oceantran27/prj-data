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
    uint32_t reverseBits(uint32_t n) {
        bitset<32> bitset_n(n);
        string s=bitset_n.to_string();
        reverse(s.begin(),s.end());
        bitset<32> answer(s);
        return answer.to_ulong();
    }
};
