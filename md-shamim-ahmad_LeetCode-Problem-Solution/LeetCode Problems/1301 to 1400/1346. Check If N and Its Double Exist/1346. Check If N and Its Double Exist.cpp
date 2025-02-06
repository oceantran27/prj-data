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
    bool checkIfExist(vector<int> &arr) {
        for (int i = 0; i < arr.size(); i++) {
            int n = arr[i] * 2, j;
            if (n == 0)
                j = i + 1;
            else
                j = 0;
            for (; j < arr.size(); j++) {
                if (arr[j] == n)
                    return true;
            }
        }
        return false;
    }
};
