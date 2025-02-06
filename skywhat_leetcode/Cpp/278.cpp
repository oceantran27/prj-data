#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include<iostream>
#include<vector>

// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int i=1, j=n;
        while(i+1 < j){
            int mid = i+(j-i)/2;
            if(isBadVersion(mid)){
                j=mid;
            }
            else{
                i=mid;
            }
        }
        
        return isBadVersion(i)? i:j;
    }
};

int main(){

}
