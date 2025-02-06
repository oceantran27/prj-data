#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(n)
// Space: O(n)

class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        deque<int> d;
        sort(deck.begin(), deck.end(), greater<int>());
        for (const auto& i : deck) {
            if (d.empty() == false) {
                d.emplace_front(d.back());
                d.pop_back();
            }
            d.emplace_front(i);
        }
        return vector<int>(d.cbegin(), d.cend());
    }
};
