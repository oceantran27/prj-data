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
Link to the " Design HashSet " Problem ==>> https://leetcode.com/problems/design-hashset/ 
   
Link to the complete Explaination Video ==>> https://youtu.be/5_GPb-91fIs

*/


class MyHashSet {
public:
    int arr[10000001];
    
    MyHashSet() {
        memset(arr,-1,sizeof(arr));
    }
    
    void add(int key) {
        arr[key]=1;
    }
    
    void remove(int key) {
        arr[key]=-1;
    }
    
    bool contains(int key) {
        return arr[key]==1;
    }
};
