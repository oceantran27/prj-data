#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class CQueue {
	int v;
    stack<int> in;
    stack<int> out;
public:
    CQueue() {}
    
    void appendTail(int value) {
        in.push(value);
    }
    
    int deleteHead() {
        if(in.empty() && out.empty())
        	return -1;
        if(out.empty() && !in.empty())
        {
        	while(!in.empty())
        	{
        		out.push(in.top());
        		in.pop();
        	}
        }
        v = out.top();
    	out.pop();
    	return v;
    }
};