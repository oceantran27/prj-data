#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/reveal-cards-in-increasing-order/

class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n=deck.size(),i, j;
        vector<int> ans(n);
        i=0; j=0;
        sort(deck.begin(), deck.end());
        while(true){
            while(ans[i]!=0) i=(i+1)%n;
            ans[i]=deck[j];
            j++;
            if(j==n) break;
            i=(i+1)%n;
            while(ans[i]!=0) i=(i+1)%n;
            i=(i+1)%n;
        }
        return ans;
    }
};