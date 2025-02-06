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

int t;
long long x,n,res;

int main() 
{
	cin>>t;
	while(t--) 
	{
		cin>>x>>n;
		res=x;
		for(long long i=n/4*4+1;i<=n;i++) 
		{
			if(res%2) res+=i;
			else res-=i;
		}
		cout<<res<<endl;
	}
	
	return 0;
}
