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
    void romanstr(string& roman, int num, char* symbol)
    {
        if(num == 0)return;
        else if(num <= 3) roman.append(num, *symbol);
        else if(num == 4)
        {
            roman.append(1,*symbol);
            roman.append(1,*(symbol+1));
        }
        else if(num <= 8)
        {
            roman.append(1,*(symbol+1));
            roman.append(num-5,*symbol);
        }
        else if(num == 9)
        {
            roman.append(1,*symbol);
            roman.append(1,*(symbol+2));
        }
    }
    
    string intToRoman(int num) 
    {
        char symbol[9] = {'I','V','X','L','C','D','M'};
        string roman="";
        int scale = 1000;
        int p=6;
        while(num)
        {
            int bit = num/scale;
            romanstr(roman, bit, symbol+p);
            num = num%scale;
            scale /= 10;
            p -= 2;
        }
        return roman;
    }
};