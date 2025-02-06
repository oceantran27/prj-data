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
    char findTheDifference(string s, string t) {
        int arr[26]={0};
        for(int i=0; i<s.size()&&i<t.size(); i++)
        {
            arr[s[i]-'a']++;
            arr[t[i]-'a']--;
        }
        arr[t[t.size()-1]-'a']--;
        for(int i=0; i<26; i++)
        {
            if(arr[i]!=0)
                return i+'a';
        }
        return ' ';
    }
};
