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
    int bagOfTokensScore(vector<int>& tokens, int P) 
    {
        sort(tokens.begin(),tokens.end());
        int i = 0;
        int j = tokens.size()-1;
        int score = 0;
        int result = 0;
        
        while (i<=j)
        {
            if (P>=tokens[i])
            {
                P-=tokens[i];
                i++;
                score++;
                result = max(result,score);
            }
            else if (score>0)
            {
                score--;
                P+=tokens[j];
                j--;
            }
            else
                break;
        }
        
        return result;
    }
};
