#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

//异或之后看一共有几个1
class Solution {
public:
    int hammingDistance(int x, int y) {
        int xor_ans=x^y;
        int ans=0;
        while (xor_ans!=0)
        {
            ans+=xor_ans&1;
            xor_ans>>=1;
        }
        return ans;
    }
};
