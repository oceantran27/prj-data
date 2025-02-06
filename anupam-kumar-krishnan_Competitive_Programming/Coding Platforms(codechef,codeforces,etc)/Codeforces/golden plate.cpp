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
int r,c,p,k,s=0;
cin>>r>>c>>p;

while(p--)
{
k=(r*c) - (r-2)*(c-2);
s=s+k;
r=r-4;
c=c-4;

}
cout<<s<<"\n";
return 0;
}
