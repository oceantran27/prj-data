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
int findMaxLength(vector<int>& nums) {

    unordered_map<int,int> mp;
    int n=nums.size();
    int count=0,longest=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]==0)
           count--;
         else
             count++;
       
	   
        if(count==0)
            longest=i+1;
        
		
      else  if(mp.count(count))
            longest=max(longest,(i-mp[count]));
			
			
        else
             mp[count]=i;
                        
    }
    
    return longest;
    
}
};
