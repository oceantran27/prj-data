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
  int uniqueMorseRepresentations(vector<string> &words) {
    string mapping[26] = {".-",   "-...", "-.-.", "-..",  ".",    "..-.", "--.",
                          "....", "..",   ".---", "-.-",  ".-..", "--",   "-.",
                          "---",  ".--.", "--.-", ".-.",  "...",  "-",    "..-",
                          "...-", ".--",  "-..-", "-.--", "--.."};

    unordered_map<string, bool> morse;

    for (auto const &word : words) {
      string temp = "";
      for (auto const &c : word) {
        temp += mapping[c - 'a'];
      }
      morse[temp] = true;
    }

    return morse.size();
  }
};
