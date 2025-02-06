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
#include<string>
#include<algorithm>

using namespace std;

//Ӵ
string longestPalindrome(string s) {
	//Manacher㷨
	if (s.size() == 0 || s.size() == 1)
		return s;
	//ֽsΪΪĴ
	string news = "&#";
	for (int i = 0; i<s.size(); i++)
	{
		news += s[i];
		news += '#';
	}
	news += '\0';
	int len = news.size();   //´ĳ
	int maxlen = -1;  //¼Ӵĳ
	int maxid = 0; //¼Ӵ
	vector<int> p(len);  //p[i]¼iΪĵӴİ뾶maxlen = p[i] - 1
	int id = 0; //ǰȷ
	int mx = 0;  //ǰܵұ߽±
	for (int i = 1; i<len; i++)
	{
		if (i < mx)  //iڵǰĻӴУȷiΪĵĹɵĻİ뾶
			p[i] = min(mx - i, p[2 * id - i]);  //iidĶԳ±Ϊ2*id-1p[2*id-1]뾶ѾȷݶԳƣp[i]ӦȡСһ
		else
			p[i] = 1;  //ΪӴ
		while (news[i - p[i]] == news[i + p[i]])  //ȷiΪĵİ뾶
			p[i]++;
		if (i + p[i] > mx)  //mxķΧӦømxͶԳ
		{
			id = i;
			mx = i + p[i];
		}
		if (maxlen < p[i] - 1)
		{
			maxlen = p[i] - 1;
			maxid = i;
		}
	}
	string result = "";
	for (int i = maxid - maxlen; i <= maxid + maxlen; i++)
		if (news[i] != '#')
			result += news[i];
	return result;
}

int main(){
	string str;
	cin >> str;
	cout << longestPalindrome(str) << endl;
	system("pause");
	return 0;
}