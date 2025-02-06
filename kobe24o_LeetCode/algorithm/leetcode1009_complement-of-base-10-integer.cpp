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
    int bitwiseComplement(int N) {
        if(N == 0) return 1;
        int bits = 32, Nc = N;
        while(Nc)
        {
        	bits--;
        	Nc >>= 1;
        }
        return ~(N << bits) >> bits;
    }
};

class Solution {
public:
    int bitwiseComplement(int N) {
        if(N == 0) return 1;
        int bits = 0, Nc = N;
        while(Nc)
        {
        	bits++;
        	Nc >>= 1;
        }
        return (1 << bits) - 1 - N;
    }
};