#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include<iostream>
#include<algorithm>
using namespace std;

int gcd(int a, int b){
    return b? gcd(b,a%b):a;
}

int main(){
    int n, a, b;
    scanf("%d",&n);
    while(n--){
        scanf("%d%d",&a,&b);
        cout<<gcd(a,b)<<endl;
    }
    return 0;
}