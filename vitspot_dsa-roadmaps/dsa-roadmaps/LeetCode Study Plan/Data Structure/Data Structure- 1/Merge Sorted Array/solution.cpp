#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// solution 1 easy
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {

        for (int i = 0; i < n; i++)
            nums1[m + i] = nums2[i];

        sort(nums1.begin(), nums1.end());
    }
};