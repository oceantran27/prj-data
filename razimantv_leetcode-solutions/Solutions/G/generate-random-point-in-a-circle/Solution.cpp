#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/generate-random-point-in-a-circle

class Solution {
 public:
  double radius, xc, yc;
  std::mt19937_64 gen;
  std::uniform_real_distribution<double> rand;
  Solution(double radius, double x_center, double y_center)
      : radius(radius), xc(x_center), yc(y_center) {
    std::random_device rd;
    gen.seed(rd());
  }

  vector<double> randPoint() {
    double r = radius * sqrt(rand(gen)), phi = rand(gen) * 2 * acos(-1);
    return {xc + r * cos(phi), yc + r * sin(phi)};
  }
};
