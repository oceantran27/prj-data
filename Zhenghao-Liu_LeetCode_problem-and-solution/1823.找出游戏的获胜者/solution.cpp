#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findTheWinner(int n, int k) {
        list<int> lst;
        for (int i=0;i<n;i++) {
            lst.push_back(i+1);
        }
        auto p=lst.begin();
        int cnt=k;
        while (lst.size()>1) {
            cnt=k;
            while (cnt>1) {
                p++;
                if (p==lst.end()) {
                    p=lst.begin();
                }
                cnt--;
            }
            p=lst.erase(p);
            if (p==lst.end()) {
                p=lst.begin();
            }
        }
        return *lst.begin();
    }
};