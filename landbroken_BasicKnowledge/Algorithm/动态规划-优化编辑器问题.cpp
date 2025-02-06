#include <bits/stdc++.h>
#include <map>
#include <unordered_map>
#include "stdafx.h"
#include <vector>
#include <stack>
#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <unordered_set>
using namespace std;

/*
Ŀ:
ַABҪв롢ɾ޸ĲAΪB
icdcrcֱΪֲĴۣһЧ㷨AΪBҪٴۡ
ַABǵĳȺֲۣ뷵ؽAΪBҪС֤ۡȾСڵ300.
1
2
3
4
:
ɴСΪ(N+1)*(M+1)ľdp. dp[x][y]ʾAǰxַ༭ BǰyַѵĴ.
ڵһ˵,dp[0][y]ʾһմΪBǰyַɵӴ,ѵĴΪic*y;
ͬ,ڵһdp[x][0] = x*dc;

λ,dp[x][y]¼ȡֵ:
dp[x-1][y-1]+rc;//A[x-1]!=B[y-1] ǰx-1ַΪBǰy-1ַ,ٽһַ滻.
dp[x-1][y-1];//A[x-1]==B[y-1] ǰx-1ַΪBǰy-1ַ,һ޸.
dp[x-1][y]+dc;//ɾһַ,ǰx-1ַΪBǰyַ
dp[x][y-1]+ic;//Aǰx-1ַΪBǰyַ,ٲһַ
dp[x][y]ֵΪСһ.
,dp[n][m]Ϊ.
*/
class MinCost {
public:
	int findMinCost(string A, int n, string B, int m, int ic, int dc, int rc)
	{
		vector< vector<int> > dp(n + 1, vector<int>(m + 1, 0));
		for (int i = 1; i <= m; ++i)
			dp[0][i] = ic*i;
		for (int i = 1; i <= n; ++i)
			dp[i][0] = dc*i;
		for (int i = 1; i <= n; ++i)
		{
			for (int j = 1; j <= m; ++j)
			{
				int case1 = dp[i - 1][j] + dc;
				int case2 = dp[i][j - 1] + ic, case3 = dp[i - 1][j - 1];
				if (A[i - 1] != B[j - 1])
					case3 += rc;
				dp[i][j] = min(min(case1, case2), case3);
			}
		}
		return dp[n][m];
	}
};