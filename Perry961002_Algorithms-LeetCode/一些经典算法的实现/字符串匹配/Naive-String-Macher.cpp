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

using namespace std;

//tı, pģʽ
void NaiveStringMaching(string t, string p){
	int lent = t.size();
	int lenp = p.size();
	bool flag = false;
	for (int s = 0; s <= lent - lenp; s++){
		for (int i = 0; i < lenp; i++){
			if (p[i] != t[s + i]){
				break;
			}
			if (i == lenp - 1){
				cout << s << endl;
				flag = true;
			}
		}
	}
	if (!flag)
		cout << "Not Found" << endl;
}

int main(){
	string T = "abcdfgfhdgfabcdefjijswfddfhfhasghgashdgafsdtafdtadstfsg";
	string P = "abcdef";
	NaiveStringMaching(T, P);
	system("pause");
}