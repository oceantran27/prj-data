#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution 
{
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) 
    {
        int i = 0, j = 0;
        for (int num : pushed) 
        {
            pushed[i++] = num;
            while (i > 0 && pushed[i - 1] == popped[j]) i--, j++;
        }
        return i == 0;
    }
};