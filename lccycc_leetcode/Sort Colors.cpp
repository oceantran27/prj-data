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
    void sortColors(int A[], int n) {
        int i = 0, j = n-1;
        for (int k = 0; k<=j; k++){
            while (A[k] == 2 && k<j){
                swap(A[k], A[j--]);
            }
            if (A[k] == 0){
                swap(A[k], A[i++]);
            }
        }
    }
};


