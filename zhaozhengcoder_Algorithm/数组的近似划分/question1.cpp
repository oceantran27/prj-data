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
    /**
     * @param m: An integer m denotes the size of a backpack
     * @param A: Given n items with size A[i]
     * @return: The maximum size
     */
	 //new 2
	 //1231 DSAFADSF  dsafd
	int max(int v1,int v2){
		if(v1>v2){
			return v1;
		}
		else{
			return v2;
		}
	}

	//dp[i][j] ʾֻǰiƷڱֻj£װ
	//ôŽdp[A.size-1][m]
    int backPack(int m, vector<int> A) {
        // write your code here
		//init dp
    	int ** dp=new int *[A.size()];
		for(int i=0;i<A.size();i++){
			dp[i]=new int[m];
		}

		//ʼһ
    	for(int i=0;i<A.size();i++){
    		dp[i][0]=0;
    	}


    	for(int j=1;j<m+1;j++){
			//ʼdpά ÿһеĵһԪ
			if(A[0]<j){
				dp[0][j]=A[0];
			}
			else{
				dp[0][j]=0;
			}
			
    		for(int i=1;i<A.size();i++){
				//ǰƷܱת
    			if(A[i]>j){
    				dp[i][j]=dp[i-1][j];
    			}
				//Աװ
    			else{
    				dp[i][j] = max(dp[i-1][j-A[i]]+A[i],dp[i-1][j]);
    			}
    		}
    	}
    	
		for(int i=0;i<A.size();i++){
			for(int j=0;j<m+1;j++){
				cout<<dp[i][j]<<" ";
			}
			cout<<endl;
		}
		
    	return dp[A.size()-1][m];
    }
};


int main(){
	int arr[]={1,5,7,8,9,6,3,11,20,17};
	vector<int> vi(arr,arr+10);
	
	//mʾɵ
	int sum=0;
	for(int i=0;i<10;i++){
		sum=sum+arr[i];
	}
	int m=sum/2;

	//ֱӵñĺ
	Solution s;
	cout<<s.backPack(m,vi);
		
	return 0;
}