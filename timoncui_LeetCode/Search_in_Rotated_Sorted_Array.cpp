#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
Author: Timon Cui, timonbaby@163.com

Title: Search in Rotated Sorted Array

Description:

Suppose a sorted array is rotated at some pivot unknown to you beforehand.
(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).
You are given a target value to search. If found in the array return its index, otherwise return -1.
You may assume no duplicate exists in the array.

Difficulty rating: Medium

Source:
http://www.leetcode.com/2010/04/searching-element-in-rotated-array.html

Notes:

Small modification of binary search.
Based on comparison of A[M] and A[L]:
A[M] > A[L]: Range [L, M] sorted. If target in this range, R = M - 1, otherwise remove this range.
A[M] < A[L]: Range [M, R] sorted. If target in this range, L = M + 1, otherwise remove this range.
otherwise, have to search both part. (This won't happen if no duplicates are allowed.)

*/

class Solution {
public:
  int search(int A[], int n, int target) {
    return search(A, 0, n - 1, target);
  }
private:
  int search(int *A, int L, int R, int target) {
    while (L <= R) {
      int M = L + (R - L) / 2;
      if (A[M] == target) return M;
      if (A[M] > A[L]) { // Left part sorted
	if (A[L] <= target && target < A[M]) R = M - 1;
	else L = M + 1;
      } else if (A[M] < A[L]) { // Right part sorted
	if (A[M] < target && target <= A[R]) L = M + 1;
	else R = M - 1;
      } else { // A[M] == A[L], need to search both sides
	return max(search(A, L, M - 1, target), search(A, M + 1, R, target));
      }
    }
    return -1;
  }
};
