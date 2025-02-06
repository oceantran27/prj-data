#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;


//////////////////////////////////////////////////////////////////////////
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        if (cost.empty()) return 0;
        if (cost.size() < 3) return cost.back();

        vector<int> dp(3, 0);
        dp[0] = cost[0];
        dp[1] = cost[1];

        cost.push_back(0);
        for (int i = 2; i < cost.size(); i++) {
            dp[i % 3] = min(dp[(i + 1) % 3], dp[(i + 2) % 3]) + cost[i];
        }

        return dp[(cost.size() - 1) % 3];
    }
};

//////////////////////////////////////////////////////////////////////////
int _solution_run(vector<int>& cost)
{
    //int caseNo = -1;
    //static int caseCnt = 0;
    //if (caseNo != -1 && caseCnt++ != caseNo) return {};

    Solution sln;
    return sln.minCostClimbingStairs(cost);
}

//#define USE_SOLUTION_CUSTOM
//string _solution_custom(TestCases &tc)
//{
//	return {};
//}

//////////////////////////////////////////////////////////////////////////
//#define USE_GET_TEST_CASES_IN_CPP
//vector<string> _get_test_cases_string()
//{
//	return {};
//}
