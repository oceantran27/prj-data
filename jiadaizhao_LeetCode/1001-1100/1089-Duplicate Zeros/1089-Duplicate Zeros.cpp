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
    void duplicateZeros(vector<int>& arr) {
        int zero = 0, i;
        for (i = 0; i + zero < arr.size(); ++i) {
            if (arr[i] == 0) {
                ++zero;
            }
        }
        
        if (i + zero > arr.size()) {
            arr.back() = 0;
            --i;
            --zero;
        }
        --i;

        for (int j = i + zero; j >= 0; --j) {
            if (arr[i] != 0) {
                arr[j] = arr[i];
            }
            else {
                arr[j--] = 0;
                arr[j] = 0;
            }
            --i;
        }
    }
};