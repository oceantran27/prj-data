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
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int p[n-1];
	    int sum = 0,maxi =0;
	    
	    
	    
	    for(int i = 0;i<n-1;i++){
	        cin>>p[i];
	        sum+=p[i];
	        maxi = max(maxi,p[i]);
	        
	        
	    }
	    cout<<sum+maxi<<endl;
	}
	return 0;
}