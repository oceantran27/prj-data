#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Trie {
private:
    bool is_leaf=false;
    //ʼֻȫΪ0д
    Trie* arc[26]={NULL};
public:
    /** Initialize your data structure here. */
    Trie() {
        
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        Trie* p=this;
        for (char &i:word)
        {
            if (p->arc[i-'a']==NULL)
                p->arc[i-'a']=new Trie;
            p=p->arc[i-'a'];
        }
        p->is_leaf=true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        Trie* p=this;
        for (char &i:word)
            if (p->arc[i-'a']==NULL)
                return false;
            else
                p=p->arc[i-'a'];
        return p->is_leaf;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        Trie* p=this;
        for (char &i:prefix)
            if (p->arc[i-'a']==NULL)
                return false;
            else
                p=p->arc[i-'a'];
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */