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
    
        
    /** Instrumented function knapsackHelper(int,int[],int[],int) */
int knapsackHelper(int w, int wt[], int val[], int n) /* << Aka begin of function int knapsackHelper(int w, int wt[], int val[], int n) >> */
{AKA_mark("Calling: .\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\Solution\\knapsackHelper(int,int[],int[],int)");AKA_fCall++; 
    
        AKA_mark("lis===23###sois===466###eois===520###lif===2###soif===72###eoif===126###ins===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\Solution\\knapsackHelper(int,int[],int[],int)");vector<vector<int>> dp(n + 1, vector<int>(w + 1, -1));
    
        int AKA_BLOCK_LOOP_536 = 0;
    AKA_mark("lis===25###sois===540###eois===548###lif===4###soif===146###eoif===154###ins===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\Solution\\knapsackHelper(int,int[],int[],int)");
for(int i=0; AKA_mark("lis===25###sois===549###eois===553###lif===4###soif===155###eoif===159###ifc===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\Solution\\knapsackHelper(int,int[],int[],int)") && (AKA_mark("lis===25###sois===549###eois===553###lif===4###soif===155###eoif===159###isc===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\Solution\\knapsackHelper(int,int[],int[],int)") && (i<=n)); ({AKA_mark("lis===25###sois===555###eois===558###lif===4###soif===161###eoif===164###ins===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\Solution\\knapsackHelper(int,int[],int[],int)");i++;}))                     {
AKA_mark("lis===25###sois===580###eois===593###lif===4###soif===186###eoif===199###ins===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\Solution\\knapsackHelper(int,int[],int[],int)");dp[i][0] = 0;
}

        int AKA_BLOCK_LOOP_603 = 0;
    AKA_mark("lis===26###sois===607###eois===615###lif===5###soif===213###eoif===221###ins===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\Solution\\knapsackHelper(int,int[],int[],int)");
for(int j=0; AKA_mark("lis===26###sois===616###eois===620###lif===5###soif===222###eoif===226###ifc===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\Solution\\knapsackHelper(int,int[],int[],int)") && (AKA_mark("lis===26###sois===616###eois===620###lif===5###soif===222###eoif===226###isc===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\Solution\\knapsackHelper(int,int[],int[],int)") && (j<=w)); ({AKA_mark("lis===26###sois===622###eois===625###lif===5###soif===228###eoif===231###ins===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\Solution\\knapsackHelper(int,int[],int[],int)");j++;}))                     {
AKA_mark("lis===26###sois===647###eois===660###lif===5###soif===253###eoif===266###ins===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\Solution\\knapsackHelper(int,int[],int[],int)");dp[0][j] = 0;
}

    
        int AKA_BLOCK_LOOP_676 = 0;
    AKA_mark("lis===28###sois===680###eois===688###lif===7###soif===286###eoif===294###ins===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\Solution\\knapsackHelper(int,int[],int[],int)");
for(int i=1; AKA_mark("lis===28###sois===689###eois===693###lif===7###soif===295###eoif===299###ifc===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\Solution\\knapsackHelper(int,int[],int[],int)") && (AKA_mark("lis===28###sois===689###eois===693###lif===7###soif===295###eoif===299###isc===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\Solution\\knapsackHelper(int,int[],int[],int)") && (i<=n)); ({AKA_mark("lis===28###sois===695###eois===698###lif===7###soif===301###eoif===304###ins===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\Solution\\knapsackHelper(int,int[],int[],int)");i++;})) {
        AKA_BLOCK_LOOP_676++;
        if (AKA_BLOCK_LOOP_676 > 1000) {
            //break;
        }
            int AKA_BLOCK_LOOP_715 = 0;
    AKA_mark("lis===29###sois===719###eois===727###lif===8###soif===325###eoif===333###ins===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\Solution\\knapsackHelper(int,int[],int[],int)");
for(int j=1; AKA_mark("lis===29###sois===728###eois===732###lif===8###soif===334###eoif===338###ifc===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\Solution\\knapsackHelper(int,int[],int[],int)") && (AKA_mark("lis===29###sois===728###eois===732###lif===8###soif===334###eoif===338###isc===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\Solution\\knapsackHelper(int,int[],int[],int)") && (j<=w)); ({AKA_mark("lis===29###sois===734###eois===737###lif===8###soif===340###eoif===343###ins===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\Solution\\knapsackHelper(int,int[],int[],int)");j++;})) {
        AKA_BLOCK_LOOP_715++;
        if (AKA_BLOCK_LOOP_715 > 1000) {
            //break;
        }
    
                if(AKA_mark("lis===31###sois===767###eois===779###lif===10###soif===373###eoif===385###ifc===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\Solution\\knapsackHelper(int,int[],int[],int)") && (AKA_mark("lis===31###sois===767###eois===779###lif===10###soif===373###eoif===385###isc===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\Solution\\knapsackHelper(int,int[],int[],int)") && (wt[i-1] <= j)))                    {
AKA_mark("lis===31###sois===800###eois===858###lif===10###soif===406###eoif===464###ins===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\Solution\\knapsackHelper(int,int[],int[],int)");dp[i][j] = max(val[i-1] + dp[i-1][j-wt[i-1]], dp[i-1][j]);
}

                else                                {
AKA_mark("lis===32###sois===912###eois===934###lif===11###soif===518###eoif===540###ins===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\Solution\\knapsackHelper(int,int[],int[],int)");dp[i][j] = dp[i-1][j];
}

            }
        }
    
        AKA_mark("lis===36###sois===976###eois===992###lif===15###soif===582###eoif===598###ins===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\Solution\\knapsackHelper(int,int[],int[],int)");return dp[n][w];
    }

    /** Instrumented function knapSack(int,int[],int[],int) */
