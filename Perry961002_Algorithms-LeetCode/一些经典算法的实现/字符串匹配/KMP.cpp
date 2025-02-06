#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std;

vector<int> Compute_Prefix(string& P){
	int m = P.size();
	//ǰ׺,P[q] = kʾPq׺ǰ׺Pk
	vector<int> next(m);
	next[0] = 0;
	int k = 0;//ʼ0
	for (int q = 1; q < m; q++){
		//Ƽnext[q]
		while (k > 0 && P[q] != P[k])
			k = next[k-1];
		//PkչPk+1õPq׺
		if (P[q] == P[k])
			k++;
		next[q] = k;
	}
	return next;
}

void KMP_Matcher(string& T, string& P){
	int n = T.size();
	int m = P.size();
	vector<int> next = Compute_Prefix(P);
	//ӡnext
	for (int i = 0; i < m; i++)
		cout << next[i] << " ";
	cout << endl;
	int q = 0;//Ѿƥַ
	for (int i = 0; i < n; i++){
		//ֲƥ,ص֮ǰq
		while (q > 0 && P[q] != T[i])
			q = next[q-1];
		//ƥµַ
		if (P[q] == T[i])
			q ++;
		if (q == m){
			cout << "Pattern occurs with shift: " << i - m + 1 << endl;
			//q
			q = next[m-1];
		}
	}
}

int main(){
	string P = "ababaca", T = "bacbababacaababcababacaaba";
	vector<int> test = Compute_Prefix(P);
	KMP_Matcher(T, P);
	system("pause");
}