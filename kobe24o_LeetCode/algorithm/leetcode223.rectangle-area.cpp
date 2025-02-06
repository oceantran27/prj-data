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
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
    	int x1 = max(A,E);
    	int x2 = min(C,G);
    	int y1 = max(B,F);
    	int y2 = min(D,H);
    	if(!(x1 <= x2 && y1 <= y2))//不相交
    		return long(C-A)*(D-B)+long(G-E)*(H-F);
    	return long(C-A)*(D-B)+long(G-E)*(H-F)-long(x2-x1)*(y2-y1);
    }
};