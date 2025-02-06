#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

static int x = []() {std::ios::sync_with_stdio(false); cin.tie(0); return 0; }();
class MinStack 
{
public:
    void push(int x) 
    {
	    s1.push(x);
	    if (s2.empty() || x <= getMin())  s2.push(x);	    
    }
    void pop() 
    {
	    if (s1.top() == getMin())  s2.pop();
	    s1.pop();
    }
    int top() 
    {
	    return s1.top();
    }
    int getMin() 
    {
	    return s2.top();
    }
private:
    stack<int> s1;
    stack<int> s2;
};