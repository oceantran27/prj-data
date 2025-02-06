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
    bool isPalindrome(int x) {
        string xs=to_string(x);
        int i=0, j=xs.length()-1;
        while(i<=j)
        {
            if(xs[i]!=xs[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};
