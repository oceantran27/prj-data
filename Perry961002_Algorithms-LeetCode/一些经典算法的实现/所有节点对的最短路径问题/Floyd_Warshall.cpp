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

//ӡ·
//Pathǰͼ, i, jյ
void PrintPath(vector<vector<int>>& Path, int i, int j){
	int k = Path[i][j];//ij·jǰڵ
	if (k == -1)
		return;
	else{
		PrintPath(Path, i, k);
		cout << k << "-->";
		PrintPath(Path, k, j);
	}
}

//Floyd㷨
//WʾڽӾ,Pathʾǰͼ
void Floyd_Warshall(vector<vector<int>>& W, vector<vector<int>>& Path){
	/**
	*d(i, j, k)ΪӽڵiڵjнڵȫȡԼ{1, 2,..., k}һ·Ȩ
	*̬תƷΪ:
	*	d(i, j, k) = min(d(i, j, k-1), d(i, k, k-1) + d(k, j, k-1)) k >= 1
	*			   = w(i, j) k == 0
	*/
	int n = W.size();
	for (int k = 0; k < n; k++){
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				if (W[i][j] > W[i][k] + W[k][j]){
					W[i][j] = W[i][k] + W[k][j];
					Path[i][j] = k;//¼·
				}
			}
		}
	}
	//,ӡ·
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (W[i][j] == MAXNUM){
				if (i != j)
					cout << "ڴӽڵ" << i << "ڵ" << j << "·" << endl;
			}
			else if(i != j){
				cout << "" << i << "" << j << "·Ϊ" << W[i][j] << "	·";
				cout << i << "-->";
				PrintPath(Path, i, j);
				cout << j << endl;
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
	Floyd_Warshall(W, Path);
	system("pause");
	return 0;
}