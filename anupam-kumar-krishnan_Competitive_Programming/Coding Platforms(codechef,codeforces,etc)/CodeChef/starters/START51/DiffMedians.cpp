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
	while(t--)
	{
	    int n,x;
	    cin>>n;
	    int i=1,j=n;
	    while(i<j)
	    {
	        cout<<j<<" ";j--;
	        cout<<i<<" ";i++;
	    }
	    if(i==j)
	    cout<<i;
	    cout<<endl;
	}
	return 0;
}