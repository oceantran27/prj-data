#include <bits/stdc++.h>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>

/************************************************************************/
/*

//ͬ·

A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).

The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked 'Finish' in the diagram below).

How many possible unique paths are there?


Note: m and n will be at most 100.


Example 1:

Input: m = 3, n = 2
Output: 3
Explanation:
From the top-left corner, there are a total of 3 ways to reach the bottom-right corner:
1. Right -> Right -> Down
2. Right -> Down -> Right
3. Down -> Right -> Right
Example 2:

Input: m = 7, n = 3
Output: 28

*/
/************************************************************************/


#include <vector>
#include <iostream>
using namespace std;

// ˼·1·ͨյ(ϣ)ͨϵ·Ϊnum1ͨ·Ϊnum2·Ϊnums1 + nums2
//        ϣݹ˹
class Solution {
public:
	int uniquePaths(int m, int n) {
		vector<vector<int>> paths(m, vector<int>(n, 1)); // dp solution, m x n matrix, all items are 1
		for (int i = 1; i < m; ++i)
		{
			for (int j = 1; j < n; ++j)
				paths[i][j] = paths[i - 1][j] + paths[i][j - 1];
		}
		return paths[m - 1][n - 1];
	}
};

// ˼·2ߵ·+ߵ·Ϊǰλõ·
// ݹ˹ֱ̣յ
// ʹû¼мɷãm = 4, n = 2 n = 2, m = 4ΪԳƹϵֻһΣm = 5, n = 2ʱ Ҳõ֮ǰĽ
//class Solution {
//public:
//	int uniquePaths(int m, int n) {
//
//		if (m < 2 || n < 2)
//			return 1;
//
//		if (m <= 2 && n <= 2)
//			return 2;
//
//		map<string, int>::iterator iter = cache.find(std::to_string(m) + "+" + std::to_string(n));
//		if (cache.end() != iter)
//			return iter->second;
//		iter = cache.find(std::to_string(n) + "+" + std::to_string(m));
//		if (cache.end() != iter)
//			return iter->second;
//
//		if (m <= 2) //ֻʣһ·
//		{
//			int a = uniquePaths(m, n - 1);
//			cache.insert(map<string, int>::value_type(std::to_string(m) + "+" + std::to_string(n - 1), a));
//			return 1 + a;
//		}
//
//		if (n <= 2) //ֻʣһ·
//		{
//			int a = uniquePaths(m - 1, n);
//			cache.insert(map<string, int>::value_type(std::to_string(m - 1) + "+" + std::to_string(n), a));
//			return 1 + a;
//		}
//
//		int a = uniquePaths(m - 1, n) + uniquePaths(m, n - 1);
//		cache.insert(map<string, int>::value_type(std::to_string(m) + "+" + std::to_string(n), a));
//		return a;
//	}
//private:
//	map<string, int> cache;
//};


int main(int argc, char* argv[])
{
	cout << Solution().uniquePaths(7, 3);
	return 0;
}