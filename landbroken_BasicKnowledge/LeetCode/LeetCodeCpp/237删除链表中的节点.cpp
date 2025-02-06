#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include"stdafx.h"

/*
https://leetcode-cn.com/problems/delete-node-in-a-linked-list/submissions/

дһʹɾĳиģĩβڵ㣬㽫ֻҪɾĽڵ㡣

һ -- head = [4,5,1,9]ԱʾΪ:





ʾ 1:

: head = [4,5,1,9], node = 5
: [4,1,9]
: ֵΪ 5 ĵڶڵ㣬ôڵĺ֮󣬸ӦΪ 4 -> 1 -> 9.
ʾ 2:

: head = [4,5,1,9], node = 1
: [4,5,9]
: ֵΪ 1 ĵڵ㣬ôڵĺ֮󣬸ӦΪ 4 -> 5 -> 9.


˵:

ٰڵ㡣
нڵֵΨһġ
ĽڵΪĩβڵ㲢һеһЧڵ㡣
Ҫĺзκν
*/

class Solution {
public:
	void deleteNode(ListNode* node) {
		node->val = node->next->val;
		node->next = node->next->next;
	}
};