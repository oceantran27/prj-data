#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include<iostream>
#include<cstring>
using namespace std;

string s;
int n;
int ans=0;
    
int main()
{
	
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(s[0]=='T')//Tetrahedron
        {
            ans+=4;
        }
        if(s[0]=='C')//Cube
        {
            ans+=6;
        }
        if(s[0]=='O')//Octahedron
        {
            ans+=8;
        }
        if(s[0]=='D')//Dodecahedron
        {
            ans+=12;
        }       
        if(s[0]=='I')//Icosahedron
        {
            ans+=20;
        }            
    }
    cout<<ans<<endl;
    
    
    return 0;
}
