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
    bool isPowerOfTwo(int n) {
        while(n>4)
        {
            if((n%10)%2!=0)
                break;
            n/=2;
            cout<<n<<' ';
        }  
        
        if(n==4||n==2||n==1)
            return true;
        
        return false;      
        
    }
};
