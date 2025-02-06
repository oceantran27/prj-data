#include <bits/stdc++.h>
#include <unordered_map>
#include "stdafx.h"
#include "HuaWei.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <stack>
#include <algorithm>
#include <functional>
#include <set>

using namespace std;

int test_ַľ()
{
	string str1, str2;
	while (cin >> str1 >> str2)
	{
		int n = str1.size(), m = str2.size();
		//dp[x][y]ʾAǰxַ༭ BǰyַѵĴ.
		vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

		//ʾһմΪBǰiַɵӴ
		for (int i = 0; i <= m; ++i)
			dp[i][0] = i;
		for (int i = 0; i <= n; ++i)
			dp[0][i] = i;

		//dp[x-1][y-1]+rc;//A[x-1]!=B[y-1] ǰx-1ַΪBǰy-1ַ,ٽһַ滻.
		//dp[x-1][y-1];//A[x-1]==B[y-1] ǰx-1ַΪBǰy-1ַ,һ޸.
		//dp[x-1][y]+dc;//ɾһַ,ǰx-1ַΪBǰyַ
		//dp[x][y-1]+ic;//Aǰx-1ַΪBǰyַ,ٲһַ
		//dp[x][y]ֵΪСһ.
		for (int i = 1;i <= m;++i)
		{
			for (int j = 1; j <= n; ++j)
			{
				int case1 = dp[i - 1][j - 1] + 1;
				int case2 = dp[i - 1][j - 1];
				int case3 = dp[i - 1][j] + 1;
				int case4 = dp[i][j - 1] + 1;
				if (str1[j - 1] == str2[i - 1])
					dp[i][j] = min(min(case3, case4), case2);
				else
					dp[i][j] = min(min(case3, case4), case1);
			}
		}
		cout << dp[m][n] << endl;
	}
	return 0;
}