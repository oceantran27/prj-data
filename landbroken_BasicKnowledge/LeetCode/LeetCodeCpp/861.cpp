#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include "stdafx.h"
#include <vector>
using namespace std;

/*
861. תĵ÷
https://blog.csdn.net/wez031113/article/details/80914083

˼·

ؾܸ߷ҪΪͬһλ1Բͬͬλܶ1

Ϊ̣

1жλǷΪ1ƶǰС

2жÿеĵ0ĸ0϶࣬ƶǰС

3߷
*/
class Solution {
public:
	int matrixScore(vector<vector<int>>& A) {
		int row = A.size();
		int cloumn = A[0].size();
		for (int i = 0; i < row; i++)
		{
			if (A[i][0] == 0)
			{
				for (int j = 0; j < cloumn; j++)
				{
					A[i][j] = 1 - A[i][j];
				}
			}
		}
		for (int j = 0; j < cloumn; j++)
		{
			int coutZero = 0;
			for (int i = 0; i < row; i++)
			{
				if (A[i][j] == 0)coutZero++;
			}
			int coutOne = row - coutZero;
			if (coutZero > coutOne)
			{
				for (int m = 0; m < row; m++)
				{
					A[m][j] = 1 - A[m][j];
				}
			}
		}

		int sum = 0;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < cloumn; j++)
			{
				sum += A[i][j] * pow(2, (cloumn - j - 1));
			}
		}
		return sum;
	}
};