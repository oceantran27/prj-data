#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;
char matrix[2000][2000];//õľ 
void draw(int n,int x,int y)//nΪdegreex,yΪʼϽ 
{
	if(n==1)
	{
		matrix[x][y]='X';
		return ;
	}
	else
	{
		draw(n-1,x,y);//ӡϽ
		draw(n-1,x+2*pow(3,n-2),y);//ӡ½
		draw(n-1,x,y+2*pow(3,n-2)) ;//ӡϽ
		draw(n-1,x+2*pow(3,n-2),y+2*pow(3,n-2));//ӡ½ 
		draw(n-1,x+pow(3,n-2),y+pow(3,n-2));//ӡм 
	}
	
}
void print(int wid)
{
	for(int i=0;i<wid;i++)
	{
		for(int j=0;j<wid;j++)
		{
			cout<<matrix[i][j];
		}
		cout<<endl;
	}
	cout<<"-"<<endl;
}
int main()
{
	int degree;
	cin>>degree;
	while(degree!=-1)
	{
		int wid=pow(3,degree-1);//degreeΪiʱĿ 
		for(int i=0;i<wid;i++)//ʼΪհ 
		{
			for(int j=0;j<wid;j++)
			{
				matrix[i][j]=' ' ;
			}
		} 
		draw(degree,0,0); 
		print(wid);
		cin>>degree;
	}
} 
