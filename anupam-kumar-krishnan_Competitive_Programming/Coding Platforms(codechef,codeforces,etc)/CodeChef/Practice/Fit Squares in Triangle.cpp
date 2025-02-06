#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	while(t--){
	    int s, res=0;
	    cin>>s;
	    res = ((s/2)*((s/2)-1))/2;
	    cout<<res<<endl;
	    
	}
	return 0;
}
