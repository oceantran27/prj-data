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
    int rangeBitwiseAnd(int m, int n) {
		int i, high = 30, ans = m;
        long num;
		while(high>=0 && ((m>>high)&1)!=1)
			high--;//找到最小的数的最高位
		for(i = high; i >= 0; --i)
		{
			for(num = m; num <= n; ++num)
			{   //2147483646、2147483647，int++溢出
				if(((num>>i)&1)==0)
				{
					ans &= ~(1<<i);
					break;
				}
			}
		}
		return ans;
    }
};

class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        int move = 0;
        while(m != n)
        {
            m >>= 1;
            n >>= 1;
            move++;
        }
        return m << move;
    }
};