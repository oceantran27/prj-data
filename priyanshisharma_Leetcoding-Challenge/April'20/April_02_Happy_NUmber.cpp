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
    bool isHappy(int n) {
      unordered_set<int> seen;
        while(n>1)
        {   
            int a;
            int sum=0;
            
            while(n>0)
            {   
                a=n%10;
                sum+=pow(a,2);
                n/=10;
            }
            
            n=sum;
            
            if (seen.find(n)!=seen.end()) 
                return false;
            
            seen.insert(n);
        }
        
        return n==1;   
    }
};
