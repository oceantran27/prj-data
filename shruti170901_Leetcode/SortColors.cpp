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
    void sortColors(vector<int>& nums) {
        int a[3];a[0]=0;a[1]=0;a[2]=0;
        for(int i=0;i<nums.size();i++){
            a[nums[i]]++;
        }int j=0;
        for(int i=0;i<a[0];i++) nums[j++]=0;
        for(int i=0;i<a[1];i++) nums[j++]=1;
        for(int i=0;i<a[2];i++) nums[j++]=2;
    }
};
