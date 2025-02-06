#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int N,M;//һNֻ±1N 
		cin>>N>>M;
		int array[10005];
		for(int i=1;i<N;i++)
		{
			array[i]=i+1;
		}
		array[N]=1;	
		int count=N;
		int number=1;//ǰ± 
		if(M==1)
		{
			cout<<N<<endl;
			continue;
		} 	
		while(count>1)
		{
			for(int i=0;i<M-2;i++)//ȡҪɾĺӱ ǰһ 
			{
				number=array[number];
			}
			array[number] = array[array[number]];//ɾڵ 
			count--;
			number = array[number];//ָ 
		}	
		cout<<number<<endl;
	}
 } 
