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
    string convertToTitle(int n) 
    {
        string result;               
                
        while (n>0)
        {            
            n--;
            result=char('A'+(n%26))+result;
            n=n/26;
        }
        return result;
    }
};
