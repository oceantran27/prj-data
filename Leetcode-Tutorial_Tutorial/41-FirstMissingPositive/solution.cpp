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
    int firstMissingPositive(vector<int>& nums) {
        int i = 0, j = 0;
        for( ; i < nums.size(); i++)        //Ԥnums[0 ~ j-1]Ϊеj
            if(nums[i] > 0) nums[j++] = nums[i];
        for(int i = 0; i < j; i++){
            int n = nums[i]&0x7fffffff;        //ȡ
            if(n <= j) nums[n-1] |= 0x80000000;//ǸĴ
        }
        int ans = 0;    //ҵһڵ
        while(ans < j && (nums[ans]&0x80000000)) ans++;
        return ans+1;
    }
};
