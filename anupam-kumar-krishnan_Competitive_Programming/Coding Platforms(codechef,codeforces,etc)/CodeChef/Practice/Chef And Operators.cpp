#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long int a,b;
       cin>>a>>b;
       if(a>b)
       cout<<">"<<endl;
       else if(a<b)
       cout<<"<"<<endl;
       else
       cout<<"="<<endl;
    }
        
    return 0;
}
