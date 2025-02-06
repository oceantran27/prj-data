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
class Solution{
    public:
    long long maxSubarraySum(int a[],int n){
        int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < n; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
    }
};
int main()
{
   int n;
   cin>>n;

   int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }

   Solution ob;
   cout<<ob.maxSubarraySum(a,n)<<endl;

}
