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
        string ans;
        for(int i=0;address[i]!='\0';i++){
            if(address[i]>=48 && address[i]<=57){
                ans+=address[i];
            }else{
                ans+="[.]";
            }
        }
        return ans;
    }
};
