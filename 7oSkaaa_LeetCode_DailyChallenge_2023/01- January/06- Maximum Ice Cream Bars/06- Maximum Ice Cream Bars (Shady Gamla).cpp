#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// // Author: Shady Gamal
class Solution {
public:
    int maxIceCream(vector<int>& arr, int k) {
        // First , We will Sort Array to Get Smallest Element First 
        sort(arr.begin(),arr.end());
        int ans=0;
        for(int i=0 ; i<arr.size() ; i++){
            // if first element is smaller or equal the total money so we can buy it.
            if(k>=arr[i]){
                ans++;
                k-=arr[i];
            }
            // else the item is higher so can't buy it or next elements 
            else break;
        }
        return ans;
    }
};