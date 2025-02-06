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

const int MAXNUM = 100000;

//Եϼ·Ȩ
vector<vector<int>> Extxnd_Shortest_Paths(vector<vector<int>>& L, vector<vector<int>>& W){
	int n = L.size();
	vector<vector<int>> res(n, vector<int>(n, MAXNUM));
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			for (int k = 0; k < n; k++){
				if (res[i][j] > L[i][k] + W[k][j]){
					res[i][j] = L[i][k] + W[k][j];
				}
			}
		}
	}
	return res;
}

//ʹظƽ
void Faster_APSP(vector<vector<int>>& W){
	int n = W.size();
	int m = 1;
	while (m < n - 1){
		W = Extxnd_Shortest_Paths(W, W);
		m *= 2;
	}
	//,ӡ·
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (W[i][j] == MAXNUM){
				if (i != j)
					cout << "ڴӽڵ" << i << "ڵ" << j << "·" << endl;
			}
			else if (i != j){
				cout << "" << i << "" << j << "·Ϊ" << W[i][j] << endl;
			}
		}
	}
}

int main(){
	int n, m;//ͱ
	cout << "붥ͱ";
	cin >> n >> m;
	vector<vector<int>> W(n, vector<int>(n, MAXNUM));//ڽӾ
	//Խ0
	for (int i = 0; i < n; i++)
		W[i][i] = 0;
	vector<vector<int>> Path(n, vector<int>(n, -1));//ǰͼ
	cout << "ߵ,յ,Ȩأ" << endl;
	int u, v, w;
	for (int i = 0; i < m; i++){
		cin >> u >> v >> w;
		W[u][v] = w;
	}
	Faster_APSP(W);
	system("pause");
	return 0;
}