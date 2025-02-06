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

const int MAXDISTANCE = 100000;

//Ķ
struct Node{
	int id;//ǰڵ±
	int parent;//ǰڵ
	int  d;//·
	Node() :id(-1), parent(-1), d(MAXDISTANCE){}
};

struct cmp {
	bool operator() (Node& a, Node& b){
		return a.d > b.d;
	}
};
//ʼ·
//nǽڵ,sԴ
vector<Node> InitializeSingleSource(int n, int s){
	vector<Node> res(n);
	for (int i = 0; i < n; i++)
		res[i].id = i;
	res[s].d = 0;
	return res;
}

//·ӡӵvs·
void Print_Path(vector<Node>& SPT, int s, int v){
	if (v == s){
		cout << s;
	}
	else if (SPT[v].d == MAXDISTANCE){
		cout << "ڴӽڵ" << s << "ڵ" << v << "·" << endl;
	}
	else{
		Print_Path(SPT, s, SPT[v].parent);
		cout << "-->" << v;
	}
}

//ɳڲ
//·, <u, v>Ȩֵ
void RELAX(vector<Node>& SPT, int u, int v, int w){
	if (SPT[v].d > SPT[u].d + w){
		SPT[v].d = SPT[u].d + w;
		SPT[v].parent = u;
	}
}

//Dijkstra㷨
//SPT·, Adjڽӱ, sԴ
void Dijkstra(vector<Node>& SPT, vector<vector<pair<int, int>>>& Adj, int s){
	vector<bool> visited(SPT.size(), false);//Ƿ,falseʾδ
	priority_queue<Node, vector<Node>, cmp> Q;//ȶ
	Q.push(SPT[s]);
	while (!Q.empty()){
		int u = Q.top().id;//ǰڵ
		Q.pop();
		if (visited[u])
			continue;
		visited[u] = true;
		for (auto v : Adj[u]){
			if (!visited[v.first]){
				RELAX(SPT, u, v.first, v.second);
				Q.push(SPT[v.first]);
			}
		}
	}
	cout << "·Ϊ" << endl;
	for (int i = 0; i < SPT.size(); i++){
		if (i != s){
			Print_Path(SPT, s, i);
			cout << " ·ȨֵΪ:" << SPT[i].d << endl;
		}
	}
}

int main(){
	cout << "ڵߵĸ";
	int n, m;
	cin >> n >> m;
	vector<vector<pair<int, int>>> Adj(n);//ڽӱ
	cout << "ߵ,յ,Ȩֵ(ÿȨֵҪ100,·ȲҪ100000,ڵŴ0ʼ)" << endl;
	int input1, input2, input3;
	for (int i = 0; i < m; i++){
		cin >> input1 >> input2 >> input3;
		Adj[input1].push_back(make_pair(input2, input3));
	}
	cout << "Դ㣺";
	int s; cin >> s;
	vector<Node> SPT = InitializeSingleSource(n, s);
	Dijkstra(SPT, Adj, s);
	system("pause");
	return 0;
}