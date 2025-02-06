#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int T, N, X, P, R;
    cin>>T;
    while(T--){
        cin>>N>>X>>P;
        R = (3*X)-(N-X);
        if(R>=P){
            cout<<"Pass"<<endl;
        }
        else{
            cout<<"Fail"<<endl;
        }
    }
    return 0;
}
