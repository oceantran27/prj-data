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
    public boolean containsDuplicate(int[] nums) {
        if (nums == null || nums.length == 0) return false;
   
       Set<Integer> setmade = new HashSet<>();
       int l = nums.length;
       for (int i=0; i<l; i++) {
          if (setmade.contains(nums[i])) {
             return true;
          }
          setmade.add(nums[i]);
       }
       return false;
    } 
}