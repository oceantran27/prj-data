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
    int numUniqueEmails(vector<string> &emails)
    {

        set<string> st;
        for (string &mail : emails)
        {
            string resultMail = "";
            for (char c : mail)
            {
                if (c == '+' or c == '@')
                    break;
                if (c == '.')
                    continue;

                resultMail += c;
            }
            resultMail += mail.substr(mail.find('@'));

            st.insert(resultMail);
        }
        return st.size();
    }
};