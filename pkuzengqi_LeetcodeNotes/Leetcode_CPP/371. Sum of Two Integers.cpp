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
    int getSum(int a, int b) {
      if(b==0) return a;
      int sum=a^b, carry=uint(a&b)<<1;
      return getSum(sum,carry);
    }
};