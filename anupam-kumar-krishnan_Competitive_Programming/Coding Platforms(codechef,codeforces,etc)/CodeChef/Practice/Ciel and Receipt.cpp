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

int main() 
{
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,i,ans=0;
	    cin>>n;
	    
	    for(i=11; i>=0; i--)
	    {
	        int x = pow(2, i);
	        ans += n/x;
	        n %= x;
	    }
	    
	    cout<<ans<<endl;
	}
	return 0;
}