int knapSack(int w, int wt[], int val[], int n) /* << Aka begin of function int knapSack(int w, int wt[], int val[], int n) >> */
{AKA_mark("Calling: .\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\Solution\\knapSack(int,int[],int[],int)");AKA_fCall++; 
       
           AKA_mark("lis===41###sois===1079###eois===1116###lif===2###soif===72###eoif===109###ins===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\Solution\\knapSack(int,int[],int[],int)");return knapsackHelper(w, wt, val, n);
    }
};

//{ Driver Code Starts.

/** Instrumented function main() */
int maAKA_MAIN(
 /* << Aka begin of function int main() >> */
{AKA_mark("Calling: .\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\main()");AKA_fCall++;
    //taking total testcases
    AKA_mark("lis===50###sois===1208###eois===1214###lif===3###soif===50###eoif===56###ins===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\main()");int t;
    AKA_mark("lis===51###sois===1220###eois===1227###lif===4###soif===62###eoif===69###ins===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\main()");cin>>t;
    int AKA_BLOCK_LOOP_1233 = 0;
    while(AKA_mark("lis===52###sois===1239###eois===1242###lif===5###soif===81###eoif===84###ifc===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\main()") && (AKA_mark("lis===52###sois===1239###eois===1242###lif===5###soif===81###eoif===84###isc===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\main()") && (t--)))
    {
        AKA_BLOCK_LOOP_1233++;
        if (AKA_BLOCK_LOOP_1233 > 1000) {
            //break;
        }
        //reading number of elements and weight
        AKA_mark("lis===55###sois===1309###eois===1318###lif===8###soif===151###eoif===160###ins===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\main()");int n, w;
        AKA_mark("lis===56###sois===1328###eois===1338###lif===9###soif===170###eoif===180###ins===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\main()");cin>>n>>w;
        
        AKA_mark("lis===58###sois===1358###eois===1369###lif===11###soif===200###eoif===211###ins===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\main()");int val[n];
        AKA_mark("lis===59###sois===1379###eois===1389###lif===12###soif===221###eoif===231###ins===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\main()");int wt[n];
        
        //inserting the values
        int AKA_BLOCK_LOOP_1441 = 0;
    AKA_mark("lis===62###sois===1445###eois===1453###lif===15###soif===287###eoif===295###ins===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\main()");
for(int i=0;AKA_mark("lis===62###sois===1453###eois===1456###lif===15###soif===295###eoif===298###ifc===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\main()") && (AKA_mark("lis===62###sois===1453###eois===1456###lif===15###soif===295###eoif===298###isc===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\main()") && (i<n));({AKA_mark("lis===62###sois===1457###eois===1460###lif===15###soif===299###eoif===302###ins===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\main()");i++;}))
            {
AKA_mark("lis===63###sois===1475###eois===1487###lif===16###soif===317###eoif===329###ins===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\main()");cin>>val[i];
}

        
        //inserting the weights
        int AKA_BLOCK_LOOP_1540 = 0;
    AKA_mark("lis===66###sois===1544###eois===1552###lif===19###soif===386###eoif===394###ins===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\main()");
for(int i=0;AKA_mark("lis===66###sois===1552###eois===1555###lif===19###soif===394###eoif===397###ifc===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\main()") && (AKA_mark("lis===66###sois===1552###eois===1555###lif===19###soif===394###eoif===397###isc===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\main()") && (i<n));({AKA_mark("lis===66###sois===1556###eois===1559###lif===19###soif===398###eoif===401###ins===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\main()");i++;}))
            {
AKA_mark("lis===67###sois===1574###eois===1585###lif===20###soif===416###eoif===427###ins===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\main()");cin>>wt[i];
}

        AKA_mark("lis===68###sois===1595###eois===1607###lif===21###soif===437###eoif===449###ins===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\main()");Solution ob;
        //calling method knapSack()
        AKA_mark("lis===70###sois===1654###eois===1693###lif===23###soif===496###eoif===535###ins===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\main()");cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	AKA_mark("lis===73###sois===1713###eois===1722###lif===26###soif===555###eoif===564###ins===true###function===.\\p1\\0 - 1 Knapsack Problem - GFG\\0-1-knapsack-problem.cpp\\main()");return 0;
}
// } Driver Code Ends
#endif
