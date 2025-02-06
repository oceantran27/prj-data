#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <stack>
#include <queue>
#define max_size 1000
using namespace std;
void Visit(int a)
{
	cout<<a<<" ";
}
class Graph//һٽӾʵֵͼ 
{
public:
	Graph(int size)
	{
		numberOfVertice=size;
//		vertices=new char[size];
		adj_matrix=new int*[size];
		visit=new bool[size];
		for(int i=0;i<size;i++)
		{
			visit[i]=false;
		}
	}
	~Graph()
	{
//		delete[]vertices;
		for(int i=0;i<numberOfVertice;i++)
		{
			delete[]adj_matrix[i];
		}
		delete[] adj_matrix;
		delete[] visit;
	}	
	int** getMatrix()
	{
		return adj_matrix;
	}
	void initialVisit(){//ʼvisit 
		for(int i=0;i<numberOfVertice;i++)
		{
			visit[i]=false;
		}
	} 
	void dfs_recursion(int i,void (*Visit)(int))//ݹ鷨 ,iŵ㿪ʼ 
	{
		Visit(i);
		visit[i] = true;//Ķ־ΪTrue 
		for(int k=0;k<numberOfVertice;k++)//ڽӾһ 
		{
			if(adj_matrix[i][k]!=0&&visit[k]!= true)
			{
				dfs_recursion(k,Visit); 
			}
		 } 
	}
	void dfs_stack(int i,void(*Visit)(int))
	{
		stack<int> sta;
		visit[i]=true;
		Visit(i);
		sta.push(i);
		while(!sta.empty())
		{
			int vert,k;
			for(k = 0;k<numberOfVertice;k++)//ҵǰڵһڽӵ 
			{
				if(adj_matrix[sta.top()][k]!=0&&visit[k]==false)
				{
					break;
				}
			}
			vert=k;
			if(vert!=numberOfVertice)
			{
				sta.push(k);
				Visit(k);
				visit[k]=true;
			}
			else
			{
				sta.pop();
				if(sta.empty()) break;
				int top=sta.top();
				int vert2,k2;
				for(k2 = 0;k2<numberOfVertice;k2++)//һڵĵһڽӵ 
				{
					if(adj_matrix[top][k]!=0&&visit[k]==false)
					{
						break;
					}
				}
				vert2=k2;
				if(vert2!=numberOfVertice)
				{
					sta.push(vert2);
					Visit(vert2);
					visit[vert2]=true;
				}
			}
		}
	}
	
	void bfs_queue(int i,void(*Visit)(int))//ΪͼһͨöеĶ㶼Ϊһȫ 
	{
		queue<int> q;
		visit[i]=1;
		q.push(i);
		while(!q.empty())
		{
			int vert=q.front();
			Visit(vert); 
			for(int k=0;k<numberOfVertice;k++)
			{
				if(adj_matrix[vert][k]!=0&&visit[k]!=1)
				{
					q.push(k);
					visit[k]=1;
				}
			}
			q.pop();
		}
	}
private:
//	char* vertices;//¼еĶַ(δõ) 
	int**  adj_matrix;//ά¼ߺȨ 
	bool *visit;//¼õǷ񱻱 
	int numberOfVertice;
};

int main()
{
	int temp1[]={0,1,0,0,1,0,0,0,1};
	int temp2[]={1,0,1,0,1,0,0,0,0};
	int temp3[]={0,1,0,1,0,0,0,0,0};
	int temp4[]={0,0,1,0,0,0,0,0,0};
	int temp5[]={1,1,0,0,0,1,0,0,0};
	int temp6[]={0,0,0,0,1,0,1,0,1};
	int temp7[]={0,0,0,0,0,1,0,1,0};
	int temp8[]={0,0,0,0,0,0,1,0,0};
	int temp9[]={1,0,0,0,0,1,0,0,0};
	
	int size=9;
	Graph test(size);
	test.getMatrix()[0]=temp1;
	test.getMatrix()[1]=temp2;
	test.getMatrix()[2]=temp3;
	test.getMatrix()[3]=temp4;
	test.getMatrix()[4]=temp5;
	test.getMatrix()[5]=temp6;
	test.getMatrix()[6]=temp7;
	test.getMatrix()[7]=temp8;
	test.getMatrix()[8]=temp9;
	test.dfs_stack(0,Visit);
} 
