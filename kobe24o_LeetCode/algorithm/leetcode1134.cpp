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
    bool isArmstrong(int N) {
        int bits = 0, sum = 0, n = N;
        while(n)
        {
        	bits++;
        	n /= 10;
        }
        n = N;
        while(n)
        {
        	sum += pow(n%10, bits);
        	n /= 10;
        }
        return sum==N;
    }
};