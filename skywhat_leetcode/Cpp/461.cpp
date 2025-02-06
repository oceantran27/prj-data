#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include<iostream>

using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        int x_xor_y = x^y;
        int cnt = 0;
        
        for(int i=0;i<32;++i){
            if(1&(x_xor_y >> i)){
                cnt++;
            }
        }
        
        return cnt;
    }
};

int main(){
    
}
