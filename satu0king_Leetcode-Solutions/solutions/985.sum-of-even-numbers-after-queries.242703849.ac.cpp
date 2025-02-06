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
  vector<int> sumEvenAfterQueries(vector<int> &A,
                                  vector<vector<int>> &queries) {

    int sum = 0;
    for (auto n : A)
      if (n % 2 == 0)
        sum += n;

    vector<int> ans;

    for (auto query : queries) {
      if (A[query[1]] % 2 == 0)
        sum -= A[query[1]];

      A[query[1]] += query[0];

      if (A[query[1]] % 2 == 0)
        sum += A[query[1]];
      ans.push_back(sum);
    }

    return ans;
  }
};
