#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

//要想L和W差距尽可能小，那么最理想情况就是正方形，然后枚举一条边即可
class Solution {
public:
    vector<int> constructRectangle(int area) {
        int W=sqrt(area);
        while (area%W!=0)
            --W;
        return {area/W,W};
    }
};
