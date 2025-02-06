#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*****************************************
Copyright: Amusi
Author:    Amusi
Date:      2018-07-11


Ŀ
ջݽṹڸʵһܹõջСԪصminڸջУminpushpopʱ临ӶȶO(1)

*****************************************/

// 1ջ͸ջͬ
class Solution {
public:
    // Ŀ: minջ
    // :
    // Զջ
    stack<int> dataStack;    // ջ
    stack<int> helpStack;    // ջ
    
    // ѹԪ O(1)
    void push(int value) {
        dataStack.push(value);
        if (helpStack.empty()){
            helpStack.push(value);
        }else{
            if(value < helpStack.top()){
                helpStack.push(value);
            }else{
                helpStack.push(helpStack.top());
            }
        }
    }
    
    // Ԫ O(1)
    void pop() {
        if(dataStack.empty() ||  helpStack.empty())
            return;
        dataStack.pop();
        helpStack.pop();
    }
    // ջԪ O(1)
    int top() {
        return dataStack.top();
    }
    
    // ջСԪ O(1)
    int min() {
        return helpStack.top();
    }
     
};


// 2 ջڸջ
class Solution {
public:
     
    stack<int> stack1,stack2;
     
    void push(int value) {
        stack1.push(value);
        if(stack2.empty())
            stack2.push(value);
        else if(value<=stack2.top())
        {
            stack2.push(value);
        }
    }
     
    void pop() {
      	// жջԪǷ
        if(stack1.top()==stack2.top())
            stack2.pop();
        stack1.pop();
         
    }
     
    int top() {
        return stack1.top();       
    }
     
    int min() {
        return stack2.top();
    }
     
};