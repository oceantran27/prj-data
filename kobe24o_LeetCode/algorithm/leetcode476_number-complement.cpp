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
        int n = 1, num_copy = num;
        while(num_copy/2)
        {
        	++n;
        	num_copy /= 2;
        }
        while(n)
        {
        	num ^= (1<<n-1);
        	n--;
        }
        return num;
    }
};
int main()
{
	Solution s;
	s.findComplement(5);
}