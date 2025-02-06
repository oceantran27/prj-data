#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
class Solution {
public:
    int trap(vector<int>& h) {
    	if(h.empty())
    		return 0;
        int i = 0, s = 0, n = h.size();
        int Lmax[n], Rmax[n];
        Lmax[0] = h[0];
        for(i = 1; i < n; ++i)
        	Lmax[i] = max(h[i],Lmax[i-1]);
        Rmax[n-1] = h[n-1];
        for(i = n-2; i >= 0; --i)
        	Rmax[i] = max(h[i],Rmax[i+1]);
        for(i = 1; i < n-1; ++i)//两边永远装不了水
        	s += min(Lmax[i],Rmax[i])-h[i];
        return s;
    }
};

class Solution {
public:
    int trap(vector<int>& h) {
    	if(h.empty())
    		return 0;
        int l = 0, r = h.size()-1, s = 0;
        int Lmax = 0, Rmax = 0;
        while(l < r)
        {
        	if(h[l] < h[r])//右边肯定有堵高墙
        	{
        		h[l] >= Lmax ? (Lmax = h[l]) : s += Lmax-h[l];
        		//我不是左边最高的，就能盛水
        		++l;
        	}
        	else//h[l] >= h[r], 左边肯定有堵高墙
        	{
        		h[r] >= Rmax ? (Rmax = h[r]) : s += Rmax-h[r];
        		//我不是右边最高的，就能盛水
        		--r;
        	}
        }
        return s;
    }
};

#include <stack>
#include <vector>
using namespace std;
class Solution {
public:
    int trap(vector<int>& h) {
        if(h.empty())
            return 0;
        int s = 0, top, distance, height;
        stack<int> stk;
        for(int i = 0; i < h.size(); ++i)
        {
            while(!stk.empty() && h[i] > h[stk.top()])
            {
                top = stk.top();
                stk.pop();
                if(stk.empty())
                    break;
                distance = i-stk.top()-1;
                height = min(h[i],h[stk.top()]) - h[top];
                s += distance*height;
            }
            stk.push(i);
        }
        return s;
    }
};
int main()
{
    Solution s;
    vector<int> h = {0,1,0,2,1,0,1,3,2,1,2,1};
    s.trap(h);
}