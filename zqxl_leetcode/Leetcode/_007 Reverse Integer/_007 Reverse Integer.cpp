#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include <stdio.h>
int reverse1(int x) {
	int nums[10] = { 0 }, i = 0;
	long result = 0;
	// ɵ͵ߴ
	for (i = 0; i < 10; i++){
		nums[i] = x % 10;
		x = x / 10;
		if (x == 0)
			break;
	}
	// 
	for (int j=0; j<i+1; j++){
		result = result * 10 + nums[j];
		if (result > 2147483647 || result < -2147483647)
			return 0;
	}
	
	return (int)result;
}

int reverse(int x) {
	int temp =0, i = 0;
	long result = 0;
	// ɵ͵ɨ
	for (i = 0; i < 10; i++){
		temp = x % 10;
		result = result * 10 + temp;
		if (result > 2147483647 || result < -2147483647)
			return 0;
		x = x / 10;
		if (x == 0)
			break;
	}
	
	return (int)result;
}

int main(){
	int result;
	result = reverse(-12354);
	return result;
}