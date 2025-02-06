#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include <cstdio>
int main() {
	int N, sum = 0, temp;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &temp);
		sum += temp * 10 * (N - 1) + temp * (N - 1);
	}
	printf("%d", sum);
	return 0;
}