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
    vector<int> sortArrayByParityII(vector<int>& A) {
        int size=A.size();
        int odd=1,even=0;
        for (int i=0;i<size;i=min(even,odd))
        {
            if (A.at(i)%2==0)
            {
                swap(A.at(i),A.at(even));
                even+=2;
            }
            else
            {
                swap(A.at(i),A.at(odd));
                odd+=2;
            }
        }
            
        return A;
    }
};
