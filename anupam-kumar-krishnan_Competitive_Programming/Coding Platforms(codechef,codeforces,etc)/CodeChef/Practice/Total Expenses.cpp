#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int q,p;
	    double e;
	    cin>>q>>p;
	    if(q<=1000){
	        e=q*p;
	        cout<<fixed<<setprecision(6)<<e<<endl;
	    }
	    else{
	        e=0.9*q*p;
	        cout<<fixed<<setprecision(6)<<e<<endl;
	    }
	}
	return 0;
}
