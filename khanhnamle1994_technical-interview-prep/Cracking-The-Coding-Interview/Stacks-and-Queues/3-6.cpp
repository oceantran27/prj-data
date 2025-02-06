#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
// Write a program to sort a stack in ascending order. The following are only functions that should be used to write this program:
// push | pop | peek | isEmpty

#include<iostream>
#include<stack>
using namespace std;

void sortStack(stack<int> *st){
    stack<int> sorted; //top contains smallest element
    while(!(*st).empty()){
        int tmp = (*st).top();
        (*st).pop();
        while(!sorted.empty() && tmp>sorted.top()){
            (*st).push(sorted.top());
            sorted.pop();
        }
        sorted.push(tmp);
    }
    while(!sorted.empty()){
        (*st).push(sorted.top());
        sorted.pop();
    }
}

int main(){
    stack<int> my;
    int arr[] = {6, 4, 8, 9, 10, 99, 7, 1, 0};
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        my.push(arr[i]);
    }
    sortStack(&my);
    while(!my.empty()){
        cout<<my.top()<<'\n';
        my.pop();
    }
}
