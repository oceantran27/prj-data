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
    bool canReorderDoubled(vector<int> &A) {
        auto size = A.size();
        if (size < 2)
            return true;
        for (int i = 0; i < A.size(); ++i)
            if (A[i] < 0)
                A[i] = -A[i];
        sort(A.begin(), A.end());
        for (int i = 0; i < size; ++i) {
            bool deleted = false;
            for (int j = i + 1; j < size; ++j) {
                if (A[j] == A[i] * 2) {
                    A.erase(A.begin() + i);
                    A.erase(A.begin() + j - 1);
                    size -= 2;
                    deleted = true;
                    break;
                } else if (A[j] > A[i] * 2)
                    return false;

            }
            if (deleted)
                i = -1;
        }
        if (A.empty())
            return true;
        return false;
    }
};