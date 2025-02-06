#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/design-a-food-rating-system

class FoodRatings {
 public:
  unordered_map<string, pair<int, string>> ftocr;
  unordered_map<string, set<pair<int, string>>> wut;

  FoodRatings(vector<string>& foods, vector<string>& cuisine,
              vector<int>& ratings) {
    for (int i = 0, n = foods.size(); i < n; ++i) {
      ftocr[foods[i]] = {-ratings[i], cuisine[i]};
      wut[cuisine[i]].insert({-ratings[i], foods[i]});
    }
  }

  void changeRating(string f, int nr) {
    auto& [r, c] = ftocr[f];
    wut[c].erase({r, f});
    r = -nr;
    wut[c].insert({r, f});
  }

  string highestRated(string cuisine) { return wut[cuisine].begin()->second; }
};

