#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(n)
// Space: O(1)

// linked list
class Solution {
public:
    vector<int> toArray(Node *head){
        vector<int> result;
        for (; head; head = head->next) {
            result.emplace_back(head->val);
        }
        return result;
    }
};
