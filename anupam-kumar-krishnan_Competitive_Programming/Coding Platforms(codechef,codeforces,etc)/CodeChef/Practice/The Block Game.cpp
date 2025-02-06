#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
using namespace std;
typedef long long ll;
int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll rem,rev=0;
        ll m=n;
        while(m)
        {
            rem=m%10;
            rev=rev*10+rem;
            m=m/10;
        }
        
        if(n==rev)
        {
            cout<<"wins"<<endl;
        }
        else
        {
            cout<<"loses"<<endl;
        }
    }
	
	return 0;
}
