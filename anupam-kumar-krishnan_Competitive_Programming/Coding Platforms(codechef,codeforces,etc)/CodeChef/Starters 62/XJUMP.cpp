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
    int t;
    cin >> t;
    while(t--){
        int ans=0;
        int x,y;
        cin>>x>>y;
        ans=x/y+x%y;
        cout<<ans<<endl;
    }
return 0;
}