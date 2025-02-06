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
using namespace std;
const int MAXDISTANCE = 100000;
//߶
struct Edge{
	int start, end;//ߵĶ˵
	int weight;//ߵȨֵ
	Edge() :start(-1), end(-1), weight(0){}
};

//Ķ
struct Node{
	int parent;//ǰڵ
	int  d;//·
	Node() :parent(-1), d(MAXDISTANCE){}
};

//ʼ·
//nǽڵ,sԴ
vector<Node> InitializeSingleSource(int n, int s){
	vector<Node> res(n);
	res[s].d = 0;
	return res;
}

//ɳڲ
//·, <u, v>Ȩֵ
void RELAX(vector<Node>& SPT, int u, int v, int w){
	if (SPT[v].d > SPT[u].d + w){
		SPT[v].d = SPT[u].d + w;
		SPT[v].parent = u;
	}
}

//Bellman-Ford㷨
//FalseʾͼаԴڵ㵽ȨֵΪĻ·
//SPTʾ·, edgesǱ߼, nǵĸ
bool Bellman_Ford(vector<Node>& SPT, vector<Edge>& edges, int n){
	//ÿ߽|V| - 1ɳڲ
	for (int i = 0; i < n - 1; i++){
		for (auto e : edges){
			RELAX(SPT, e.start, e.end, e.weight);
		}
	}
	//жǷȨֵΪĻ·
	//ڵĻ,ÿһλ·ʱ·С
	//ھͷfalse, 򷵻true
	for (auto e : edges){
		if (SPT[e.end].d > SPT[e.start].d + e.weight)
			return false;
	}
	return true;
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
		cout << "-->" << v ;
	}
}

int main(){
	cout << "ڵߵĸ";
	int n, m;
	cin >> n >> m;
	vector<Edge> edges(m);
	cout << "ߵ,յ,Ȩֵ(ÿȨֵҪ100,·ȲҪ100000,ڵŴ0ʼ)" << endl;
	int input1, input2, input3;
	for (int i = 0; i < m; i++){
		cin >> input1 >> input2 >> input3;
		edges[i].start = input1;
		edges[i].end = input2;
		edges[i].weight = input3;
	}
	cout << "Դ㣺";
	int s; cin >> s;
	vector<Node> SPT = InitializeSingleSource(n, s);
	if (!Bellman_Ford(SPT, edges, n)){
		cout << "ͼдȨֵΪĻ·" << endl;
	}
	else{
		cout << "·Ϊ" << endl;
		for (int i = 0; i < n; i++){
			if (i != s){
				Print_Path(SPT, s, i);
				cout << " ·ȨֵΪ:" << SPT[i].d << endl;
			}
		}
	}
	system("pause");
	return 0;
}