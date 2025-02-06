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
#include<memory.h>
/**
* Return an array of arrays.
* The sizes of the arrays are returned as *columnSizes array.
* Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
*/
int** generate(int numRows, int** columnSizes) {
	int **rs = (int**)malloc(sizeof(int*)*numRows);
	*columnSizes = (int*)malloc(sizeof(int)*numRows);
	for (int i = 0; i < numRows; i++) {
		(*columnSizes)[i] = i + 1;
		rs[i] = (int*)malloc(sizeof(int)*(i + 1));
		// memset(rs[i], 1, sizeof(int)*(i + 1)); ˴memsetʼint飬Ϊúǰֵֽġ
		rs[i][0] = 1;
		rs[i][i] = 1;
		for (int ii = 1; ii < i; ii++) {
			rs[i][ii] = rs[i - 1][ii - 1] + rs[i - 1][ii];
		}
	}
	return rs;
}

int main() {
	int** columnSizes = NULL;
	generate(5, columnSizes);
}