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
    Solution s;
    vector<string> ips = s.restoreIpAddresses("25525511135");
    for (const auto &ip : ips)
        cout << ip << endl;
}
