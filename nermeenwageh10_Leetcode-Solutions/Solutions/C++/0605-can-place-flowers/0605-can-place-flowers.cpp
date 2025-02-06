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
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for (int i = 0; i < flowerbed.size(); i++){
            if (flowerbed[i]) continue;
            if (i && flowerbed[i-1]) continue;
            if (i+1 < flowerbed.size() && flowerbed[i+1]) continue;
            n--;
            flowerbed[i] = 1;
        }
        return n <= 0;
    }
};