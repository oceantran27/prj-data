#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
/*
 * count_and_say.cpp
 * Copyright (C) 2013 moondark <liaoxl2012@gmail.com>
 *
 * http://liaoxl.github.io/blog/20131124/leetcode-cas/
 * Distributed under terms of the MIT license.
 */

#include <iostream>

using namespace std;

class Solution {
public:
    string convertToNext(string str)
    {
        int count=1;
        unsigned int index=0;
        string tstr;
        string tmp;
        tmp.resize(1);
        while(index<str.length())
        {
            while(index+1<str.length() && str[index]==str[index+1])
            {
                count++;
                index++;
            }
            tmp[0]=count+'0';
            tstr.append(tmp.begin(),tmp.end());
            count=1;
            tmp[0]=str[index];
            tstr.append(tmp.begin(),tmp.end());
            index++;
        }
        return tstr;
    }

    string countAndSay(int n) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        string str;
        if(n<=0) return str;
        str="1";
        for(int i=2; i<=n;i++)
        {
            str=convertToNext(str);
        }
        return str;
    }
};

int main(int argc, char* argv[])
{
	
	return 0;
}

