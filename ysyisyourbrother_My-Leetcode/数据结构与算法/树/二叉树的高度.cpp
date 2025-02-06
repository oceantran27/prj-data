#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;
struct BinaryNode
{
    string name;
    int size;
    BinaryNode *left;
    BinaryNode *right;
    BinaryNode( const string & n = "", int s = 0, BinaryNode *lt =NULL, BinaryNode *rt =NULL )
        : name(n), size(s), left( lt ), right( rt ) { };
};
int height(const BinaryNode* root)
{
	if(root==NULL)
		return -1;
	int height=-1,count;//ĸ߶ȴ0ʼ 
	queue<BinaryNode*> q;
	q.push((BinaryNode*)root);
	while(!q.empty())
	{
		BinaryNode *temp;
		count=q.size();
		height++;
		for(int i=0;i<count;i++)
		{
			temp=q.front();
			q.pop();
			if(temp->left!=NULL) q.push(temp->left);
			if(temp->right!=NULL) q.push(temp->right);
		}	
	}
	return height;
}
int main()
{
	
}
