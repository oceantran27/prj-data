#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> answer;
        for (int i=0;i<=rowIndex;++i)
        {
            answer.push_back(int(1));
            for (int j=i-1;j>0;--j)
                answer.at(j)=answer.at(j-1)+answer.at(j);
        }
        return answer;
    }
};
