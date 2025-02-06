#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include<stdio.h>

int mySqrt1(int x) {
	int s = 0, e = x/2 > 46341?46341:x;
	int m = 0;
	if (x == 0) return 0;
	if (x < 4) return 1;
	if (x == 4) return 2;
	while (1){
		m = (s + e) / 2;
		if ( m == s) 
			return s;
		
		if (x > m*m){
			s = m;
		}
		else if(x < m*m){
			e = m;
		}
		else{
			return m;
		}
	}
}

// 16ms 
int mySqrt2(int x) {

	if (x <= 1) {
		return x;
	}
	int start = 0;
	int end = x / 2 + 1;
	while (start <= end) {
		long long mid = (start + end) / 2;
		long long sq = mid * mid;
		if (sq == x) {
			return mid;
		}
		if (sq > x) {
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}

	}
	return end;

}

//20ms
int mySqrt(int x) {
	long res = x;
	while (res * res > x) {
		// Ϊʲôʽ
		res = (res + x / res) / 2;
	}
	return res;
}

int main(){
	int r;
	r = mySqrt(5);
	return 0;
}