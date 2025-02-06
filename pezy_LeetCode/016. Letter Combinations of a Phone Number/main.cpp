#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "solution.h"
#include <iostream>

int main()
{
    Solution s;
    for (const auto &str : s.letterCombinations("23")) {
        std::cout << str << std::endl;
    }
}
