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
#include<algorithm>
using namespace std;
struct Edge{
	int u, v;//·
	int w;//·Ȩ
	Edge(int a, int b, int c) : u(a), v(b), w(c){}
};

//ȨشСԱ 
bool cmp(const Edge& a, const Edge& b){
	return a.w < b.w;
}

//Ϊ㴴첻ཻ
//vector<pair<int, int>> parent, parent[i].firstʾiȽڵ,parent[i].secondʾͬһȼϵĴС
vector<pair<int, int>> MakeSet(int n){
	vector<pair<int, int>> parent;
	for (int i = 0; i < n; i++){
		parent.push_back(make_pair(i, 1));
	}
	return parent;
}

//xڼϵ
int FindParent(vector<pair<int, int>>& parent, int x){
	while (x != parent[x].first)
		x = parent[x].first;
	return x;
}

//ͬȵĺϲΪͬһ
void Union(vector<pair<int, int>>& parent, int x, int y){
	//ѼСĹ鵽,ѯʱԼٲѯ
	if (parent[x].second > parent[y].second){
		parent[y].first = x;
		parent[x].second += parent[y].second;
	}
	else{
		parent[x].first = y;
		parent[y].second += parent[x].second;
	}
}

//kruskal㷨
vector<Edge> Kruskal(vector<Edge>& edges, int n){
	vector<Edge> res;
	vector<pair<int, int>> parent = MakeSet(n);
	for (auto e : edges){
		int x = FindParent(parent, e.u), y = FindParent(parent, e.v);
		//ǰߵļ벻ṹɻ·
		if (x != y){
			res.push_back(e);
			Union(parent, x, y);
			if (res.size() == n - 1)
				break;
		}
	}
	return res;
}

int main(){
	int n, m;
	cout << "ͱ";
	cin >> n >> m;
	vector<Edge> edges, res;
	cout << "ߵ˵(˵Ŵ0ʼ)Ȩֵ" << endl;
	for (int i = 0; i < m; i++){
		int a, b, c;
		cin >> a >> b >> c;
		Edge e = Edge(a, b, c);
		edges.push_back(e);
	}
	sort(edges.begin(), edges.end(), cmp);
	res = Kruskal(edges, n);
	cout << "Ϊ" << endl;
	int sum = 0;
	for (auto e : res){
		cout << e.u << " " << e.v <<" "<< e.w << endl;
		sum += e.w;
	}
	cout << "СȨֵΪ" << sum << endl;
	system("pause");
	return 0;
}