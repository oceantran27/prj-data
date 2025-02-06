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
    int maxProfit(vector<int>& prices) 
	{
		int ans = 0;
		int minPrices = INT_MAX;
		for (auto n : prices)
		{
			minPrices = min(minPrices, n);
			ans = max(ans, n - minPrices);
		}
		return ans;
    }
};

//////////////////////////////////////////////////////////////////////////
int _solution_run(vector<int>& prices)
{
	//int caseNo = -1;
	//static int caseCnt = 0;
	//if (caseNo != -1 && caseCnt++ != caseNo) return {};

	Solution sln;
	return sln.maxProfit(prices);
}

//#define USE_SOLUTION_CUSTOM
//int _solution_custom(TestCases &tc)
//{
//	return {};
//}

//////////////////////////////////////////////////////////////////////////
//#define USE_GET_TEST_CASES_IN_CPP
//vector<string> _get_test_cases_string()
//{
//	return {};
//}
