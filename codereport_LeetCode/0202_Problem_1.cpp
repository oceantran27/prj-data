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
// Problem Link (Contest):  https://leetcode.com/contest/weekly-contest-202/problems/three-consecutive-odds/
// Problem Link (Practice): https://leetcode.com/problems/three-consecutive-odds/

// Note this problem is very similar to MCO (Max Consecutive Ones)

// Godbolt link: https://godbolt.org/z/fc5qqGqze

auto three_consecutive_odds(auto const& arr) -> bool {
    auto const max_odds = arr
        | rv::chunk_by([](auto a, auto b) { return a % 2 == b % 2; })
        | rv::filter([](auto rng) { return rng[0] % 2 == 1; })
        | rv::transform(ranges::distance)
        | r_::maximum();
    return max_odds >= 3;
}
