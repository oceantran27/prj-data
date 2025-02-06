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
    int lengthOfLastWord(string s) {
        int s_size=s.size();
        if (s_size==0)
            return 0;
        int last_words_size=0,index=s_size-1;
        while (index>=0 && s.at(index)==' ')
            --index;
        while (index>=0 && s.at(index)!=' ')
        {
            --index;
            ++last_words_size;
        }
        return last_words_size;
    }
};
