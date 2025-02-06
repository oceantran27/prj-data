#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

//如果一个左区间的最大值要小于右区间的最小值，代表可以划分
class Solution {
public:
    int maxChunksToSorted(vector<int> &arr) {
        int arr_size=arr.size();
        if (is_sorted(arr.begin(),arr.end()))
            return arr_size;
        int ans=1;
        vector<int> left_2_right_max(arr_size);
        left_2_right_max.at(0)=arr.at(0);;
        for (int i=1;i<arr_size-1;++i)
            left_2_right_max.at(i)=max(left_2_right_max.at(i-1),arr.at(i));
        vector<int> right_2_left_min(arr_size);
        right_2_left_min.at(arr_size-1)=arr.at(arr_size-1);
        for (int i=arr_size-2;i>=1;--i)
            right_2_left_min.at(i)=min(right_2_left_min.at(i+1),arr.at(i));
        for (int i=0;i<arr_size-1;++i)
            if (left_2_right_max.at(i)<right_2_left_min.at(i+1))
                ++ans;
        return ans;
    }
};
