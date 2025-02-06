#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;


// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1, r = n;
        while(l<r){
            int mid = l + (r-l)/2;
            if(isBadVersion(mid)){
                r = mid;
            }else{
                l = mid+1;
            }
        } 
        return l;
    }
};




bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1, r = n;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(isBadVersion(mid)){
                r = mid-1;
            }else{
                l = mid+1;
            }
        } 
        return l;
    }
};




class Solution {
public:
    int firstBadVersion(int n) {
        int start=0, end=n;
        while(end-start>1){
            int mid=start+(end-start)/2;
            if(isBadVersion(mid))  end=mid;
            else  start=mid;
        }
        return end;
    }
};