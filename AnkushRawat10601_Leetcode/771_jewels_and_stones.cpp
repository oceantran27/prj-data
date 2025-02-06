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
    int numJewelsInStones(string J, string S) {
    unordered_set<char> jewels;
    for(auto &j : J) jewels.insert(j);
    return count_if(S.begin(),S.end(), [&](char c) {return jewels.count(c)>0;});
}
};