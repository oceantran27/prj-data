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
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(z%x==0 && z%y==0)
	    cout<<"ANY"<<endl;
	    else if (z%x==0 && z%y!=0)
	    cout<<"CHICKEN"<<endl;
	    else if (z%x!=0 && z%y==0)
	    cout<<"DUCK"<<endl;
	    else
	    cout<<"NONE"<<endl;
	}
	return 0;
}
