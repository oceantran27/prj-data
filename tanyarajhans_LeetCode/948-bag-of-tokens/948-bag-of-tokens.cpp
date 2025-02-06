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
    int bagOfTokensScore(vector<int>& arr, int power) {
        int n = arr.size();
        int score = 0;
        sort(arr.begin(), arr.end()); 
        int i = 0, j = n - 1;
        while(i < j) 
        {
            if(power >= arr[i])
            {
                power -= arr[i++];
                score++;
            }                  
            else if(score >= 1 && power + arr[j] >= arr[i])
            {
                power += arr[j--];
                score--;
            }
            else break;
        }
        while(i < j + 1 && power >= arr[i])
        {
            power -= arr[i++];
            score++;
        }
        
        return score;
    }
};