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
  void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int k = m + n - 1;
    int i = m - 1, j = n - 1;
    for (; i >= 0 && j >= 0; k--)
    {
      if (nums1[i] >= nums2[j])
      {
        nums1[k] = nums1[i];
        i--;
      }
      else
      {
        nums1[k] = nums2[j];
        j--;
      }
    }
    while (j >= 0)
    {
      nums1[k] = nums2[j];
      k--; j--;
    }
  }
};