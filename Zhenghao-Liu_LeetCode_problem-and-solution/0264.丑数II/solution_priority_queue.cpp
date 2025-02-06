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
    int nthUglyNumber(int n) {
        priority_queue <double,vector<double>,greater<double> > q;
        double answer=1;
        for (int i=1;i<n;++i)
        {
            q.push(answer*2);
            q.push(answer*3);
            q.push(answer*5);
            answer=q.top();
            q.pop();
            while (!q.empty() && answer==q.top())
                q.pop();
        }
        return answer;
    }
};
