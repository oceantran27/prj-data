#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class TrieNode {
public:
    TrieNode() {
        memset(next, NULL, sizeof(next));
        isEnd = false;
    }
    ~TrieNode() {
        for (TrieNode* p : next) {
            if (p) {
                delete p;
            }
        }
    }
    TrieNode* next[26];
    bool isEnd;
};

class Trie {
public:
    /** Initialize your data structure here. */
    Trie() {
        root = new TrieNode();
    }

    ~Trie() {
        delete root;
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        TrieNode* node = root;
        for (char c : word) {
            int i = c - 'a';
            if (node->next[i] == nullptr) {
                node->next[i] = new TrieNode();
            }
            node = node->next[i];
        }
        
        node->isEnd = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        TrieNode* node = root;
        for (char c : word) {
            int i = c - 'a';
            if (node->next[i] == nullptr) {
                return false;
            }
            node = node->next[i];
        }
        
        return node->isEnd;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        TrieNode* node = root;
        for (char c : prefix) {
            int i = c - 'a';
            if (node->next[i] == nullptr) {
                return false;
            }
            node = node->next[i];
        }
        
        return true;
    }
    
private:
    TrieNode* root;
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie obj = new Trie();
 * obj.insert(word);
 * bool param_2 = obj.search(word);
 * bool param_3 = obj.startsWith(prefix);
 */
 