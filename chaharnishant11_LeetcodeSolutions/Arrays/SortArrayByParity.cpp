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
    vector<int> sortArrayByParity(vector<int>& A) {
        for (int i = 0, j = 0; j < A.size(); j++)
            if (A[j] % 2 == 0){
                int temp=A[i];
                A[i++]=A[j];
                A[j]=temp;
            }
        return A;
    }
};