#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <string>
#include <cstring>
/*
	todo:ַַ˳Ϊֵȫ 
*/
using namespace std;
void change(char &a,char &b)
{
	char hold;
	hold=a;
	a=b;
	b=hold;
}
void permutation(string data,int begin,int end)
{
	if(begin==end)
	{
		cout<<data<<endl;
		return;
	}
	else
	{
		for(int i=begin;i<=end;i++)
		{
			change(data[begin],data[i]);	
			permutation(data,begin+1,end);
		}
	}	
}
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		string data;
		cin>>data;
		permutation(data,0,data.size()-1);
	}
	return 0;
 } 
