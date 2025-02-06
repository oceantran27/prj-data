#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
Link to the "Flip String to Monotone Increasing" Problem ==>>  https://leetcode.com/problems/flip-string-to-monotone-increasing/ 
   
Link to the complete Explaination Video ==>> https://youtu.be/l1hif4AqUW8

*/

class Solution {
public:
    int minFlipsMonoIncr(string s) {

        int flips = 0, counter = 0;
        for (auto c : s) {
            if (c == '1') 
                counter++;
            else 
                flips++;
            flips = min(flips, counter);
        }
        return flips;
    }
};