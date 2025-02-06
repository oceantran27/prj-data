#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

typedef long long ll;
class Solution {
public:
    int chalkReplacer(vector<int>& chalk, ll k) {
        ll sum=0;
        for (int i:chalk) {
            sum+=i;
        }
        k-=k/sum*sum;
        int sz=chalk.size();
        for (int i=0;i<sz;i++) {
            if (chalk.at(i)>k) {
                return i;
            }
            k-=chalk.at(i);
        }
        return -1;
    }
};