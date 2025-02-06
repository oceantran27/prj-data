#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(void) {
    int moduloNumber = pow(10,9)+7;
    int tc;
    cin>>tc;
    while(tc--) {
        int n, count;
        cin>>n;
        int range = pow(2,n);

        for (int i = 0; i < range ; i++)
        {
            if ( i^(i+1) == (i+2)^(i+3) )
                count++;
            if ( i == n )
                break;
        }
        cout<<count%moduloNumber<<endl;
    }
}