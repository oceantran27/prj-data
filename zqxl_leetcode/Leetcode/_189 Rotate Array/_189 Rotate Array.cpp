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

/*û˼·ֱӿı˵ķתķ*/
void reverse(int *nums, int s, int e) {
	while (s < e) {
		int t = nums[s];
		nums[s++] = nums[e];
		nums[e--] = t;
	}
}
void rotate(int* nums, int numsSize, int k) {
	k = k % numsSize;
	reverse(nums, 0, numsSize - 1);
	reverse(nums, 0, k - 1);
	reverse(nums, k, numsSize - 1);
}
