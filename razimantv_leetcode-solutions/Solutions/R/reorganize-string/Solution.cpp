#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/reorganize-string/

class Solution {
 public:
  // ChatGPT solution
  string reorganizeString(string s) {
    unordered_map<char, int> charFreq;
    for (char c : s) {
      charFreq[c]++;
    }

    priority_queue<pair<int, char>> maxHeap;
    for (auto it = charFreq.begin(); it != charFreq.end(); ++it) {
      maxHeap.push({it->second, it->first});
    }

    string result = "";
    pair<int, char> prev = {-1, '#'};

    while (!maxHeap.empty()) {
      pair<int, char> current = maxHeap.top();
      maxHeap.pop();

      result += current.second;
      if (prev.first > 0) {
        maxHeap.push(prev);
      }

      current.first--;
      prev = current;
    }

    if (result.size() != s.size()) {
      return "";
    }
    return result;
  }
};
