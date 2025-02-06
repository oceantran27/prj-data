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
    int n,a,b,cap=0,max=cap;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        cap=cap-a+b;
        if(max<cap)
            max=cap;
    }
    cout<<max;
    return 0;
}