#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// code_report Solution
// https://www.youtube.com/watch?v=tuMWyDsIpEQ

int kthGrammar (int N, int K) {

	long s = pow (2, N - 1), flips = 0;

	while (s > 2) {
		if (K > s / 2) { 
			K -= s / 2; 
			flips++; 
		}
		s /= 2;
	}

	K--;

	if (flips % 2 == 1) K = K == 1 ? 0 : 1;

	return K;
}
