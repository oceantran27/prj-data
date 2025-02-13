#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
  return b == 0 ? a : gcd(b, a % b);
}

class Solution {
 public:
  void rotate(vector<int> &nums, int k) {
    int n = nums.size();
    for (int i = 0; i < gcd(n, k); ++i) {
      for (int ii = (i + k) % n; i != ii; ii = (ii + k) % n) {
        swap(nums[i], nums[ii]);
      }
    }
  }
};
