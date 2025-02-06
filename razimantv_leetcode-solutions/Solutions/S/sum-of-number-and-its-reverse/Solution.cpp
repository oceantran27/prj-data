#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/sum-of-number-and-its-reverse/

class Solution {
public:
 int rev(int n) {
   int ret = 0;
   while (n) {
     ret = ret * 10 + n % 10;
     n /= 10;
   }
   return ret;
 }
 bool sumOfNumberAndReverse(int num) {
   for (int i = 0; i <= num; ++i) {
     if (i + rev(i) == num) return true;
   }
   return false;
 }
};
