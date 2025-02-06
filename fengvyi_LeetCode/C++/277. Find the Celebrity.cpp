#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Forward declaration of the knows API.
bool knows(int a, int b);

class Solution {
public:
    int findCelebrity(int n) {
        int i = 0, j = 1;
        while(j < n){
            if(knows(i, j)) i = j;
            j++;
        }
        for(int k = 0; k < n; k++){
            if(k == i) continue;
            if(!knows(k, i) || knows(i, k)){
                i = -1;
                break;
            }
        }
        return i;
    }
};
