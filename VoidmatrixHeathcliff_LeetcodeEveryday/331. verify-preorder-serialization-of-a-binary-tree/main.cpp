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
    bool isValidSerialization(string preorder) {
        int iLength = preorder.size(), iIndex = 0, iNumSolts = 1;
        while (iIndex < iLength) {
            if (iNumSolts == 0) return false;
            switch (preorder[iIndex]) {
                case ',': iIndex++; break;
                case '#': iNumSolts--, iIndex++; break;
                default: while (iIndex < iLength && preorder[iIndex] != ',') iIndex++; iNumSolts++; // iNumSolts - 1 + 2
            }
        }
        return iNumSolts == 0;
    }
};