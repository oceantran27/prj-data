#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/* Problem #875 "KoKo Eating bananas" Link: https://leetcode.com/problems/koko-eating-bananas/
Problem Statement : Koko loves to eat bananas.  There are N piles of bananas, the i-th pile has piles[i] bananas.  
The guards have gone and will come back in H hours.

Koko can decide her bananas-per-hour eating speed of K.  
Each hour, she chooses some pile of bananas, and eats K bananas from that pile.  
If the pile has less than K bananas, she eats all of them instead, and won't eat any more bananas during this hour.

Koko likes to eat slowly, but still wants to finish eating all the bananas before the guards come back.

Return the minimum integer K such that she can eat all the bananas within H hours.

Example: 
Input: piles = [3,6,7,11], H = 8
Output: 4
*/




class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int H) {
        //piles[i], no of bananas in ith pile
        //speed=k, 
        /*
        Binary Predicate Framework Solution
        -> now here K can take values from 0 to max(piles[i])
        ->For K, there are two cases possible
        Case 1. will finish all the bananas(sum) within H hours, i.e., k*H>=sum
        Case 2. will not finish all the bananas k*H<sum
        
        ->consider an array (arr)[possible k values] with values from 1 to max e.g. 1 2 3 .... max
        ->for some initial values of arr, case 2 exists, i.e., k*H<sum
        ->then, we some index j, case 1 starts, i.e.., min k where case 1 is true
        ->find such j
        -> arr can be denoted as [FFFFTTTTT] (F-Case 2,T- Case 1)
        ->Find first T
       
        */
        //Step 1: Find max value in piles
        int max_ele=*max_element(piles.begin(),piles.end());
        
        //lo and high are the min and max values possible for k
        int lo=1, hi=max_ele,n=piles.size();
       
        while(lo<hi)
        {
            //mid is the speed
            int mid=lo+(hi-lo)/2;
            //check which case is true, 1 or 2
                //case 1
            //now if k=mid, i.e.., speed of k, can it eat all the bananas
            //see with speed of k , how many hours each piles will take
            int hours=0;
            for(int i=0;i<n;i++)
            {
                //cur_no_hour, no of hour taken to finish piles[i], with k speed
                int cur_no_hour=ceil((double)piles[i]/mid);
                hours+=cur_no_hour;
            }
            //true case 1 
            if(hours<=H)
                hi=mid;
            else
                lo=mid+1;
        }
         
       
        return lo;
        
    }
};
