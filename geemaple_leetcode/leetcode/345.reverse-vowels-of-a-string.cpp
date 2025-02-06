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
    string reverseVowels(string s) {
        
        int start = 0;
        int end = s.size() - 1;
        unordered_set<char> vowels({'a', 'e', 'i', 'o', 'u'});

        while(start < end)
        {
            while(start < end && vowels.count(tolower(s[start])) == 0)
            {
                start++;
            }

            while(start < end && vowels.count(tolower(s[end])) == 0)
            {
                end--;
            }

            if (start < end){
                char tmp = s[start];
                s[start] = s[end];
                s[end] = tmp;
            }

            start++;
            end--;
        }

        return s;
    }
};
