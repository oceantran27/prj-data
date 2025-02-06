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
Date:      2018-06-17

Ŀ
ջʵһУɶеPushPop еԪΪint͡


*****************************************/

class Solution
{
/* ˼·
<>ջʵνջջʵһС
1,2,3,4,5AջʱtopΪ5ջBջΪ54321ʱtopΪ1ʱBջ൱һС
ӣԪؽջA
ӣжջBǷΪգΪգջAԪpoppushջBջBջ
 ΪգջBֱӳջ
*/
public:
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        if(stack2.empty()){
            // stack1еԪpoppushstack2
            while(!stack1.empty()){
                temp = stack1.top();
                stack2.push(temp);
                stack1.pop();
            }
        }
        // ȡջ2ĶͷԪ
        temp = stack2.top();
        stack2.pop();
        return temp;;
    }

private:
    // ʹC++ STL: stack
    int temp;
    stack<int> stack1;    // Ԫ
    stack<int> stack2;    // 
};