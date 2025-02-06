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

bool isPrime(int x){
    if(x<2) return false;
    for(int i=2;i<=x/i;++i)
        if(x%i==0)
            return false;
    return true;
    
}

int main(){
    int n, x;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&x);
        if(isPrime(x)) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
