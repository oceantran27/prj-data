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
  int wordsTyping(vector<string> &_sentence, int rows, int cols) {

    string sentence;
    for (auto &w : _sentence)
      sentence += w + " ";

    int n = sentence.size();

    int prev = 0;
    vector<int> wordBeginning(n);

    int start = 0;

    for (int i = 0; i < n; i++) {
      if (sentence[i] == ' ')
        prev = i + 1;
      wordBeginning[i] = prev - i;
    }

    while (rows--) {
      start += cols;
      start += wordBeginning[start % n];
    }

    return start / n;
  }
};
