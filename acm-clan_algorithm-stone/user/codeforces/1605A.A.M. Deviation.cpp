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
	int T;
	scanf("%d",&T);
	while(T--) 
	{
		long long a,b,c;
		scanf("%lld%lld%lld",&a,&b,&c);
		cout<<(bool)(abs(a+c-b*2)%3)<<'\n';
	}

	return 0;
}
