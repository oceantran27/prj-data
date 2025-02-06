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
    int getMoneyAmount(int n) {
        int i = 1, j = n, mid, sum = 0;
        while(i < j)
        {
        	mid = i+((j-i)>>1);
        	sum += mid;
        	i = mid+1;
        }
        return sum;
    }
};