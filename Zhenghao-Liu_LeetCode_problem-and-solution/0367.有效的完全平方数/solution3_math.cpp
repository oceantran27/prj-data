#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
* 1=1
* 4=1+3
* 9=1+3+5
* 16=1+3+5+7
* 25=1+3+5+7+9
*/
class Solution {
public:
    bool isPerfectSquare(int num) {
        int x=1;
        while (num>0)
        {
            num-=x;
            x+=2;
        }
        return num==0;
    }
};
