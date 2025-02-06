#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;

    int to_power=n/2;
    if(n%2!=0){
        cout<<0<<endl;
    }else{
        cout<<(1<<to_power)<<endl;
    }
    return 0;
}