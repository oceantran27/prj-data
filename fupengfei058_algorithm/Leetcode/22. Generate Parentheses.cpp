#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*Generate Parentheses:Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.*/
//一开始left = n，right = 0；当left还剩余左括号数大于0的时候，添加左括号，并将left – 1，right + 1；
//当right目前还需要的右括号数大于0的时候，添加右括号，并将right – 1；
//当left和right都等于0的时候，表示当前是一个符合格式条件的字符串，将该字符串cur放入result数组中，最后返回result。
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        dfs("", n, 0);
        return result;
    }
private:
    vector<string> result;
    void dfs(string cur, int left, int right) {
        if (left == 0 && right == 0) {
            result.push_back(cur);
            return;
        }
        if (left > 0) dfs(cur + "(", left - 1, right + 1);
        if (right > 0) dfs(cur + ")", left, right - 1);
    }
};