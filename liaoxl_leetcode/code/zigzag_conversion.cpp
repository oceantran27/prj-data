#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
/*
 * zigzag_conversion.cpp
 * Copyright (C) 2013 moondark <liaoxl2012@gmail.com>
 *
 * http://liaoxl.github.io/blog/20131114/leetcode-zigzag-conversion/
 * Distributed under terms of the MIT license.
 */

#include <iostream>

using namespace std;

class Solution {
public:
    string convert(string s, int nRows) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function    
        if(nRows <= 1) return s;
        string res;
        int zigsize = 2 * nRows - 2;
        for(int i = 0; i < nRows; ++i) {
            for(int base = i; ;base += zigsize) {
                if(base >= s.size())
                    break;
                res.append(1,s[base]);
                if(i > 0 && i < nRows - 1) {
                    //middle need add ziggggging char
                    int ti = base + zigsize - 2 * i;
                    if(ti < s.size())
                        res.append(1,s[ti]);
                }
            }
        }
        return res;
    }
};

int main(int argc, char* argv[])
{
	
	return 0;
}

