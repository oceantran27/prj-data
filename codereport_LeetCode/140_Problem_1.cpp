#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// code_report Solution
// Video Link: https://youtu.be/cClOEG-_dns
// Problem Link: https://leetcode.com/problems/occurrences-after-bigram/
// Wandbox Link: https://wandbox.org/permlink/AEhEejSPeDer55A5

// C++20 Ranges / Ranges-v3

namespace rv = ranges::view;
namespace ra = ranges::action;

auto findOcurrences(string s, string a, string b) -> vector<string> {
    auto t = s | rv::split(' ') 
               | ranges::to<vector<string>>;
    return t | rv::sliding(3)
             | rv::filter([a, b] (auto rng) {
                  return a == *ranges::cbegin(rng) && 
                         b == *next(ranges::cbegin(rng)); })
             | rv::transform([](auto rng) {
                  return *ranges::crbegin(rng); })
             | ranges::to<vector<string>>;
}
