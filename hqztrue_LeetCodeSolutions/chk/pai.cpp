#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int ret = -1;
        vector<int> sums(nums.size()+1,0);        
        sums[0] = 0;
        for(int i = 1; i <= nums.size(); i++){
            sums[i] = sums[i-1] + nums[i-1];
        }
         
        
        for(int i = 0; i < sums.size(); i++) {
            if(sums[i] == (sums[sums.size()-1] - sums[i]) - nums[i]){
                ret = i;
                break;
            }
        }
        
        return ret;
    }
};

class Solution1 {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            
        }
        int lsum = 0;
        int rsum = sum;
        for(int i=0; i<nums.size(); i++){
            rsum = rsum - nums[i];
            if(lsum == rsum){
                return i;
            }lsum +=nums[i];
        }
        return -1;
    }
};
int main()
{
	//freopen(".in","r",stdin);
	//freopen(".out","w",stdout);
	//srand(time(0));
	for (int T=1;;++T){
		//if (T%1000==0)printf("T=%d\n",T);
		int n=10,m=10;
		vector<int> a(n);
		for (int i=0;i<n;++i)a[i]=rand()%m*(rand()%2?1:-1);
		printf("[");
		for (int i=0;i<n;++i)printf("%d%s",a[i],i==n-1?"]\n":",");
		auto b=a,c=a;
		Solution A; Solution1 A1;
		if (A.pivotIndex(b)!=A1.pivotIndex(c)){
			puts("err");
			printf("[");
			for (int i=0;i<n;++i)printf("%d%s",a[i],i==n-1?"]\n":",");
		}
	}
	return 0;
}

