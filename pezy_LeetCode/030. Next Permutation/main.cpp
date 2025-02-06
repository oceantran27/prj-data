#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include "solution.h"
#include <iostream>

using namespace std;

int main()
{
    vector<int> v = {1,5,1};
    Solution s;
    s.nextPermutation(v);
    for (auto i : v)
        cout << i << " ";
    cout << endl;
    return 0;
}

