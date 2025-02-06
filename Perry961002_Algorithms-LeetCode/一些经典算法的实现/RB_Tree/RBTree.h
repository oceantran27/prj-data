#include<iostream>
#include<vector>

using namespace std;

//����ڵ���ɫ
enum NodeColor{RED, BLACK};

//�ڵ���Ķ���
class RBNode{
public:
	NodeColor color;//��ɫ
	int key;//�ؼ�ֵ
	RBNode *parent;//���׽ڵ�
	RBNode *left;//����
	RBNode *right;//�Һ���
	//�вι��캯��
	RBNode(int k);
};

//������Ķ���
class RB_Tree{
public:
	RBNode *root;//���ڵ�
	//������Ĺ��캯��
	explicit RB_Tree(RBNode *n);

	void LeftRotate(RBNode *x);//��������
	void RightRotate(RBNode *y);//��������

	RBNode* RBTSearch(int k);//��������

	bool RBTInsert(RBNode *z);//���뺯��
	void RBTInsertFixup(RBNode *z);//�����ĵ�������

	RBNode* RBMINIMUM(RBNode *x);//������xΪ������С�ڵ�

	void RBTTansplant(RBNode *u, RBNode *v);//�滻�����ڵ�
	bool RBTDelete(int k);//ɾ��ֵΪk�Ľڵ�
	void RBTDeleteFixup(RBNode *z);//ɾ����ĵ�������

	void InOrderTraverse();//�������
};