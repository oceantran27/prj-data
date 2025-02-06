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
    int compress(vector<char>& chars) {
        int idx = 0;
        int n = chars.size();
        for(int i=0; i<n; i++)
        {
            int count = 0;
            char ch = chars[i];
            int j = i;
            while(j<n && chars[j]==ch)
            {
                count++;
                j++;
            }
            i = j-1;
            chars[idx++] = ch;
            if(count>1)
            {
                string s = to_string(count);
                for(auto c:s)
                    chars[idx++] = c;
            }
        }
        return idx;
    }
};