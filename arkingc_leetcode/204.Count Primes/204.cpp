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
    int countPrimes(int n) {
        if(n <= 2)  return 0;
        
        bool *state = new bool[n];
        for(int i = 0;i < n;i++)    state[i] = true;
        state[0] = false;
        state[1] = false;
        for(int i = 2;i * i < n;i++)
            if(state[i])
                for(int j = i;i * j < n;j++)
                    state[i * j] = false;
 
        
        int count = 0;
        for(int i = 2;i < n;i++)
            if(state[i])
                count++;
        return count;
    }
};