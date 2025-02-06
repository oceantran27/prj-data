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

Title: Remove Duplicates from Sorted Array

Description:
Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.
Do not allocate extra space for another array, you must do this in place with constant memory.
For example,
Given input array A = [1,1,2],
Your function should return length = 2, and A is now [1,2].

Difficulty rating: Easy

Notes:

*/

class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if (n < 2) return n;
        int write = 1;
        for (int read = 1; read < n; ++read) {
            if (A[read] != A[write - 1]) A[write++] = A[read];
        }
        return write;
    }
};
