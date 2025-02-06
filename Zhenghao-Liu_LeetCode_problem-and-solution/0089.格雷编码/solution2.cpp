#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

//神奇的为位运算
class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> answer;
        int loop_times=pow(2,n);
        for (int i=0;i<loop_times;++i)
            answer.push_back((i >> 1) ^ i);
        return answer;
    }
};
