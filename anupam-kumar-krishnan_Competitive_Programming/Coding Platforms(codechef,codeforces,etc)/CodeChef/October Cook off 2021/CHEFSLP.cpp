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
    int t,n,l,x;
    cin>>t;
    while (t--)
    {
        cin>>n>>l>>x;
        int r = min(l, n-l);
        cout<<r*x<<endl;
    }
	return 0;
}
