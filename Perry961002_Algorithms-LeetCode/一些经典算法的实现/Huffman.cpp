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
#include<queue>
using namespace std;

//Ľڵ
struct TreeNode{
	char key;//ַ
	int freq;//Ƶ
	TreeNode *left, *right;//ӽڵָ
	TreeNode(char k, int f) :key(k), freq(f), left(nullptr), right(nullptr){}
};

//ԶȽϺ,ȶ
struct cmp{
	bool operator() (TreeNode* a, TreeNode* b){
		return a->freq > b->freq;
	}
};

//ӡ
void PrintTree(TreeNode* root, string s){
	if (root == nullptr)
		return;
	//֧Ϊ0
	if (root->left)
		s += '0';
	PrintTree(root->left, s);
	//Ҷӽڵ˾ʹӡ
	if (!root->left && !root->right){
		cout << "ַΪ" << root->key << "	" << "Ϊ" << s << endl;
	}
	s.pop_back();//һַ
	//֧Ϊ1
	if (root->right)
		s += '1';
	PrintTree(root->right, s);
}

//
void Huffman(priority_queue<TreeNode*, vector<TreeNode*>, cmp>& Q){
	while (Q.size() > 1){
		TreeNode* pl = Q.top();//ڵ
		Q.pop();
		TreeNode* pr = Q.top();//ҽڵ
		Q.pop();
		TreeNode* p = new TreeNode('\0', 0);
		p->freq = pl->freq + pr->freq;//½ڵƵ
		//ԭڵӵµĽڵ
		p->left = pl; 
		p->right = pr;
		Q.push(p);
	}
	//while,,ӡ
	string s = "";
	PrintTree(Q.top(), s);
}
int main(){
	cout << "ַ:";
	int num; cin >> num;
	priority_queue<TreeNode*, vector<TreeNode*>, cmp> Q;
	cout << "ַƵ:" << endl;
	for (int i = 0; i < num; i++){
		char c; int count;
		cin >> c >> count;
		TreeNode* tmp = new TreeNode(c, count);
		Q.push(tmp);
	}
	Huffman(Q);
	system("pause");
}