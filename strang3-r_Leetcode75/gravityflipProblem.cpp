#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
//codeforces problem 405-A Gravity Flip Solution
#include<bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
