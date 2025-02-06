#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "NimGame.hpp"

bool NimGame::canWinNim(int n) {
    return n % 4;
}