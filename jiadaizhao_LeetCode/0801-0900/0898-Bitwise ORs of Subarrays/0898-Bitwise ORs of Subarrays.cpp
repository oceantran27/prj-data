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
    int subarrayBitwiseORs(vector<int>& A) {
        unordered_set<int> curr, temp, total;
        for (int a : A) {
            temp = {a};
            for (int x : curr) {
                temp.insert(a | x);
            }
            for (int x : temp) {
                total.insert(x);
            }
            curr = temp;
        }
        return total.size();
    }
};
