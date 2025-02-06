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
        int arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        cout<<*max_element(arr,arr+3)-*min_element(arr,arr+3)<<endl;
    }
return 0;
}