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
    int breakfastNumber(vector<int>& staple, vector<int>& drinks, int x) {
        sort(staple.begin(), staple.end());
        sort(drinks.begin(), drinks.end());

        int i = 0;
        int j = drinks.size() - 1;
        long ans = 0;

        while(i < staple.size() && j >= 0) {
            int sum = staple[i] + drinks[j];
            if (sum <= x) {
                i++;
                ans += j+1;
                ans %= 1000000007;
            } else {
                j--;
            }
        }

        return ans % 1000000007;        
    }
};