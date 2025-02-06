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
    // please write your code here
    int n,ans=0;
    while(cin>>n)
        ans ^= n;
    cout << ans;
    return 0;
}