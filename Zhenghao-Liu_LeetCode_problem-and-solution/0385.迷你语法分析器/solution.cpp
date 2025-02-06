#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Constructor initializes an empty nested list.
 *     NestedInteger();
 *
 *     // Constructor initializes a single integer.
 *     NestedInteger(int value);
 *
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Set this NestedInteger to hold a single integer.
 *     void setInteger(int value);
 *
 *     // Set this NestedInteger to hold a nested list and adds a nested integer to it.
 *     void add(const NestedInteger &ni);
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */
class Solution {
public:
    NestedInteger deserialize(string s) {
        stack<NestedInteger*> helper;
        string num;
        for (char &i:s)
        {
            if (i=='-' || (i>='0' && i<='9'))
                num+=i;
            else if (i=='[')
            {
                NestedInteger *p=new NestedInteger();
                helper.push(p);
            }
            else if (i==',')
            {
                if (!num.empty())
                    helper.top()->add(NestedInteger(stoi(num)));
                num.clear();
            }
            else if (i==']')
            {
                if (!num.empty())
                    helper.top()->add(NestedInteger(stoi(num)));
                num.clear();
                NestedInteger * p=helper.top();
                helper.pop();
                if (helper.empty())
                    return *p;
                helper.top()->add(*p);
            }
        }
        return NestedInteger(stoi(num));
    }
};
