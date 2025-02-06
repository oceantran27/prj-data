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
* 首先前缀和
* 固定左右两边(列)，对行进行操作
*/
class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        int row=matrix.size();
        if (row==0)
            return 0;
        int column=matrix.at(0).size();
        int ans=INT_MIN;
        for (int left=0;left<column;++left)
        {
            vector<int> row_sum(row,0);
            for (int right=left;right<column;++right)
            {
                for (int i=0;i<row;++i)
                    row_sum.at(i)+=matrix.at(i).at(right);
                ans=max(ans,maxSumSubmatrix_helper(row,row_sum,k));
            }
        }        
        return ans;
    }
    int maxSumSubmatrix_helper(const int &row,vector<int>& row_sum,const int &k)
    {
        int max_sum=INT_MIN;
        for (int i=0;i<row;++i)
        {
            int sum=0;
            for (int j=i;j<row;++j)
            {
                sum+=row_sum.at(j);
                if (sum<=k && sum>max_sum)
                    max_sum=sum;
            }
        }
        return max_sum;
    }

};
