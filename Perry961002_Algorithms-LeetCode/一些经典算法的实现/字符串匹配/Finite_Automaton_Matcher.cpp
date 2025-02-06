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

//жPkǲPq+aĺ׺(±1ʼ)
bool isPostfix(string &P, int k, int q, char a){
	//մÿһַĺ׺
	if (k == 0)
		return true;
	string target = P.substr(0, q) + a;
	//Ƚ
	for (int i = k - 1; i >= 0; i--){
		if (P[i] != target.back())
			return false;
		target.pop_back();
	}
	return true;
}

//㲢תƺ,Pģʽ,Aַ
vector<unordered_map<char, int>> Compute_Transition(string &P, string &A){
	int m = P.size();
	vector<unordered_map<char, int>> transition(m + 1);
	for (int q = 0; q <= m; q++){
		for (char a : A){
			int k = min(m, q + 1);// 1<= k <= m
			//transition[q][a]ΪPkPq+a׺k
			while (!isPostfix(P, k, q, a))
				k--;
			transition[q][a] = k;
		}
	}
	return transition;
}

//ƥ亯,Tı, transitionתƺ, mԶΨһ״̬
void Finite_Automaton_Matcher(string &T, vector<unordered_map<char, int>>& transition, int m){
	bool flag = false;//־Ƿƥɹ
	int n = T.size();
	int q = 0;//qǳʼ״̬
	for (int i = 0; i < n; i++){
		//õT[i]״̬
		q = transition[q][T[i]];
		//qǽ״̬,Pƥɹ
		if (q == m){
			cout << "Pattern occurs with shift: " << i - m + 1 << endl;
			flag = true;
		}
	}
	if (!flag)
		cout << "Not Fount" << endl;
}

int main(){
	string A = "abc", P = "ababaca", T = "bacbababacaababcababacaaba";
	vector<unordered_map<char, int>> transition_map = Compute_Transition(P, A);
	cout << "תƺΪ" << endl;
	for (int i = 0; i < transition_map.size(); i++){
		for (char a : A){
			cout << transition_map[i][a] << " ";
		}
		cout << endl;
	}
	cout << endl;
	Finite_Automaton_Matcher(T, transition_map, P.size());
	system("pause");
}