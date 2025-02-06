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
    int maximum69Number (int num) {
       string str = to_string(num);
       for(auto &ch :str)
       {
           if(ch=='6')
           {
               ch='9';
               break;
           }
       }
        return stoi(str);
    }
};