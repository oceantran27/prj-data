#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/* boundary cases: n = 0 or n = 1 */
class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if (n < 2) return n;
        int j = 1;
        for (int i = 1; i<n; i++){
            if (A[i] != A[i-1]){
                A[j++] = A[i];
            }
        }
        return j;
    }
};

