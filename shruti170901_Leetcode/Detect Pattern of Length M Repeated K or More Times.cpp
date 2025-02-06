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
    bool containsPattern(vector<int> &arr, int m, int k)
    {

        int count = 0;
        for (int i = 0; i + m < arr.size(); i++)
        {

            if (arr[i] != arr[i + m])
            {
                count = 0;
            }
            else
                count++;
            if (count == (k - 1) * m)
                return true;
        }
        return false;
    }
};