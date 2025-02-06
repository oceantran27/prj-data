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
    string reverseOnlyLetters(string S) {
        int l=0,r=S.size()-1;
        while(l<r){
            while(!isalpha(S[l]))
                l++;
            while(!isalpha(S[r]))
                r--;
            if(l<r){
                swap(S[l],S[r]);
                l++;
                r--;
            }
        }
        return S;
    }
};
