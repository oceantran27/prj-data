#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
//
//TreeCpp.cpp : ̨Ӧóڵ㡣
//1֪ʶܽ
//https://blog.csdn.net/xiaoquantouer/article/details/65631708
//2ǳ̸ݽṹ-
//http://www.cnblogs.com/polly333/p/4740355.html
//3C++ʵ
//https://blog.csdn.net/ajay666/article/details/76736333
//4ݽṹ  ĽͱC++ʵ֣
//https://www.jianshu.com/p/6e739de0d206
//5()֮ C++ 
//http://www.cnblogs.com/skywang12345/p/3706821.html
//
#include "stdafx.h"
#include "BiTree.h"
#include "Huffman.h"
using namespace std;

int BinaryTree_test()
{
	BinaryTree<int> tree(1);
	auto root = tree.GetRoot();
	tree.InsertLeftChild(tree.GetRoot(), 2);
	tree.InsertRightChild(tree.GetRoot(), 3);
	tree.InsertLeftChild(tree.GetRoot()->left_node, 4);
	tree.InsertRightChild(tree.GetRoot()->left_node, 5);
	tree.InsertLeftChild(tree.GetRoot()->right_node, 6);
	tree.InsertRightChild(tree.GetRoot()->right_node, 7);
	tree.Insert(8);

	cout << endl << "ǰ" << endl;
	tree.PreOrderTraverse();
	cout << endl << "ǰPreOrderTraverseRecursion" << endl;
	tree.PreOrderTraverseRecursion();
	cout << endl << "InOrderTraverse" << endl;
	tree.InOrderTraverse();
	cout << endl << "InOrderTraverseRecursion" << endl;
	tree.InOrderTraverseRecursion();
	cout << endl << "PostOrderTraverse" << endl;
	tree.PostOrderTraverse();
	cout << endl << "PostOrderTraverseRecursion" << endl;
	tree.PostOrderTraverseRecursion();
	cout << endl << "" << endl;
	tree.LevelOrderTraverse();
	cout << "ߣ" << endl;
	cout << tree.GetHeight(tree.GetRoot()) << endl;

	return 0;
}

int BinarySearchTree_test()
{
	int searchValue[10] = {
		13,8,8,15,6,
		14,9,9,25,25 };
	BinaryTree<int> searchTree;
	for each (int var in searchValue)
	{
		searchTree.Insert(var);
	}
	cout << endl << "" << endl;
	searchTree.LevelOrderTraverse();
	cout << endl << "FindMin" << endl;
	auto searchTreeMin = searchTree.FindMin(searchTree.GetRoot());
	cout << searchTreeMin->value << endl;
	cout << endl << "FindMax" << endl;
	auto searchTreeMax = searchTree.FindMax(searchTree.GetRoot());
	cout << searchTreeMax->value << endl;
	cout << endl << "FindFloor" << endl;
	auto searchTreeNear = searchTree.FindFloor(7, searchTree.GetRoot());
	cout << searchTreeNear->value << endl;
	cout << endl << "Findڣ" << endl;
	auto searchTreeFind1 = searchTree.Find(7, searchTree.GetRoot());
	if (searchTreeFind1 == nullptr)
	{
		cout << "nullptr" << endl;
	}
	else
	{
		cout << searchTreeFind1->value << endl;
	}
	cout << endl << "Find(14, searchTree.GetRoot())" << endl;
	auto searchTreeFind2 = searchTree.Find(14, searchTree.GetRoot());
	if (searchTreeFind2 == nullptr)
	{
		cout << "nullptr" << endl;
	}
	else
	{
		cout << searchTreeFind2->value << endl;
	}

	searchTree.Insert(7);
	searchTree.Insert(16);
	cout << endl << "7,16Ĳ" << endl;
	searchTree.LevelOrderTraverse();
	searchTree.Remove(9, searchTree.GetRoot());
	cout << endl << "Remove(9Ĳ" << endl;
	searchTree.LevelOrderTraverse();
	searchTree.Remove(6, searchTree.GetRoot());
	cout << endl << "Remove(6Ĳ" << endl;
	searchTree.LevelOrderTraverse();
	searchTree.Remove(15, searchTree.GetRoot());
	cout << endl << "Remove(15Ĳ" << endl;
	searchTree.LevelOrderTraverse();

	return 0;
}

int HuffmanTest_test()
{
	int a[] = { 5,6,8,7,15 };
	int i, ilen = sizeof(a) / (sizeof(a[0]));
	Huffman<int>* tree = new Huffman<int>();

	cout << "== : ";
	for (i = 0; i<ilen; i++)
		cout << a[i] << " ";

	tree->create(a, ilen);

	cout << "\n== ǰ: ";
	tree->preOrder();

	cout << "\n== : ";
	tree->inOrder();

	cout << "\n== : ";
	tree->postOrder();
	cout << endl;

	cout << "== ϸϢ: " << endl;
	tree->print();

	// ٶ
	tree->destroy();

	return 0;
}

int main()
{
	BinaryTree_test();
	system("pause");
	return 0;
}

