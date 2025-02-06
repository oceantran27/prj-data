#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,a,t;
   cin>>n>>t;
   while(t--)
   {
        a=n%10;
        switch(a)
        {
            case 0:
                n/=10;
                break;
            default:
                n--;
        }
   }
   cout<<n;
    return 0;
}