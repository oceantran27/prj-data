/*�������������ӡ����*/
#pragma once
#include<stdio.h>
#include<vector>
#include<math.h>
#include<malloc.h>

// ��������ֵ�����ֵ��Ԫ�ؽ�����Ϊ�������еĿսڵ�
#define numMeansNull -1

// Definition for a binary tree node.
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// ��nums�������ɶ�����������Ԫ����ΪС�ڵ���999�����������սڵ��Ժ궨��numMeansNull��ʾ��
struct TreeNode *createTreeFromArray(int *nums, int numsSize);
// ��ӡ������bt
void bt_print(TreeNode *bt);