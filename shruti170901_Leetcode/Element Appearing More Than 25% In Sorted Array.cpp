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
    int findSpecialInteger(vector<int>& arr) 
    {
        int i, maj=arr.size()/4;
    for (i = 0; i+maj<arr.size(); i++)
    {
      if (arr[i] == arr[i + maj]) 
          return arr[i];
    }
    return 0;
    }
};