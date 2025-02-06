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
    int findMin(vector<int> &num) {
        // if(num.size() == 1)
        // {
        //     return num[0];
        // }
        
        int i = 0; 
        int j = num.size() - 1;
        
        while(num[i] > num[j])
        {
            int mid = i + (j - i) / 2;
            if(num[mid] > num[j])
            {
                i = mid + 1;
            }
            else
            {
                j = mid;
            }
        }
        return num[i];
    }
};

