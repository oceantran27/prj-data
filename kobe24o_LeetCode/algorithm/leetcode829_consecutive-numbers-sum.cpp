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
    int consecutiveNumbersSum(int N) {
        //a0 = (2*N-n*(n-1))/(2*n) , n为长度
        int M = ceil(sqrt(2*N)), count = 0, up;
    	for(int n = 1; n <= M; ++n)
    	{
    		up = (N<<1)-n*(n-1);
    		if(up > 0 && (up%(n<<1) == 0))
    			++count;
    	}
    	return count;
    }
};