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
        
        int beg = 0, end = A.size() - 1;
        
        // n&1 being true means n is odd
        while (beg < end) 
        {
            if (A[beg]&1 != A[end]&1) 
            {
                int temp = A[beg];
                A[beg] = A[end];
                A[end] = temp;
            }

            if (!(A[beg] & 1)) 
                beg++;
            
            if (A[end] & 1) 
                end--;
        }

        return A;
    }
};
