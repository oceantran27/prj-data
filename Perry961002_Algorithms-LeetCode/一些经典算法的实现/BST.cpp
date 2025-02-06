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

class BSTNode{
public:
	int val;
	BSTNode* parent;
	BSTNode* left;
	BSTNode* right;
	BSTNode() :val(), parent(nullptr), left(nullptr), right(nullptr){}
	BSTNode(int v) :val(v), parent(nullptr), left(nullptr), right(nullptr){}
};

//һö
void InorderTreeWalk(BSTNode* x){
	if (x != nullptr){
		InorderTreeWalk(x->left);
		cout << x->val << " ";
		InorderTreeWalk(x->right);
	}
	return;
}

//ķǵݹʵ
void InorderUseStack(BSTNode* root){
	stack<BSTNode*> s;
	BSTNode *node = root;
	while (node != nullptr || !s.empty()){
		if (node != nullptr){
			s.push(node);
			node = node->left;
		}
		else{
			node = s.top();
			s.pop();
			cout << node->val << " ";
			node = node->right;
		}
	}
}

//ʹøջ
void InorderMorris(BSTNode* root){
	BSTNode *cur = root, *pre = nullptr;
	while (cur != nullptr){
		//ǰڵ
		if (cur->left == nullptr){
			cout << cur->val << " ";
			//ѵǰڵ㻻
			cur = cur->right;
		}
		else{
			pre = cur->left;
			//ҵǰڵ
			while (pre->right != nullptr && pre->right != cur){
				pre = pre->right;
			}
			//ǰڵûд
			if (pre->right == nullptr){
				//ǰڵ
				pre->right = cur;
				//
				cur = cur->left;
			}
			else{
				//ԭȥ
				pre->right = nullptr;
				cout << cur->val << " ";
				//ѵǰڵ㻻
				cur = cur->right;
			}
		}
	}
}

//ҹؼֵΪkĽڵ
BSTNode* TreeSearch(BSTNode* x, int k){
	if (x == nullptr || x->val == k)//xҪҵĽڵ,Ϊ
		return x;
	if (k < x->val)//
		return TreeSearch(x->left, k);
	else//
		return TreeSearch(x->right, k);
}

//õСڵ
BSTNode* GetMin(BSTNode* x){
	//ڵ
	while (x->left != nullptr)
		x = x->left;
	return x;
}

//ҵڵ
BSTNode* GetMax(BSTNode* x){
	//ҵҲڵ
	while (x != nullptr)
		x = x->right;
	return x;
}

//õ̽ڵ
BSTNode* GetSuccessor(BSTNode* x){
	//еСڵ
	if (x->right != nullptr){
		return GetMin(x->right);
	}
	//̾xײ
	BSTNode* y = x->parent;
	while (y != nullptr && x == y->right){
		x = y;
		y = y->parent;
	}
	return y;
}

//ڵ
void Insert(BSTNode* T, BSTNode* z){
	BSTNode* y = nullptr;
	BSTNode* x = T;
	//ҵҪλ
	while (x != nullptr){
		y = x;
		if (z->val < x->val)
			x = x->left;
		else
			x = x->right;
	}
	//zӵ
	z->parent = y;
	//Tǿ
	if (y == nullptr)
		T = z;
	//ȷzӦĸӽڵ
	else if (z->val < y->val)
		y->left = z;
	else
		y->right = z;
}

//ýڵvȥ滻u
void Transplant(BSTNode* T, BSTNode* u, BSTNode* v){
	if (u->parent == nullptr)
		T = v;
	//ȷuڸ׽ڵĸ
	else if (u == u->parent->left)
		u->parent->left = v;
	else
		u->parent->right = v;
	//vӵ׽ڵ
	if (v != nullptr)
		v->parent = u->parent;
}

//ɾڵz
void Delete(BSTNode* T, BSTNode* z){
	//,ӽڵ
	if (z->left == nullptr)
		Transplant(T, z, z->right);
	//,,ӽڵ
	else if (z->right == nullptr)
		Transplant(T, z, z->left);
	//ڵ㶼
	else{
		//yzĺ̽ڵ
		BSTNode* y = GetMin(z->right);
		//yzĺ
		if (y->parent != z){
			//yҺ滻y
			Transplant(T, y, y->right);
			//zҺӽӵy
			y->right = z->right;
			y->right->parent = y;
		}
		//ú̽ڵyz
		Transplant(T, z, y);
		//zŵy
		y->left = z->left;
		y->left->parent = y;
	}
}
int main(){
	vector<int> num = { 9, 5, 8, 6, 4, 3, 2, 7, 1, 10 };
	BSTNode* root = new BSTNode();
	for (int i = 0; i < num.size(); i++){
		cout << "ֵΪ" << num[i] << "Ľڵ" << endl;
		if (i == 0)
			root->val = num[i];
		else{
			BSTNode* in = new BSTNode(num[i]);
			Insert(root, in);
		}
	}
	cout << "ĶΪ";
	InorderTreeWalk(root);
	//InorderUseStack(root);
	//InorderMorris(root);
	cout << endl;
	int input = 0;
	while (1){
		cout << "һҪڵֵûеĻ-1";
		cin >> input;
		if (input == -1)
			break;
		else{
			BSTNode* in = new BSTNode(input);
			Insert(root, in);
		}
	}
	cout << "µĶΪ";
	InorderTreeWalk(root);
	//InorderUseStack(root);
	//InorderMorris(root);
	cout << endl;
	while (1){
		cout << "һҪɾڵֵûеĻ-1";
		cin >> input;
		if (input == -1)
			break;
		else{
			BSTNode* target = TreeSearch(root, input);
			if (target == nullptr)
				cout << "ڵ㲻" << endl;
			else
				Delete(root, target);
		}
	}
	cout << "µĶΪ";
	InorderTreeWalk(root);
	//InorderUseStack(root);
	//InorderMorris(root);
	cout << endl;
	system("pause");
}