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
string convert(string s, int nRows) {

    if(nRows==1)
        return s;
    
    int y=0;
    bool flag= true;
    string sArray[nRows];
    for(int i=0;i<nRows;i++)
        sArray[i]="";
    
    for(int i=0;i<s.length();i++){
        
        sArray[y]+=s[i];
        
        if(y==0){
            flag=true;
        }
        if(y==nRows-1){
            flag=false;
        }
        
        if(flag==true){
            y++;
        }else{
            y--;
        }
        

    }

    string ret="";
    
    for(int i=0;i<nRows;i++){
        ret+=sArray[i];
    }
    
    return ret;
}
};