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
    int numberOfMatches(int n) {
        int total=0;
 while(n>=2){
     if(n%2==0){
        total+=n/2;
        n=n/2;
     }
     else{
        total+=(n-1)/2;
        n=(n+1)/2; 
     }
 }
 return total;
    }
};