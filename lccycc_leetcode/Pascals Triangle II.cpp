#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/* the rowIndex start at 0 */
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> a;
        for (int i = 0; i<=rowIndex; i++){
            for (int j = a.size()-1; j>0; j--) a[j] += a[j-1];
            a.push_back(1);
        }
        return a;
    }
};
