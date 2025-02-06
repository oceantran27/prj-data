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
    int numUniqueEmails(vector<string>& emails) {
        int n=emails.size();
        map<string, int> m;
        for(int i=0;i<n;i++){
            string s=emails[i];
            int sz=s.size();
            string k="";
            int ind=-1;
            for(int j=0;j<sz;j++){
                if(s[j]=='@'){
                    ind=j;
                    break;
                }
            }
            for(int j=0;j<ind;j++){
                if(s[j]=='+'){
                    break;
                }
                else if(s[j]!='.')
                    k+=s[j];
            }
            for(int j=ind;j<sz;j++){
                    k+=s[j];
            }
            m[k]++;
        }
        return m.size();
    }
};