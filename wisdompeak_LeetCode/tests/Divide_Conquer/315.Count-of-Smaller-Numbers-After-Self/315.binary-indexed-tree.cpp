#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include <315.binary-indexed-tree.h>
#include <Divide_Conquer/315.Count-of-Smaller-Numbers-After-Self/315.Count-of-Smaller-Numbers-After-Self-v2.cpp>

#include <stdio.h>

std::vector<int> count_v2(std::vector<int> &nums)
{
  static Solution s;
  return s.countSmaller(nums);
}