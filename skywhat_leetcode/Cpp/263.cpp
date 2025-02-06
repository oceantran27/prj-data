#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include<iostream>
#include<vector>

using namespace std;

class Solution{
public:
	bool isUgly(int num){
		if(!num)
			return 0;
		vector<int> primeNum={2,3,5};
		for(auto p:primeNum){
			while(num%p==0){
				num/=p;
			}
		}
		return num==1; 
	}
};

int main(){
	Solution s;
	int num=14;
	cout<<s.isUgly(num)<<endl;

	return 0;
}
