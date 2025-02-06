#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

mt19937 gen{random_device{}()};
int left = 1, right = 100;
int r = uniform_int_distribution<int>{left, right}(gen);
