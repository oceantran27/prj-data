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
//
int searchInsert1(int* nums, int numsSize, int target) {
	int i;
	for (i = 0; i<numsSize; i++){
		if (nums[i] >= target){
			return i;
		}
	}
	return i;
}

//ֲ
int searchInsert(int* nums, int numsSize, int target) {
	int s=0, e=numsSize;
	while (s != e){
		if (nums[(s + e) / 2] == target){
			return (s + e) / 2;
		}
		else if (nums[(s + e) / 2] > target){
			e = (s + e) / 2;
		}
		else{
			if (s == (s + e) / 2)
				return s+1;
			else
				s = (s + e) / 2;
		}
	}
	return s;
}

int main(){
	int a[] = { 1, 3, 5, 6 }, r=0;
	r = searchInsert(a, 4, 2);
	return 0;
}