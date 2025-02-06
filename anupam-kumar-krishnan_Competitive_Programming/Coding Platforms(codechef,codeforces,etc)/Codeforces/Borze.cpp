#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include<string>
using namespace std;

int main() {
 string s,s2;
 cin>>s;
int len=s.length();
for(int i=0;i<len;i++)

{
	if(s[i]=='.'){
		s2+='0';
	}
	if(s[i]=='-'&&s[i+1]=='.'){
		s2+='1';
		++i;
		
	}
	if(s[i]=='-'&&s[i+1]=='-'){
		s2+='2';
		++i;
	}
} 
 cout<<s2;
  	return 0;
}
