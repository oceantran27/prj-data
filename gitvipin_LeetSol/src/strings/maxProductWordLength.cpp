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
Solution for : https://leetcode.com/problems/maximum-product-of-word-lengths/
*/


/*
NOTE : A very interesting problem. Covers multiple aspects of knowledge of data structures
algorithms and problem solving. 
*/

/*
Solution I : *** NOT EFFIECIENT ***
Builds set of characters for every string and then literally performs set intersection between two strings characters
and performs the calculation if it is required. 

ADVANTAGE : Can handle all kind of strings, any character set. Solution *should* work without any modification.
*/

int maxProduct_slow(vector<string>& words) {
        size_t sz = words.size();
        
        if (!sz)
            return 0;
        
        std::map<int , std::set<char> > db;
        
        // Build the database of set of characters in every string
        for (int i = 0; i < sz; i++) {
            const char *str = words[i].c_str();
            while (char ch = *str++)
                db[i].insert(ch);
        }
        
        int prod = 0;
        for (int i = 0; i < sz; i++) {
            for (int j = i; j <sz; j++) {
                if (i ==j)
                    continue;
                set<int> intersect;
                set_intersection(db[i].begin(),db[i].end(),
                                 db[j].begin(),db[j].end(),
                                 std::inserter(intersect,intersect.begin()));
                if (intersect.empty()) {
                    int newProd = words[i].length() * words[j].length();
                    prod = std::max(prod, newProd);
                }
            }
        }
        
        return prod;
    }
    
    
/*
Solution 2 : Improvization over Solution 1 for Leetcode
a) Since characters have been told to be in range from 'a' - 'z', use BitVector instead of set
b) Sort the vector of strings based on length(s). It significantly helps in reducing O(n*n) loop in certain cases.
*/

struct compare {
bool operator()(const std::string & first, const std::string & second) {
    return first.length() < second.length();
}
};

int maxProduct(vector<string>& words) {
        size_t sz = words.size();
        
        if (!sz)
            return 0;
        
        compare comp;
        std::sort(words.begin(), words.end(), comp);
        
        std::map<int , std::pair<size_t,  long int > > db;
        
        // Build the database of set of characters in every string
        for (int i = 0; i < sz; i++) {
            long int bitVec = 0;
            size_t length = 0;
            
            const char *str = words[i].c_str();
            while (char ch = str[length++])
                bitVec |= 0x1 << (ch - '0');
            
            db[i] = std::make_pair(length-1, bitVec);
        }
        
        int prod = 0;
        for (int i = sz; i >= 0; i--) {
            int len = 0;
            for (int j = i; j >= 0; j--) {
                if (i ==j || (db[i].second & db[j].second))
                    continue;
                len = db[j].first;
                break;
            }
            
            int newProd = len * db[i].first;
            prod = std::max(prod, newProd);
            
        }
        
        return prod;
    }



int maxProduct(vector<string>& words) {
        size_t sz = words.size();
        
        if (!sz)
            return 0;
        
#if 0
        /* *********** Pre process Input ************** */
        // (1) Sort the strings to align chracters in increasing order
        for (auto it = words.begin(); it != words.end(); it++)
            std::sort(it->begin(), it->end());
        
        // (2) Remove Duplicates
        std::sort(words.begin(), words.end());
        words.erase( unique( words.begin(), words.end() ), words.end() );
#endif        
        // (3) Sort the Vector based on length
        compare comp;
        std::sort(words.begin(), words.end(), comp);
        
        
        /* *********** Build Database ************** */
        std::map<int , std::pair<size_t,  long int > > db;
        
        // Build the database of set of characters in every string
        for (int i = 0; i < sz; i++) {
            long int bitVec = 0;
            size_t length = 0;
            
            const char *str = words[i].c_str();
            while (char ch = str[length++])
                bitVec |= 0x1 << (ch - '0');
            
            db[i] = std::make_pair(length-1, bitVec);
        }
        
        int prod = 0;
        for (int i = sz; i >= 0; i--) {
            if (i*i < prod) break;// early pruning
            int len = 0;
            for (int j = i; j >= 0; j--) {
                if ( i * j < prod) break; // early pruning
                if (i == j || (db[i].second & db[j].second))
                    continue;
                len = db[j].first;
                break;
            }
            
            if (len) {
            int newProd = len * db[i].first;
            prod = std::max(prod, newProd);
            }
        }
        
        return prod;
    }

