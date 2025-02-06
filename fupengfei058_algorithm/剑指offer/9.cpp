#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。求该青蛙跳上一个n级的台阶总共有多少种跳法.*/
class Solution {
public:
    int jumpFloorII(int number) {
		if(number < 1){
			return -1;
		}
		if(number == 1 || number == 2){
			return number;
		}
		return 2 * jumpFloorII(number - 1);
    }
};