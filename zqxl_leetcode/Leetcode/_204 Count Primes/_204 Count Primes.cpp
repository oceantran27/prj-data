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
#include<malloc.h>
#include<string>
#include<math.h>

bool isPrime(int x, int* ra, int rs) {
	for (int i = 0; ra[i] * ra[i] <= x; i++) {
		if (x%ra[i] == 0)
			return false;
	}
	return true;
}
int countPrimes1(int n) {
	if (n < 3) return 0;

	int *ra = (int*)malloc(sizeof(int)*n);
	int rs = 1;
	ra[0] = 2;
	for (int i = 3; i < n; i=i+2) {
		if (isPrime(i, ra, rs))
			ra[rs++] = i;
	}
	return rs;
}
/*
ŷ
https://blog.csdn.net/u012102306/article/details/71407105
*/
// ִʱΪ 8 ms ķ
int countPrimes(int n) {
	if (n <= 2) return 0;
	int i, count = 1, j;
	bool *nums = (bool*)malloc(sizeof(bool)*n);
	//Ĭ϶Ϊ
	for (int i = 3; i<n; i += 2) {
		nums[i] = false;
	}
	// ÿСڸnÿеΪ
	for (i = 3; i*i <= n; i += 2)
		if (!nums[i])
			for (j = i*i; j<n; j += i)
				nums[j] = true;
	// ͳ
	for (i = 3; i<n; i += 2)
		if (!nums[i]) count++;

	return count;
}

int main() {
	countPrimes(10);
	return 0;
}



