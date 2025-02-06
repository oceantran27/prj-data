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
    bool checkIfPangram(string sen) {
        set<char> s;
        for(int i=0;i<sen.size();i++){
            s.insert(sen[i]);
        }
        if(s.size()==26) return true;
        return false;
    }
};