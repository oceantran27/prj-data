#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iomanip>
#include <iostream>
using namespace std;


int main(void) {
	const int N = 12;
	double sum = 0.0;

	for(int i = 0; i < N; i++) {
		double num = 0.0;
		cin >> num;
		sum += num;
	}

	double avg = sum / N;
	cout << fixed << setprecision(2) << '$' << avg << endl;

	return 0;
}

// 注意数据类型！