#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
	public:
		int singleNumber(vector<int> &nums)
		{
			//initialised the xor of numbers in xorr variable
			int xorr = 0;
			//Linearly traversing the array
			for (auto x = 0; x < nums.size(); x++)
			{
				//Calculating Xor of two numbers .
				xorr = xorr ^ nums[x];

			}

			// Atlast return the final xor .

			return xorr;
		}
};
