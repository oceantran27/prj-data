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
    bool isContinuous( vector<int> numbers ) {
        sort(numbers.begin(),numbers.end());
        for(int i=1;i<numbers.size();++i)
            if(numbers[i] && numbers[i]==numbers[i-1]) //non-zero repeatance
                return false;
        for(auto x:numbers)
            if(x) //non-zero min
                return numbers.back()-x<=4;
    }
};