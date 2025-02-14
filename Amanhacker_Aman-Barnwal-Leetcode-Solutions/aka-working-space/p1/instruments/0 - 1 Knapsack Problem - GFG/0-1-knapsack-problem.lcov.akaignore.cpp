/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P1_0___1_KNAPSACK_PROBLEM___GFG_0_1_KNAPSACK_PROBLEM_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P1_0___1_KNAPSACK_PROBLEM___GFG_0_1_KNAPSACK_PROBLEM_CPP
#include <string>
#include <string.h>
#include <vector>
extern "C++" int AKA_mark(char* str);
extern "C++" void AKA_assert(char* actualName, int actualVal, char* expectedName, int expectedVal);
extern "C++" int AKA_assert_double(char* actualName, double actualVal, char* expectedName, double expectedVal);
extern "C++" int AKA_assert_ptr(char* actualName, void* actualVal, char* expectedName, void* expectedVal);
extern "C++" int AKA_fCall;
extern "C++" char* AKA_test_case_name;



#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
public:
    //Function to return max value that can be put in knapsack of capacity W.
    
        
    int knapsackHelper(int w, int wt[], int val[], int n) {
AKA_fCall++; /* LCOV_EXCL_LINE */  
    
        vector<vector<int>> dp(n + 1, vector<int>(w + 1, -1));
    
        for(int i=0; i<=n; i++)                     dp[i][0] = 0;
        for(int j=0; j<=w; j++)                     dp[0][j] = 0;
    
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=w; j++) {
    
                if(wt[i-1] <= j)                    dp[i][j] = max(val[i-1] + dp[i-1][j-wt[i-1]], dp[i-1][j]);
                else                                dp[i][j] = dp[i-1][j];
            }
        }
    
        return dp[n][w];
    }

    int knapSack(int w, int wt[], int val[], int n) {
AKA_fCall++; /* LCOV_EXCL_LINE */  
       
           return knapsackHelper(w, wt, val, n);
    }
};

//{ Driver Code Starts.

int AKA_MAIN()
 {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends
#endif
