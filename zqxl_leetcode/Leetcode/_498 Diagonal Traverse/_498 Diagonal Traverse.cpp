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
/**
* Return an array of size *returnSize.
* Note: The returned array must be malloced, assume caller calls free().
*/
int* findDiagonalOrder(int** matrix, int matrixRowSize, int matrixColSize, int* returnSize) {
	int *res = (int *)malloc(sizeof(int) * matrixRowSize * matrixColSize);
	bool dir = 1;
	int m = 0, n = 0;
	*returnSize = 0;
	while (m < matrixRowSize  && n < matrixColSize) {
		printf("m=%d, n=%d\n", m, n);
		res[(*returnSize)++] = *((int*)matrix + m*matrixColSize + n);
		if (dir) {
			if (n == matrixColSize - 1) {
				dir = 0;
				m++;
			}
			else if (m == 0) {
				dir = 0;
				n++;
			}
			else {
				m--;
				n++;
			}
		}
		else {
			if (m == matrixRowSize - 1) {
				dir = 1;
				n++;
			}
			else if (n == 0) {
				dir = 1;
				m++;
			}
			else {
				m++;
				n--;
			}
		}
	}
	return res;
}

int main() {
	int a[3][3] = { {1,2,3},{4,5,6},{ 7,8,9 } };
	int *res;
	int returnSize = 0;
	res = findDiagonalOrder((int**)a, 3, 3, &returnSize);
	return 0;
}