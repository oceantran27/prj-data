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
    int minSwaps(vector<int>& data) {
        int n = data.size();
        int totalOnes = 0;
        for(auto i:data)
            totalOnes += i;
        int maxOnes = 0;
        int currOnes = 0;
        int i=0,j=0;
        while(j < totalOnes){
            currOnes += data[j];
            j++;
        }
        maxOnes = max(maxOnes,currOnes);
        while(j<n){
            currOnes += data[j++] - data[i++];
            maxOnes = max(maxOnes,currOnes);
        }
        return totalOnes - maxOnes;
    }
};