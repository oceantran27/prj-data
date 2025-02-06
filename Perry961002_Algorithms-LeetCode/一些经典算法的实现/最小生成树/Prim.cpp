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

//ڽӱеĽڵ
struct Node{
	int id;//ǰı
	int key;//ߵȨֵ
	//췽
	Node(int x, int k) :id(x), key(k){}
};

//Prim㷨ʵ,startΪʼڵ
int Prim(vector<vector<Node>>& edges, int start){
	int n = edges.size();//ڵ
	vector<bool> visited(n, false);//ڵʱʶ
	vector<int> path;//ѾĽڵ
	path.push_back(start);
	visited[start] = true;
	int nodeSum = 1, keySum = 0;
	int end = -1;
	while (nodeSum < n){
		int minKey = INT_MAX;
		//ѾĽڵ
		for (int now : path){
			//ûдĽڵ
			for (auto next : edges[now]){
				//ѡpathpath֮ебȨֵСһ
				if (!visited[next.id] && next.key < minKey){
					minKey = next.key;
					start = now;
					end = next.id;
				}
			}
		}
		nodeSum++;
		visited[end] = true;
		path.push_back(end);
		cout << start << "----" << end << " " << minKey << endl;
		keySum += minKey;
	}
	return keySum;
}
int main(){
	int n, m;//,
	cout << "ͱ";
	cin >> n >> m;
	vector<vector<Node>> edges(n);//ڽӱ
	cout << "ߵ˵(Ŵ0ʼ)Ȩֵ:" << endl;
	for (int i = 0; i < m; i++){
		int a, b, c;
		cin >> a >> b >> c;
		Node tmp = Node(b, c);
		edges[a].push_back(tmp);
		tmp = Node(a, c);
		edges[b].push_back(tmp);
	}
	cout << "뿪ʼڵ㣺";
	int start; cin >> start;
	int res = Prim(edges, start);
	cout << "СȨֵΪ" << res << endl;
	system("pause");
	return 0;
}