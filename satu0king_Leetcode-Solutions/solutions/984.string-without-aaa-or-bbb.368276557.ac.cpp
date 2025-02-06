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
  string strWithout3a3b(int A, int B) {
    char a = 'a';
    char b = 'b';
    if (A < B) {
      swap(A, B);
      swap(a, b);
    }
    string ans;
    while (A || B) {
      ans += a;
      A--;
      if (A > B) {
        ans += a;
        A--;
      }
      if (B) {
        ans += b;
        B--;
      }
    }
    return ans;
  }
};
