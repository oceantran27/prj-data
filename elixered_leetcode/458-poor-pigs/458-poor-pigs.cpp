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

int poorPigs(int buckets, int poisonTime, int totalTime) {
    return ceil(log(buckets) / log(totalTime / poisonTime + 1));
}
};