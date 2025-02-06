#include <bits/stdc++.h>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	//递归
	int calu_maxpath(vector<vector<int>> matrix,int index_i,int index_j){
		if(index_i==0||index_j==0){
			if(index_i==0 && index_j!=0){
				int sum=0;
				for(int j=0;j<=index_j;j++){
					sum+=matrix[0][j];
				}
				return sum;
			}
			else if(index_i!=0 && index_j==0){
				int sum=0;
				for(int i=0;i<=index_i;i++){
					sum+=matrix[i][0];
				}
				return sum;
			}
			else {
				//index-i==0 && index-j==0
				return matrix[0][0];
			}
		}
		else{
			int res1=calu_maxpath(matrix,index_i-1,index_j);
			int res2=calu_maxpath(matrix,index_i,index_j-1);
			int ret=max(res1,res2)+matrix[index_i][index_j];
			return ret;
		}
	}

	//递归版本
	int findmaxgiftpath_recursion(vector<vector<int>> matrix){
		int ret=calu_maxpath(matrix,matrix[0].size()-1,matrix.size()-1);
		return ret;
	}
};


//递归+缓存
class Solution2 {
	public:
	int calu_maxpath(vector<vector<int>> matrix,vector<vector<int>> &dp,int index_i,int index_j){
		//查询缓存
		if(dp[index_i][index_j]!=-1){
			return dp[index_i][index_j];
		}

		if(index_i==0||index_j==0){
			if(index_i==0 && index_j!=0){
				int sum=0;
				for(int j=0;j<=index_j;j++){
					sum+=matrix[0][j];
				}
				dp[index_i][index_j]=sum;
				return sum;
			}
			else if(index_i!=0 && index_j==0){
				int sum=0;
				for(int i=0;i<=index_i;i++){
					sum+=matrix[i][0];
				}
				dp[index_i][index_j]=sum;
				return sum;
			}
			else {
				//index-i==0 && index-j==0
				dp[index_i][index_j]= matrix[0][0];
				return matrix[0][0];
			}
		}
		else{
			int res1=calu_maxpath(matrix,dp,index_i-1,index_j);
			int res2=calu_maxpath(matrix,dp,index_i,index_j-1);
			int ret=max(res1,res2)+matrix[index_i][index_j];

			dp[index_i][index_j]=ret;
			return ret;
		}
	}

	int findmaxgiftpath(vector<vector<int>> matrix){
		vector<vector<int>> dp;
		//init
		int arr[]={-1,-1,-1,-1};
		vector<int> v1(arr,arr+4);
		vector<int> v2(arr,arr+4);
		vector<int> v3(arr,arr+4);
		vector<int> v4(arr,arr+4);
		dp.push_back(v1);
		dp.push_back(v2);
		dp.push_back(v3);
		dp.push_back(v4);


		int ret=calu_maxpath(matrix,dp,matrix[0].size()-1,matrix.size()-1);
		return ret;
	}
};


//动态规划版本
class Solution3{
public:
	int findmaxgiftpath(vector<vector<int>> matrix){
		vector<vector<int>> dp;
		//init
		int arr[]={-1,-1,-1,-1};
		vector<int> v1(arr,arr+4);
		vector<int> v2(arr,arr+4);
		vector<int> v3(arr,arr+4);
		vector<int> v4(arr,arr+4);
		dp.push_back(v1);
		dp.push_back(v2);
		dp.push_back(v3);
		dp.push_back(v4);

		//初始化第一行和第一列
		dp[0][0]=matrix[0][0];
		for(int i=1;i<matrix.size();i++){
			dp[i][0]=dp[i-1][0]+matrix[i][0];
		}

		for(int j=1;j<matrix[0].size();j++){
			dp[0][j]=dp[0][j-1]+matrix[0][j];
		}


		//自底向上的计算dp
		for(int i=1;i<=matrix[0].size()-1;i++){
			for(int j=1;j<=matrix.size()-1;j++){
				dp[i][j]=max(dp[i-1][j],dp[i][j-1])+matrix[i][j];
			}
		}
		
		return dp[matrix.size()-1][matrix[0].size()-1];
	}
};

int main(){
	int n1[] = {1, 10, 3, 8} ;
	vector<int> v1(n1,n1+4);
	int n2[] = {12, 2,9,6} ;
	vector<int> v2(n2,n2+4);

	int n3[] = {5,7,4,11} ;
	vector<int> v3(n3,n3+4);

	int n4[] = {3,7,16,5} ;
	vector<int> v4(n4,n4+4);

	vector<vector<int> > matrix;
	matrix.push_back(v1);
	matrix.push_back(v2);
	matrix.push_back(v3);
	matrix.push_back(v4);



	Solution3 s;
	cout<<s.findmaxgiftpath(matrix);


	return 0;
}