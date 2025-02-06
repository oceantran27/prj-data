#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void print(vector<int> vec)
{
	for(int i=0;i<vec.size();i++)
	{
		cout<<vec[i]<<" ";
	}
	cout<<endl;
	return; 
}
void recursion(queue<int> que,stack<int> sta,vector<int> vec)
{
	if(que.empty()&&sta.empty())
	{
		print(vec);
		return;
	}
	else
	{
		if(!que.empty())// 
		{
			//ʱ 
			queue<int> temq=que;
			vector<int> temv=vec;
			stack<int> tems=sta; 
			
			int x=temq.front();
			temq.pop();
			
			tems.push(x);//ջ 
			recursion(temq,tems,vec);
		}
		if(!sta.empty())//ջ
		{
			stack<int> tems=sta;
			vector<int> temv=vec;
			int x=tems.top();
			tems.pop();
			temv.push_back(x);
			recursion(que,tems,temv);
		} 
	}
}
int main()
{
	int N;
	cin >>N;
	queue<int> que;
	vector<int> vec;
	stack<int> sta;
	for(int i=0;i<N;i++)
	{
		int a;
		cin>>a;
		que.push(a);
	}
	recursion(que,sta,vec);
}
