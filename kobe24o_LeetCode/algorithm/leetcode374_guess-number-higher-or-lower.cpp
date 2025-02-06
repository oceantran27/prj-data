#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int i = 1, j = n, mid;
        while(i <= j)
        {
        	mid = i+((j-i)>>1);
        	if(guess(mid) == 0)
        		return mid;
        	else if(guess(mid) < 0)
        		j = mid-1;
        	else
        		i = mid+1;
        }
        return mid;
    }
};