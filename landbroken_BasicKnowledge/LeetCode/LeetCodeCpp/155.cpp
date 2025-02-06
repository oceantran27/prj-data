#include <bits/stdc++.h>
#include <map>
#include <unordered_map>
#include "stdafx.h"
#include <vector>
#include <stack>
#include <algorithm>
#include <iostream>
#include <set>
#include <string>
using namespace std;

/*
һ֧ pushpoptop ڳʱڼСԪصջ

push(x) -- Ԫ x ջС
pop() -- ɾջԪء
top() -- ȡջԪء
getMin() -- ջеСԪء
ʾ:

MinStack minStack = new MinStack();
minStack.push(-2);
minStack.push(0);
minStack.push(-3);
minStack.getMin();   -->  -3.
minStack.pop();
minStack.top();      -->  0.
minStack.getMin();   -->  -2.
*/
class MinStack {
public:
	std::stack<int> data;
	std::stack<int> minValue;

	/** initialize your data structure here. */
	MinStack() {

	}

	void push(int x) {
		data.push(x);
		/*
		1յģֵΪС
		2ǿգx <= minValue.top()ע=ţΪdataջֵջ
		dataջֵܻ
		*/
		if (minValue.size() <= 0 || x <= minValue.top())
		{
			minValue.push(x);
		}
	}

	void pop() {
		if (minValue.size()>0 && minValue.top() == data.top())
		{
			minValue.pop();
		}
		data.pop();

	}

	int top() {
		return data.top();
	}

	int getMin() {
		return minValue.top();
	}
};
