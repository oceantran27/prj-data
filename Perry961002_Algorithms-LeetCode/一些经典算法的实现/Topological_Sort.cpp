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
#include<stack>
using namespace std;

//㷨
vector<int> Topological_Sort(vector<vector<int>>& Adj, vector<int>& InDegree){
	stack<int> S;
	vector<int> res;
	//Ϊ0Ľڵջ
	for (int i = 0; i < InDegree.size();i++){
		if (InDegree[i] == 0)
			S.push(i);
	}
	//,
	while (!S.empty()){
		int node = S.top();
		S.pop();
		//ڵĵ
		for (int i : Adj[node]){
			InDegree[i]--;//½ڵϢ
			//Ϊ0,
			if (InDegree[i] == 0)
				S.push(i);
		}
		//nodeΪڵ
		res.push_back(node);
	}
	return res;
}
int main(){
	cout << "ڵߵĸ";
	int n, m;
	cin >> n >> m;
	vector<vector<int>> Adj(n);//ڽӱ
	cout << Adj.size() << endl;
	vector<int> InDegree(n, 0);//ڵ
	cout << "ߵ,յ(ڵŴ0ʼ)" << endl;
	int input1, input2;
	for (int i = 0; i < m; i++){
		cin >> input1 >> input2 ;
		Adj[input1].push_back(input2);
		InDegree[input2]++;
	}
	vector<int> SortRes = Topological_Sort(Adj, InDegree);
	if (SortRes.size() != n){
		cout << "ͼдڻ·," << endl;
	}
	else{
		for (int i : SortRes)
			cout << i << " ";
		cout << endl;
	}
	system("pause");
	return 0;
}