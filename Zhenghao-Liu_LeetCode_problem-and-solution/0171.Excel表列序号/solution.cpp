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
    int titleToNumber(string s) {
        int s_size=s.size(),answer=0;
        double right=1;
        for (int i=s_size-1;i>=0;--i)
        {
            answer=answer+right*(s.at(i)-'@');
            right=right*26;
        }
        return answer;
    }
};
