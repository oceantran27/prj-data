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
    string convertToTitle(int n) {
        string answer="";
        while (n!=0)
            if (n%26==0)
            {
                answer='Z'+answer;
                n=n/26-1;
            }
            else
            {
                answer=char(n%26+'@')+answer;
                n=n/26;
            }
        return answer;
    }
};
