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
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int a=0,b=0,c=0;
        for (char i:firstWord) {
            a=a*10+i-'a';
        }
        for (char i:secondWord) {
            b=b*10+i-'a';
        }
        for (char i:targetWord) {
            c=c*10+i-'a';
        }
        return a+b==c;
    }
};