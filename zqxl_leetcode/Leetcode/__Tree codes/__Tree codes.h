/*�������������ӡ����*/
#pragma once
#include<stdio.h>
#include<math.h>
#include <memory.h>
#include<malloc.h>



// Definition for a binary tree node.
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// ��nums�������ɶ�����������Ԫ����ΪС�ڵ���999�����������սڵ���numMeansNull��ʾ��
struct TreeNode *createTreeFromArray(int *nums, int numsSize,int numMeansNull);
// ��ӡ������bt
void bt_print(TreeNode *bt);