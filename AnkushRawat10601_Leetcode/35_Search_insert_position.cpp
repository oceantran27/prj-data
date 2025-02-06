#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

int searchInsert(int* nums, int numsSize, int target) {
    int i=0;
    
    for (;i<numsSize&&nums[i]<target;i++) ;
    return i;
}