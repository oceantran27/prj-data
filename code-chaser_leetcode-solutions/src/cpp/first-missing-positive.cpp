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
    int firstMissingPositive(vector<int>& arr) {
        int n=arr.size();
        if(n==0){
            return 1;
        }
        sort(arr.begin(), arr.end());
        int index=0;
        while(index<n && arr[index]<=0){
            index++;
        }
        int count=1;
        for(int i=index;i<n;i++){
            if(i>0 && arr[i]==arr[i-1]){
               continue; 
            }
            if(arr[i]!=count){
                break;
            }
            count++;
        }
        return count;
    }
};
