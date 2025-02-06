#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include"stdafx.h"

/*
https://leetcode-cn.com/problems/count-primes/
ͳСڷǸ n 

ʾ:

: 10
: 4
: С 10 һ 4 ,  2, 3, 5, 7 
*/
class Solution {
public:
	int countPrimes(int n) {
		if (n <= 2) return 0;

		int cnt = 0;
		vector<bool> isPrime(n, true);
		//ѭֵһСnĿ
		/*
		i=2
		j=4;p[4]=f;
		j=6;p[6]=f;
		j=9;p[8]=f;
		j=10;
		i=3;
		j=9;p[9]=f;
		*/
		for (int i = 2;i*i<n;i++) {
			/*
			һôⱶ(j+=i)Ǻ

			jĳֵΪ(i-x)*ixΪ0һһѾжϹˣ
			Դ(i-1)*i+i=i*iʼж
			*/
			if (isPrime[i] == true) {
				for (int j = i*i;j<n;j += i) {
					isPrime[j] = false;
				}
			}
		}

		for (size_t i = 2; i < n; i++)
		{
			if (isPrime[i])
			{
				cnt++;
			}
		}

		return cnt;
	}
};