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
    int findComplement(int num) {
         int temp=0;
        int comp=0;
        int place=0;
        while (num!=0)
        {
            temp=!(num&1);
            num=num>>1;
            comp=comp+(temp*pow(2,place));
            place++;
        }
        return comp;
    }
};