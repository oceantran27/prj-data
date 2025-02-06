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
    int numJewelsInStones(string J, string S) {
        int ans=0;
        for(int i=0;i<J.length();i++){
            for(int j=0;j<S.length();j++){
                if(J[i]==S[j])
                    ans++;
            }
        }
        return ans;
    }
};
