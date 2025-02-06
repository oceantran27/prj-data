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
    O(n^2logn)
    for each point o,
        decrease all points by o
        set zero = number of (0, 0)
        for those points that are not (0, 0), mirror it to the y>0 plane and sort them by cross-muti
        update answer by zero !
        groups the points by cross-muti, update zero+sizeof(each group)
*/




/**
 * Definition for a point.
 * struct Point {
 *     int x;
 *     int y;
 *     Point() : x(0), y(0) {}
 *     Point(int a, int b) : x(a), y(b) {}
 * };
 */
bool cmp(const Point &a, const Point &b){
    return (long long)a.x*b.y<(long long)a.y*b.x;
}
class Solution {
public:
    bool same(const Point &a, const Point &b){
        return (long long)a.x*b.y==(long long)a.y*b.x;
    }
    int maxPoints(vector<Point> &points) {
        if (points.size()==0) return 0;
        int maxpt = 1;
        for (auto o : points){
            vector<Point> a;
            int zero = 0;
            for (auto p : points){
                if (p.x == o.x && p.y == o.y){
                    zero++;
                    continue;
                }
                Point r(p.x-o.x, p.y-o.y);
                if (r.y<0 || (r.y==0 && r.x<0)){
                    r.x *=-1;
                    r.y *=-1;
                }
                a.push_back(r);
            }
            maxpt = max(maxpt, zero);
            if (a.size() == 0) continue;
            sort(a.begin(), a.end(), cmp);
            for (int i = 0, j = 0; i<a.size(); i=j){
                while (j<a.size() && same(a[i], a[j])){
                    j++;
                }
                maxpt = max(maxpt, zero + j-i);
            }
        }
        return maxpt;
    }
};
