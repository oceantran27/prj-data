#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*****************************************
Copyright: Amusi
Author:    Amusi
Date:      2018-06-18

Ŀ
һʼɸԪذᵽĩβǳ֮Ϊת һǵݼһתתСԪء {3,4,5,1,2}Ϊ{1,2,3,4,5}һתСֵΪ1 NOTEԪض0СΪ0뷵0


*****************************************/

class Solution {
public:
    // ˼·: ǵݼʹɣת󣬻ǳһɣǰһǷǵݼģһҲǷǵݼġ
    // 䲻ڷǵݼɡ{3,4,5,1,2}е51˸һԣҵཻλãһԪؼɡ
    int minNumberInRotateArray(vector<int> rotateArray) {
        int nums = rotateArray.size();
        if(nums == 0)
            return 0;
        for(int i=0; i<nums; ++i){
            if(rotateArray[i] > rotateArray[i+1])
                return rotateArray[i+1];
        }
        return rotateArray[0];
    }
};