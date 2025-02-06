#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution 
{
public:
    vector<int> findSubstring(string S, vector<string> &L)
    {
        const size_t count = L.size();
        const size_t len = L[0].length();
        const size_t total_len = len * count;
        
        vector<int> result;
        if (S.length() >= total_len)
        {
            unordered_map<string, int> word2count;
            for (auto s : L)
            {
                word2count[s] = word2count[s] + 1;
            }
            
            string word;
            for (size_t start = 0; start < len; ++start)
            {
                if (start + total_len <= S.length())
                {
                    auto word2require = word2count;
                    size_t not_enough = word2count.size();
                    size_t num = 0;
                    size_t b = start;
                    while (b + len <= S.length())
                    {
                        if (num == count)
                        {
                            word.assign(S, b - total_len, len);
                            auto it = word2require.find(word); // i am sure it is not equal to word2require.end()
                            if (it->second == 0)
                            {
                                not_enough += 1;
                            }
                            it->second += 1;
                            num -= 1;
                        }

                        word.assign(S, b, len);
                        b += len;
                        num += 1;

                        auto it = word2require.find(word);
                        if (it != word2require.end())
                        {
                            it->second -= 1;
                            if (it->second == 0)
                            {
                                not_enough -= 1;
                                if (not_enough == 0)
                                {
                                    result.push_back(b - total_len);
                                }
                            }
                        }
                        else
                        {
                            if (b + total_len > S.length())
                            {
                                break;
                            }
                            
                            if (num != 1)
                            {
                                word2require = word2count;
                            }
                            not_enough = word2count.size();
                            num = 0;
                        }

                    }
                }
            }
        }
        
        return result;
    }
};

//=============================================================================

class Solution2
{
public:
    vector<int> findSubstring(string S, vector<string> &L)
    {
        const size_t count = L.size();
        const size_t len = L[0].length();
        const size_t total_len = len * count;
        
        vector<int> result;
        if (S.length() >= total_len)
        {
            unordered_map<string, int> word2count;
            for (auto s : L)
            {
                word2count[s] = word2count[s] + 1;
            }

            size_t not_enough = word2count.size();
            list<unordered_map<string, int>::iterator> lst;
            string word;

            for (size_t start = 0; start < len; ++start)
            {
                if (start + total_len <= S.length())
                {
                    size_t b = start;
                    while (true)
                    {
                        if (b + len > S.length())
                        {
                            for (auto it : lst)
                            {
                                it->second += 1;
                            }
                            lst.clear();
                            not_enough = word2count.size();
                            break;
                        }
                        
                        if (lst.size() == count)
                        {
                            auto it = lst.front();
                            if (it->second == 0)
                            {
                                not_enough += 1;
                            }
                            it->second += 1;
                            lst.pop_front();
                        }

                        word.assign(S, b, len);
                        b += len;

                        auto it = word2count.find(word);
                        if (it != word2count.end())
                        {
                            it->second -= 1;
                            if (it->second == 0)
                            {
                                not_enough -= 1;
                                if (not_enough == 0)
                                {
                                    result.push_back(b - total_len);
                                }
                            }
                            lst.push_back(it);
                        }
                        else
                        {
                            for (auto it : lst)
                            {
                                it->second += 1;
                            }
                            lst.clear();
                            not_enough = word2count.size();

                            if (b + total_len > S.length())
                            {
                                break;
                            }
                        }
                    }
                }
            }
        }
        
        return result;
    }
};
