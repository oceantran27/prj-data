#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

enum color {white, gray, black};
int time = -1;

struct Node{
	int s;//ʼʱ
	int e;//ʱ
	int p;//ǰڵ
	color c;//ɫ
	Node() :p(-1), c(white){}
};

//uʼȱ
//Adjڽӱ, Vǵ㼯, uǿʼڵ
void DFS_Visit(vector<vector<int>>& Adj, vector<Node>& V, int u){
	//ʼʽڵu
	time++;
	V[u].s = time;
	V[u].c = gray;
	cout << "(" << u;
	//
	for (int next : Adj[u]){
		if (V[next].c == white){
			V[next].p = u;
			DFS_Visit(Adj, V, next);
		}
	}
	//Խڵuʽ
	V[u].c = black;
	time++;
	V[u].e = time;
	cout << ")";
}

//DFSʽͼ
void DFS(vector<vector<int>>& Adj){
	vector<Node> V(Adj.size());
	for (int i = 0; i < Adj.size(); i++){
		if (V[i].c == white){
			DFS_Visit(Adj, V, i);
			cout << endl;
		}
	}
}

int main(){
	int n, m;
	cout << "ͱ";
	cin >> n >> m;
	vector<vector<int>> Adj(n);//ڽӱ
	int flag;
	cout << "ͼѡ0,ͼѡ1";
	cin >> flag;
	cout << "ߵ˵(ͼĻע˳)" << endl;
	for (int i = 0; i < m; i++){
		int u, v;
		cin >> u >> v;
		if (flag){
			Adj[u].push_back(v);
		}
		else{
			Adj[u].push_back(v);
			Adj[v].push_back(u);
		}
	}
	cout << "˳Ϊ( '('ʾʼ, ')'ʾʽ)" << endl;
	DFS(Adj);
	system("pause");
	return 0;
}