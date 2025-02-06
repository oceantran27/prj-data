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
    void reverseString(vector<char>& vect) 
    {
        
        size_t start =0;
        size_t end=vect.size()-1;
        while(start<end)
        {
            swap(vect[start], vect[end]);
            start++; end--;
        }

        
    }
};
