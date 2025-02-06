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
    int characterReplacement(string s, int k) 
    {
        vector<int>count(26,0);
        
        int i = 0;        
        int result = 0;
        
        for (int j=0; j<s.size(); j++)
        {
            count[s[j]-'A']++;
            
            while (j-i+1 - *max_element(count.begin(),count.end()) > k)
            {
                count[s[i]-'A']--;
                i++;                       
            }
            result = max(result, j-i+1);                                    
        }
        return result;
    }
};
