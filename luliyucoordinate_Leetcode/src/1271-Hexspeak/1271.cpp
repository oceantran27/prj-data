#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution 
{
public:
    string toHexspeak(string num) 
    {
        stringstream dataToHex;
        string res;
        dataToHex << uppercase << hex << stol(num);
        
        char i;
        while (dataToHex >> i)
        {
            if (i > '1' && i <= '9') return "ERROR";
            if (i == '0') res += 'O';
            else if (i == '1') res += 'I';
            else res += i;
        }
        return res;
    }
};