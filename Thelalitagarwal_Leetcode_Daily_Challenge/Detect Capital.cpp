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
Link to the "Detect Capital" Problem ==>>  https://leetcode.com/problems/detect-capital/description/ 
   
Link to the complete Explaination Video ==>> https://youtu.be/9zh4g6-CtUQ 

*/

class Solution {
public:
    bool detectCapitalUse(string word) {

    for(int i = 1; i < word.size(); i++){
        if((isupper(word[1]) != isupper(word[i])) || (islower(word[0]) && isupper(word[i]))) 
            return false;
    }        
    return true;
}
};