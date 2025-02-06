#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class BrowserHistory {
public:
    struct dobuleLinkedList{
        string val;
        dobuleLinkedList* prv;
        dobuleLinkedList* next;
        dobuleLinkedList(string val){
            this->val = val;
            prv = next = nullptr;
        }
    };
    dobuleLinkedList* head;
    BrowserHistory(string homepage) {
        head = new dobuleLinkedList(homepage);
    }
    
    void visit(string url) {
        head->next = new dobuleLinkedList(url);
        head->next->prv = head;
        head = head->next;
    }
    
    string back(int steps) {
        while (steps--){
            if (head->prv)
                head = head->prv;
        }
        return head->val;
    }
    
    string forward(int steps) {
        while (steps--){
            if (head->next)
                head = head->next;
        }
        return head->val;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */