#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        if(x <= arr[0])
        	return vector<int>(arr.begin(), arr.begin()+k);
        if(x >= arr[arr.size()-1])
        	return vector<int>(arr.end()-k, arr.end());
        int i, left, right, disLeft, disRight;
        vector<int> ans;
        for(i = 0; i < arr.size(); ++i)
        {
        	if(x == arr[i])
        	{
        		ans.push_back(arr[i]);
        		left = i-1;
        		right = i+1;
        		break;
        	}
        	if(x < arr[i])
        	{
        		left = i-1;
        		right = i;
        		break;
        	}
        }
        
        while(left >= 0 && right <= arr.size()-1 && ans.size() < k)
        {
        	disLeft = x - arr[left];
        	disRight = arr[right] - x;
        	if(disLeft <= disRight)
        	{
        		ans.push_back(arr[left]);
        		--left;
        	}
        	else
        	{
        		ans.push_back(arr[right]);
        		++right;
        	}
        }
        if(ans.size() != k)
        {
        	if(left == -1)
        	{
        		while(ans.size() != k)
        			ans.push_back(arr[right++]);
        	}
        	else//right = ans.size()
        	{
        		while(ans.size() != k)
        			ans.push_back(arr[left--]);//题目要求升序

        	}
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
int main()
{
	vector<int> arr = {0,0,1,2,3,3,4,7,7,8};
	Solution s;
	s.findClosestElements(arr,3,5);
}