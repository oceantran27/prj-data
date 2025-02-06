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
    class TrieNode
    {
        public:
        TrieNode* next[26];
    };
public:
    int countDistinct(string s) 
    {
        TrieNode* root = new TrieNode();
        int count = 0;
        for (int i=0; i<s.size(); i++)
        {
            TrieNode* node = root;
            for (int j=i; j<s.size(); j++)
            {
                if (node->next[s[j]-'a']==NULL)
                {
                    node->next[s[j]-'a'] = new TrieNode();
                    count ++;
                }
                node = node->next[s[j]-'a'];
            }            
        }
        return count;        
    }
};
