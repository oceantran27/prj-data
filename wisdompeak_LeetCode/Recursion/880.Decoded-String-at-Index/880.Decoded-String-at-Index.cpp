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
    string decodeAtIndex(string S, int K) 
    {
        long long count = 0;
        for (int i=0; i<S.size(); i++)
        {
            char ch = S[i];
            if (isalpha(ch))
            {
                count++;
                if (count==K)
                {
                    string ret;
                    ret.push_back(ch);
                    return ret;
                }
            }
            else
            {
                long long times = ch-'0';
                if (count * times < K)
                    count = count * times;
                else if (K % count == 0)
                    return decodeAtIndex(S.substr(0,i), count);
                else 
                    return decodeAtIndex(S.substr(0,i), K % count);
            }
        }
        
        return "";
        
    }
};
