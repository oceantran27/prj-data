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
int titleToNumber(char* s) {
	int sl = strlen(s), rs=0;
	for (int i = 0; i < sl; i++) {
		rs += pow(26, sl - i-1)*(int)(s[i] - 'A' + 1);
	}
	return rs;
}
