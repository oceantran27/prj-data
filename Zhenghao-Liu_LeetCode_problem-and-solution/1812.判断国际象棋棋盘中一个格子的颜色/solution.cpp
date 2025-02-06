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
    bool squareIsWhite(string coordinates) {
        int x=coordinates.at(0)-'a';
        int y=coordinates.at(1)-'1';
        return (x%2)!=(y%2);
    }
};