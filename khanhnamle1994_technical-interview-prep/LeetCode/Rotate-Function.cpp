#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Given an array of integers A and let n to be its length.

// Assume Bk to be an array obtained by rotating the array A k positions clock-wise, we define a "rotation function"
// F on A as follow:
// F(k) = 0 * Bk[0] + 1 * Bk[1] + ... + (n-1) * Bk[n-1].

// Calculate the maximum value of F(0), F(1), ..., F(n-1).

/* Example:

A = [4, 3, 2, 6]

F(0) = (0 * 4) + (1 * 3) + (2 * 2) + (3 * 6) = 0 + 3 + 4 + 18 = 25
F(1) = (0 * 6) + (1 * 4) + (2 * 3) + (3 * 2) = 0 + 4 + 6 + 6 = 16
F(2) = (0 * 2) + (1 * 6) + (2 * 4) + (3 * 3) = 0 + 6 + 8 + 9 = 23
F(3) = (0 * 3) + (1 * 2) + (2 * 6) + (3 * 4) = 0 + 2 + 12 + 12 = 26

So the maximum value of F(0), F(1), F(2), F(3) is F(3) = 26. */

int maxRotateFunction(vector<int>& A) {
  if (A.size() == 0) return 0;

  long long allsum = 0;
  long long sum2 = 0;

  for (int i = 0; i < A.size(); i++) {
    allsum += A[i] * i;
    sum2 += A[i];
  }

  long long result = allsum;
  for (int i = 0; i < A.size(); i++) {
    allsum -= sum2;
    allsum += A[i];
    allsum += A[i] * int(A.size() - 1);
    result = max(allsum, result);
  }

  return result;
}
