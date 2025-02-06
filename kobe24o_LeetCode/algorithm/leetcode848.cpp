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
    string shiftingLetters(string S, vector<int>& shifts) {
    	int i, n = S.size();
    	for(i = n-2; i >= 0; i--) 
    	//前面的需要移动多次，逆序前缀和
    	{
    		shifts[i] = (shifts[i] + shifts[i+1])%26;//避免溢出
    	}
    	for(i = 0; i < n; i++)
    	{
    		S[i] = (S[i]-'a'+(shifts[i]%26))%26 + 'a';
    	}
    	return S;
    }
};