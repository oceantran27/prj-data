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
typedef long long ll;
ll powll(ll a){
    return a*a*a;
}
void solve(ll x) {
	ll m = cbrt(x);
    for(int i=1;i<=m;i++){
        if(cbrt(x-powll(i))==int(cbrt(x-powll(i))) && cbrt(x-powll(i))>=1){
        cout<<"YES\n";
        return;
        }
    }
	cout << "NO\n";
}
int main() {

	int t; cin >> t;
	while (t--) {
		ll x; cin >> x;
		solve(x);
	}
	return 0;
}
