#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include<assert.h>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
/*
// Definition for a Node.
*/
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;

    Node(int val) : val(val), next(nullptr), prev(nullptr), child(nullptr) {}
    Node(int val, Node* next, Node* prev) : val(val), next(next), prev(prev), child(nullptr) {
        if (prev) prev->next = this;
        if (next) next->prev = this;
    }
    Node(int val, Node* next, Node* prev, Node* child) : val(val), next(next), prev(prev), child(child) {
        if (prev) prev->next = this;
        if (next) next->prev = this;
    }    
};
Node* gengerateNodes(vector<int> nodes) {
    Node* vHead = new Node(0);
    Node* node = vHead;
    
    for (int val : nodes) {
        node = new Node(val, nullptr, node);
    }
    vHead->next->prev = nullptr;
    return vHead->next;
}
vector<int> getNodeVals(Node* node)
{
    if (!node) return {};
    vector<int> res;
    Node* prev = nullptr;
    while (node)
    {
        if (node->prev != prev)
            assert(false); // 生成的链表有问题
        assert(node->child == nullptr);
        res.push_back(node->val);
        prev = node;
        node = node->next;
    }
    return res;
}

class Solution {
public:
    Node* flatten(Node* head) {
        dfs(head);
        return head;
    }
    // 由题意: 需要将h结点往后走的最后一个child指针(下方代码中的childEnd)指向撸直前的next指针指向的结点
    Node* dfs(Node* h)
    {
        if (h == nullptr) return nullptr;
        Node* child = h->child;
        Node* nextP = h->next;
        h->child = nullptr;
        if (child && nextP)
        {
            Node* childEnd = dfs(child);
            Node* nextEnd = dfs(nextP);
            h->next = child;
            child->prev = h;
            childEnd->next = nextP;  /* 核心语句 */
            nextP->prev = childEnd;  // 配套语句
            return nextEnd;
        }
        else if (!child && nextP) /* 特殊情况1: h的child指针为空, 只需dfs处理nextP, 没有child意味着不需要做最后一个child指针与nextP的挂接 */
        {
            Node* nextEnd = dfs(nextP);
            return nextEnd;
        }
        else if (child && !nextP) /* 特殊情况2: h的next指针为空, 只需dfs处理child */
        {
            Node* childEnd = dfs(child);
            h->next = child;
            child->prev = h;
            return childEnd;
        }
        return h;
    }
};

// Test
int main()
{
    Solution sol;
    Node* node;
    Node* resNode;
    vector<int> res;

    /**
     输入：head = [1,2,3,4,5,6,null,null,null,7,8,9,10,null,null,11,12]
     输出：[1,2,3,7,8,11,12,9,10,4,5,6]
     */
    Node* node1 = gengerateNodes({1, 2, 3, 4, 5, 6});
    Node* node7 = gengerateNodes({7, 8, 9, 10});
    Node* node11 = gengerateNodes({11, 12});
    node1->next->next->child = node7;
    node7->next->child = node11;

    node = node1;
    res = {1, 2, 3, 7, 8, 11, 12, 9, 10, 4, 5, 6};
    resNode = sol.flatten(node);
    assert(res == getNodeVals(resNode));

    /**
     输入：head = [1,2,null,3]
     输出：[1,3,2]
     */
    node = new Node(1, new Node(2), nullptr, new Node(3));
    res = {1, 3, 2};
    resNode = sol.flatten(node);
    assert(res == getNodeVals(resNode));

    /**
     输入：head = []
     输出：[]
     */
    node = nullptr;
    res = {};
    resNode = sol.flatten(node);
    assert(res == getNodeVals(resNode));

    cout << "Works as expected." << endl;
    return 0;
}