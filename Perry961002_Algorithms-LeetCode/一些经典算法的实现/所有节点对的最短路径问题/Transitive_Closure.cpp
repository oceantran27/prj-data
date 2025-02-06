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

//Floyd_Warshall㷨ķڽӾ
void Transitive_Closure(vector<vector<bool>>& G){
	int n = G.size();
	//̬滮
	for (int k = 0; k < n; k++){
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				G[i][j] = G[i][j] || (G[i][k] && G[k][j]);
			}
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (G[i][j] && i != j)
				cout << "ӵ" << i << "" << j << "·ɴ" << endl;
		}
	}
}
int main(){
	int n, m;//ͱ
	cout << "붥ͱ";
	cin >> n >> m;
	vector<vector<bool>> G(n, vector<bool>(n, false));//ڽӾ
	//Խtrue
	for (int i = 0; i < n; i++)
		G[i][i] = true;
	cout << "ߵ,յ㣺" << endl;
	int u, v;
	for (int i = 0; i < m; i++){
		cin >> u >> v ;
		G[u][v] = true;
	}
	Transitive_Closure(G);
	system("pause");
	return 0;
}