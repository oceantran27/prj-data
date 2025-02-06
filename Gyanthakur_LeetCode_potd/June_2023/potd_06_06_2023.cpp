#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
int main(){

return 0;
}

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int diff = arr[1]-arr[0];
        for(int i=2;i<n;i++)
        {
            if((arr[i]-arr[i-1])!= diff)
            return false;
        }
        return true;
    }
};