#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

//先排序，再倒着过来找最快
class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int citations_size=citations.size();
        int answer=0;
        for (int i=citations_size-1;i>=0;--i)
            if (citations.at(i)>answer)
                ++answer;
            else
                break;
        return answer;
    }
};
