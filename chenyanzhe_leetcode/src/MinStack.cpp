#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "MinStack.hpp"

void MinStack::push(int x) {
    wholeStack.push(x);

    if (minStack.empty() || minStack.top() >= x)
        minStack.push(x);
}

void MinStack::pop() {
    if (minStack.top() == wholeStack.top())
        minStack.pop();

    wholeStack.pop();
}

int MinStack::top() {
    return wholeStack.top();
}

int MinStack::getMin() {
    return minStack.top();
}
