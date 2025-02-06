#include <bits/stdc++.h>
#include <unordered_map>
#include "stdafx.h"
#include "HuaWei.h"
#include <iostream>
#include <string>
#include <set>
#include <map>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

//Ʒ
struct product_16
{
	int value; //۸
	int priority;//Ҫ
	int q;//ţ0Ϊ0Ϊ
};

static int GetMax(vector<product_16> &proVec,int N,int m)
{
	vector<int> dp(N + 1, 0);
	//01⣬һά¼ʷŽ
	for (int i = 1; i <= m; i++)
	{
		for (int j = N; j >= 10; j -= 10)
		{
			if (j >= proVec[i].value)
			{
				//ΪȡͲ۸*Ҫȵֵ
				if (proVec[i].q == 0)
				{
					int tmp = dp[j - proVec[i].value] + proVec[i].value * proVec[i].priority;
					dp[j] = max(dp[j], tmp);
				}
				else
				{
					//ΪͬʱҲҪӦ
					if (j >= proVec[i].value + proVec[proVec[i].q].value)
					{
						int tmp = dp[j - proVec[i].value -
							proVec[proVec[i].q].value] +
							proVec[i].value * proVec[i].priority +
							proVec[proVec[i].q].value * proVec[proVec[i].q].priority;
						dp[j] = max(dp[j], tmp);
					}
				}
			}
		}
	}
	return dp[N];
}

int test_16()
{
	int N, m;
	while (cin >> N >> m)
	{
		int v, p, q;
		int k0 = 0, k1 = 0;
		vector<product_16> proVec(60);
		int total;
		//ȫ
		for (int i = 1;i<=m;i++)
		{
			cin >> v >> p >> q;
			product_16 p16;
			p16.value = v;
			p16.priority = p;
			p16.q = q;
			proVec[i]=p16;
		}

		//滮
		int ret = GetMax(proVec, N, m);
		//
		cout << ret << endl;
	}
	return 0;
}