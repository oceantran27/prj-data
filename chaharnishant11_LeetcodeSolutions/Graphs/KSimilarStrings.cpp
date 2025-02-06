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
    int kSimilarity(string A, string B) {
        if(A == B) return 0;
        unordered_set<string> visit;
        queue<pair<string, int>> q;
        int n = A.size();
        int step = 0;
        int i = 0;
        for(; i < n; ++i) {
            if(A[i] != B[i]) break;
        }
        q.push({A, i});
        visit.insert(A);
        while(!q.empty()) {
            int size = q.size();
            for(int i = 0; i < size; ++i) {
                string t = move(q.front().first);
                int index = q.front().second;
                q.pop();
                if(t == B) return step;
                while(t[index] == B[index]) ++index;
                for(int j = index +1; j < n; ++j) {
                    if(t[j] == B[index] && t[j] != B[j]) {
                        swap(t[index], t[j]);
                        if(visit.count(t) == 0) {
                            q.push({t, index+1});
                            visit.insert(t);
                        }
                        swap(t[index], t[j]);
                    }
                }
            }
            ++step;
        }
        return step;
    }
};