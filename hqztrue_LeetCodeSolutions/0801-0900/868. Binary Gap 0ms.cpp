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
	int binaryGap(int x){
		x>>=__builtin_ctz(x);
		if (x==1)return 0;
		int y=x,s=0; y|=y>>1; y|=y>>2; y|=y>>4; y|=y>>8; y|=y>>16;
		if (x==y)return 1;
		if ((x|x>>1)!=y)x|=x>>1,s+=1;else goto l1;
		if ((x|x>>2)!=y)x|=x>>2,s+=2;else goto l2;
		if ((x|x>>4)!=y)x|=x>>4,s+=4;else goto l3;
		if ((x|x>>8)!=y)x|=x>>8,s+=8;else goto l4;
		if ((x|x>>8)!=y)x|=x>>8,s+=8;
		l4:if ((x|x>>4)!=y)x|=x>>4,s+=4;
		l3:if ((x|x>>2)!=y)x|=x>>2,s+=2;
		l2:if ((x|x>>1)!=y)x|=x>>1,s+=1;
		l1:return s+2;
	}
};

