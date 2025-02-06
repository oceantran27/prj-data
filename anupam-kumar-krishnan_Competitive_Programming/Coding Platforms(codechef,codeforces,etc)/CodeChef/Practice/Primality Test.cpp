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
bool prime(int n)
{
    if(n==1)
    return false;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        if(prime(n))
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
    
    return 0;
}
