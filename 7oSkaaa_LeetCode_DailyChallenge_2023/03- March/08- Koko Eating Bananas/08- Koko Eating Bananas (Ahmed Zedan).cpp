#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// author : Ahmed zedan 
#define Ceil(a, b) ((a / b) + (a % b ? 1 : 0))
class Solution {
public:
    // binary search on answer
    int minEatingSpeed(vector<int>& piles, int h) {
        /*
            1<=k<=max of (piles)
            because  If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.
        */ 
        int l=1 , r=*max_element(piles.begin(),piles.end()) ; 
        auto good = [&](int k){ 
            int tot = 0 ; 
            for(auto i : piles) tot+= Ceil(i,k) ;
            return tot ;   
        };
        while(l<r){
            int m = l+(r-l)/2 ;  
            (good(m)>h?l=m+1:r=m) ; 
        } 
        return l ; 
    }
};