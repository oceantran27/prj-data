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
    string defangIPaddr(string address) {
        for(int i=0;i<address.length();i++){
            if(address[i]=='.'){
                address.insert(i,"[");
                address.insert(i+2,"]");
                i+=2;
            }
        }
        return address;
    }
};
