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
// https://youtu.be/FgzZ4ShshPs

vector<int> sortArrayByParity (vector<int>& A) {
   auto is_even = [](auto e) { return e % 2 == 0; };
   partition (A.begin (), A.end (), is_even);
   return A;
}
