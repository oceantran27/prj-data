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
    string strWithout3a3b(int A, int B) {
        string result;
        int currA = 0, currB = 0;
        while (A || B) {
            if ((A > B && currA < 2) || currB == 2) {
                result += 'a';
                --A;
                ++currA;               
                currB = 0;
            }
            else {
                result += 'b';
                --B;
                ++currB;               
                currA = 0;
            }
        }
        
        return result;
    }
};
