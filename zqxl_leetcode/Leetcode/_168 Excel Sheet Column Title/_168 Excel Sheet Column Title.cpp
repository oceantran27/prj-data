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

char* convertToTitle(int n) {
	char stack[4096];
	int ss = 0;
	int n_res = 0;
	//n--;
	while (n>26){
		// ȡ
		n_res = n % 26;
		if (n_res) {
			// λĸջ
			stack[ss++] = (char)('A' + n_res-1);
			// ȡ
			n = n / 26;
		}
		else {
			// λĸջ
			stack[ss++] = 'Z';
			// ȡ
			n = (n / 26)-1;
		}
			
	}
	stack[ss++] = (char)('A' + n-1);

	char *re = (char*)malloc(sizeof(char) * (ss+1));
	int i = 0;
	// ջ
	for (i = 0; --ss+1;i++) {
		re[i] = stack[ss];
	}
	re[i] = '\0';
	return re;
}

int main() {
	convertToTitle(27);
	return 0;
}
