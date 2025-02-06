#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
 * @lc app=leetcode id=447 lang=cpp
 *
 * [447] Number of Boomerangs(回旋镖)
 *
 * https://leetcode.com/problems/number-of-boomerangs/description/
 *
 * algorithms
 * Easy (48.41%)
 * Total Accepted:    49.9K
 * Total Submissions: 101.9K
 * Testcase Example:  '[[0,0],[1,0],[2,0]]'
 *
 * Given n points in the plane that are all pairwise distinct, a "boomerang" is
 * a tuple of points (i, j, k) such that the distance between i and j equals
 * the distance between i and k (the order of the tuple matters).
 * 
 * Find the number of boomerangs. You may assume that n will be at most 500 and
 * coordinates of points are all in the range [-10000, 10000] (inclusive).
 * 
 * Example:
 * 
 * Input:
 * [[0,0],[1,0],[2,0]]
 * 
 * Output:
 * 2
 * 
 * Explanation:
 * The two boomerangs are [[1,0],[0,0],[2,0]] and [[1,0],[2,0],[0,0]]
 * 
 * 
 */

// O(N^2)
class Solution {
public:
    int numberOfBoomerangs(vector<pair<int, int>>& points) {
        int res = 0;
        for (int i = 0; i < points.size(); ++i)
        {
            unordered_map<int, int> counter;
            for (int j = 0; j < points.size(); ++j)
            {
                if (i == j) continue;
                
                int dis_x = points[i].first - points[j].first;
                int dis_y = points[i].second - points[j].second;
                
                int distance = dis_x * dis_x + dis_y * dis_y;
                res += counter[distance] * 2;
                
                counter[distance] += 1;
            }
        }
        
        return res;
    }
};

// O(N^2)
class Solution1 {
public:
    int numberOfBoomerangs(vector<pair<int, int>>& points) {
        int res = 0;
        for (int i = 0; i < points.size(); ++i)
        {
            unordered_map<int, int> counter;
            for (int j = 0; j < points.size(); ++j)
            {
                if (i == j) continue;
                
                int dis_x = points[i].first - points[j].first;
                int dis_y = points[i].second - points[j].second;
                
                int distance = dis_x * dis_x + dis_y * dis_y;
                
                counter[distance] += 1;
            }
            
            for (auto distance: counter)
            {
                int dots = distance.second;
                if (dots >= 2)
                {
                    res += dots * (dots - 1);
                }
            }
        }
        
        return res;
    }
};

// Q: 给定平面上N个不同的点, 求能够组成回旋镖个数
// A: 转换成排列组合问题，假设平面上和A距离相同的点有k个, 那么以可以组成的三元组为：
// 第一个位置，只能是A，有一种；第二个位置有k中；第三个位置有k-1种，所以由A为回旋镖中心可组成的个数为k * (k - 1)
// 然后，以B为中心，C为中心... 全都加起来
