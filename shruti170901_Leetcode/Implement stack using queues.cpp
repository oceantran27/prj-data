#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
https://leetcode.com/problems/implement-stack-using-queues/

*/


class MyStack {
public:
    /** Initialize your data structure here. */
    queue<int> mainQueue, tempQueue;
    MyStack() {
    }
    
    /** Push element x onto stack. */
    void push(int y) {
        while(!mainQueue.empty())
        {
            tempQueue.push(mainQueue.front());
            mainQueue.pop();
        }
        mainQueue.push(y);
        while(!tempQueue.empty())
        {
            mainQueue.push(tempQueue.front());
            tempQueue.pop();
        }
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int val = mainQueue.front();
        mainQueue.pop();
        return val;
    }
    
    /** Get the top element. */
    int top() {
        return mainQueue.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return mainQueue.empty();
    }
};