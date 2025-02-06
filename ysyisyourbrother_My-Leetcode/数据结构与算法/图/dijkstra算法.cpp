#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <string>
#define MaxSize 10
#define infinity 65536
using namespace std;
struct Graph 
{
	string vertex[MaxSize];
	int *adj[MaxSize];
	int count; //жٸ 
};
string dijkstra(Graph G,int v,int end)//ͼԴ
{
	int distance[MaxSize];
	string path[MaxSize];//·Ĵ 
	bool found[MaxSize];
	for(int i=0;i<G.count;i++)
	{
		found[i]=false;
		distance[i]=G.adj[v][i];
		if(distance[i]!=MaxSize)
		{
			path[i]=G.vertex[v]+G.vertex[i];
		}
		else
			path[i]="";
	}
	found[v]=true;
	distance[v]=0;
	
	for(int i=0;i<G.count;i++)
	{
		int min=infinity;
		int v;//ҵҪsetµĵ 
		for(int w=0;w<G.count;w++)
		{
			if(!found[w]&&distance[w]<min)
			{
				v=w;
				min=distance[w]; 
			}
		}
		found[v]=true;
		for(int j=0;j<G.count;j++)// Ҫ뼯еĵ벢ڽӵ
		{
			if(!found[j]&&G.adj[v][j]+distance[v]<distance[j])
			{
				distance[j]=G.adj[v][j]+distance[v];
				path[j]=path[v]+G.vertex[j];
			}
		}
		
	}
	return path[end];
 } 
int main()
{
	Graph G;
	G.count=5;
	G.vertex[0]="Y";
	G.vertex[1]="S";
	G.vertex[2]="Y";
	G.vertex[3]="N";
	G.vertex[4]="B";
	int a0[]={0,5,3,infinity,2};
	int a1[]={infinity,0,2,infinity,infinity};
	int a2[]={infinity,1,0,2,infinity};
	int a3[]={infinity,infinity,infinity,0,infinity};
	int a4[]={infinity,6,10,4,0};
	G.adj[0]=a0;
	G.adj[1]=a1;
	G.adj[2]=a2;
	G.adj[3]=a3;
	G.adj[4]=a4;
	cout<<dijkstra(G,0,4);
 } 
