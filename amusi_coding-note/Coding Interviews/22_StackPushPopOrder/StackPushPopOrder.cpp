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
Date:      2018-07-29


Ŀ
Уһбʾջѹ˳жϵڶǷΪջĵ˳򡣼ѹջ־ȡ
1,2,3,4,5ĳջѹ˳4,5,3,2,1ǸѹջжӦһУ4,3,5,1,2ͲǸѹջеĵСע⣺еĳȵģ

*****************************************/

class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        // ж
        if(pushV.size() == 0)
            return false;
        // Ӹջ
        vector<int> stack;    // ջĿpopVжԱ
        for(int i=0,j=0; i<pushV.size();){
            // 
            stack.push_back(pushV[i++]);    //  ջѹpushVԪ
            // ȱһ
            // 1: Сڻг
            // 2: ջջԪӦpopVԪֵ
            while(j < popV.size() && stack.back() == popV[j]){
                stack.pop_back();    // ջԪ
                ++j;                 // popVһԪ
            }
        }
        return stack.empty();
    }
};