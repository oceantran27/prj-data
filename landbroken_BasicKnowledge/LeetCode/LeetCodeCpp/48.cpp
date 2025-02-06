#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "stdafx.h"

/*
һ n  n Ķάʾһͼ

ͼ˳ʱת 90 ȡ

˵

ԭתͼζҪֱ޸Ķά벻Ҫʹһתͼ

ʾ 1:

 matrix =
[
[1,2,3],
[4,5,6],
[7,8,9]
],

ԭתʹΪ:
[
[7,4,1],
[8,5,2],
[9,6,3]
]
ʾ 2:

 matrix =
[
[ 5, 1, 9,11],
[ 2, 4, 8,10],
[13, 3, 6, 7],
[15,14,12,16]
],

ԭתʹΪ:
[
[15,13, 2, 5],
[14, 3, 4, 1],
[12, 6, 8, 9],
[16, 7,10,11]
]
*/
class Solution {
public:
	void rotate(vector<vector<int>>& matrix) {
		//ȹбԽߣϵ£ԳƱ任
		//ȻмҶԳƱ任
		int n = matrix.size();
		for (int i = 0;i<n;++i)
		{
			for (int j = i + 1;j<n;++j)
			{
				swap(matrix[i][j], matrix[j][i]);
			}
			reverse(matrix[i].begin(), matrix[i].end());
		}
	}
};
