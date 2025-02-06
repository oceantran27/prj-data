#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <string>
#define MaxSize 10//ͼĶ 
#define infinity 65536
using namespace std;
struct Graph 
{
	int *adj[MaxSize];
	int minimal_spaning_tree[MaxSize][MaxSize];
	int count; //жٸ
	void empty()
	{
		for(int i=0;i<MaxSize;i++)
		{
			adj[i]=NULL;
			for(int j=0;j<MaxSize;j++)
			{	
				minimal_spaning_tree[i][j]=0;
			}
		}
	}
	void add_edge(int v1,int v2,int weight) //v1<->v2Ȩ
	{
		minimal_spaning_tree[v1][v2]=weight; 
		minimal_spaning_tree[v2][v1]=weight; 
	}
	Graph(int c):count(c){}
};
void Prim(Graph &Network,int s)
{
	bool component[MaxSize];//¼ǷװС
	int distance[MaxSize];//¼ÿ㵽СеĵС
	int neighbor[MaxSize];//¼ÿ㵽Со̵ڽӵ
	for(int i=0;i<Network.count;i++)//ʼ
	{
		component[i]=false;
		distance[i]=Network.adj[s][i];
		neighbor[i]=s;
	}
	component[s]=true;
	
	for(int i=0;i<Network.count;i++)
	{
		int min=infinity;
		int v=s;
		for(int j=0;j<Network.count;j++)
		{
			if(!component[j]&&distance[j]<min)
			{
				v=j;
				min=distance[j];
			}
		}
		component[v]=true;
		Network.add_edge(neighbor[v],v,distance[v]);
		for(int j=0;j<Network.count;j++)
		{
			if(!component[j]&&Network.adj[v][j]<distance[j])
			{
				distance[j]=Network.adj[v][j];
				neighbor[j]=v;
			}
		}
		
	}
}
int main()
{
	Graph test(6);
	test.empty();
	int a0[]={0,3,3,3,3,3};
	int a1[]={3,0,2,infinity,infinity,2};
	int a2[]={3,2,0,4,2,infinity};
	int a3[]={3,infinity,4,0,4,infinity};
	int a4[]={3,infinity,2,4,0,1};
	int a5[]={3,2,infinity,infinity,1,0};
	test.adj[0]=a0;
	test.adj[1]=a1;
	test.adj[2]=a2;
	test.adj[3]=a3;
	test.adj[4]=a4;
	test.adj[5]=a5;
	
	Prim(test,0);
	for(int i=0;i<test.count;i++)
	{
		for(int j=0;j<test.count;j++)
		{
			cout<<test.minimal_spaning_tree[i][j]<<" ";
		}
		cout<<endl;
	}
 } 
