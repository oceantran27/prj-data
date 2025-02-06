#include <bits/stdc++.h>
#include <map>
#include <set>
#include <unordered_map>
#include "stdafx.h"
#include <vector>
#include <stack>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	int findComplement(int num) {
		int result = num, mask = 1;
		while (result != 1)
		{
			result = result >> 1;
			mask = (mask << 1) + 1; //λȫΪһ
		}
		return  num^mask; //ֻ򣬲ͬΪ1ͬΪ0൱ȡ
	}
};