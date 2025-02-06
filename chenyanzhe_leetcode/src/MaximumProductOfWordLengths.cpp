#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include "MaximumProductOfWordLengths.hpp"

using namespace std;

int MaximumProductOfWordLengths::maxProduct(vector<string> &words) {
    if (words.empty() || words.size() == 1)
        return 0;

    vector<int> masks(words.size(), 0);

    for (int i = 0; i < words.size(); i++) {
        for (auto &c : words[i])
            masks[i] |= 1 << (c - 'a');
    }

    int ret = 0;

    for (int i = 0; i < words.size(); i++) {
        for (int j = i + 1; j < words.size(); j++) {
            if (!(masks[i] & masks[j]) && words[i].size() * words[j].size() > ret)
                ret = words[i].size() * words[j].size();
        }
    }

    return ret;
}
