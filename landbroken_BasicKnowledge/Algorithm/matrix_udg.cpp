#include <bits/stdc++.h>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
/**
* C++: ڽӾʾ"ͼ(Matrix Undirected Graph)"
*
* @author skywang
* @date 2014/04/19
*/

#include"stdafx.h"
#include <iomanip>
#include <iostream>
#include <vector>
#include"matrix_udg.h"
using namespace std;

/*
* ͼ(Լ)
*/
MatrixUDG::MatrixUDG()
{
	char c1, c2;
	int i, p1, p2;

	// """"
	cout << "input vertex number: ";
	cin >> mVexNum;
	cout << "input edge number: ";
	cin >> mEdgNum;
	// 1<1
	// 2<1 
	// 3ͼ=1++n-1n-1=(1+n-1)*(n-1)/2
	// 4ͼ=n-1
	if (mVexNum < 1 || mEdgNum < 1 || (mEdgNum >(mVexNum * (mVexNum - 1)/2)))
	{
		cout << "input error: invalid parameters!" << endl;
		return;
	}

	// ʼ""
	for (i = 0; i < mVexNum; i++)
	{
		cout << "vertex(" << i << "): ";
		mVexs[i] = readChar();
	}

	// ʼ""
	for (i = 0; i < mEdgNum; i++)
	{
		// ȡߵʼͽ
		cout << "edge(" << i << "): ";
		c1 = readChar();
		c2 = readChar();

		p1 = getPosition(c1);
		p2 = getPosition(c2);
		if (p1 == -1 || p2 == -1)
		{
			cout << "input error: invalid edge!" << endl;
			return;
		}

		mMatrix[p1][p2] = 1;
		mMatrix[p2][p1] = 1;
	}
}

/*
* ͼ(ṩľ)
*
* ˵
*     vexs  -- 
*     vlen  -- ĳ
*     edges -- 
*     elen  -- ĳ
*/
MatrixUDG::MatrixUDG(char vexs[], int vlen, char edges[][2], int elen)
{
	int i, p1, p2;

	// ʼ""""
	mVexNum = vlen;
	mEdgNum = elen;
	// ʼ""
	for (i = 0; i < mVexNum; i++)
		mVexs[i] = vexs[i];

	//ʼ
	memset(mMatrix, 0, sizeof(mMatrix));

	// ʼ""
	for (i = 0; i < mEdgNum; i++)
	{
		// ȡߵʼͽ
		p1 = getPosition(edges[i][0]);
		p2 = getPosition(edges[i][1]);

		mMatrix[p1][p2] = 1;
		mMatrix[p2][p1] = 1;
	}
}

/*
* 
*/
MatrixUDG::~MatrixUDG()
{
}

/*
* chmMatrixеλ
*/
int MatrixUDG::getPosition(char ch)
{
	int i;
	for (i = 0; i<mVexNum; i++)
		if (mVexs[i] == ch)
			return i;
	return -1;
}

/*
* ȡһַ
*/
char MatrixUDG::readChar()
{
	char ch;

	do {
		cin >> ch;
	} while (!((ch >= 'a'&&ch <= 'z') || (ch >= 'A'&&ch <= 'Z')));

	return ch;
}


/*
* ضvĵһڽӶʧ򷵻-1
*/
int MatrixUDG::firstVertex(int v)
{
	int i;

	if (v<0 || v>(mVexNum - 1))
		return -1;

	for (i = 0; i < mVexNum; i++)
		if (mMatrix[v][i] == 1)
			return i;

	return -1;
}

/*
* ضvwһڽӶʧ򷵻-1
*/
int MatrixUDG::nextVertex(int v, int w)
{
	int i;

	if (v<0 || v>(mVexNum - 1) || w<0 || w>(mVexNum - 1))
		return -1;

	for (i = w + 1; i < mVexNum; i++)
		if (mMatrix[v][i] == 1)
			return i;

	return -1;
}

/*
* ͼĵݹʵ
*/
void MatrixUDG::DFS(int i, int *visited)
{
	int w;

	visited[i] = 1;
	cout << mVexs[i] << " ";
	// öڽӶ㡣ûзʹô
	for (w = firstVertex(i); w >= 0; w = nextVertex(i, w))
	{
		if (!visited[w])
			DFS(w, visited);
	}

}

/*
* ͼ
*/
void MatrixUDG::DFS()
{
	int i;
	int visited[MAX];       // ʱ

							// ʼж㶼ûб
	for (i = 0; i < mVexNum; i++)
		visited[i] = 0;

	cout << "DFS: ";
	for (i = 0; i < mVexNum; i++)
	{
		//printf("\n== LOOP(%d)\n", i);
		if (!visited[i])
			DFS(i, visited);
	}
	cout << endl;
}

/*
* Ĳα
*/
void MatrixUDG::BFS()
{
	int head = 0;
	int rear = 0;
	int queue[MAX];     // 
	int visited[MAX];   // ʱ
	int i, j, k;

	for (i = 0; i < mVexNum; i++)
		visited[i] = 0;

	cout << "BFS: ";
	for (i = 0; i < mVexNum; i++)
	{
		if (!visited[i])
		{
			visited[i] = 1;
			cout << mVexs[i] << " ";
			queue[rear++] = i;  // 
		}
		while (head != rear)
		{
			j = queue[head++];  // 
			for (k = firstVertex(j); k >= 0; k = nextVertex(j, k)) //kΪʵڽӶ
			{
				if (!visited[k])
				{
					visited[k] = 1;
					cout << mVexs[k] << " ";
					queue[rear++] = k;
				}
			}
		}
	}
	cout << endl;
}

/*
* ӡͼ
*/
void MatrixUDG::print()
{
	int i, j;

	cout << "Martix Graph:" << endl;
	for (i = 0; i < mVexNum; i++)
	{
		for (j = 0; j < mVexNum; j++)
			cout << mMatrix[i][j] << " ";
		cout << endl;
	}
}


int matrix_udg_main()
{
	char vexs[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G' };
	char edges[][2] = {
		{ 'A', 'C' },
		{ 'A', 'D' },
		{ 'A', 'F' },
		{ 'B', 'C' },
		{ 'C', 'D' },
		{ 'E', 'G' },
		{ 'F', 'G' } };
	int vlen = sizeof(vexs) / sizeof(vexs[0]);
	int elen = sizeof(edges) / sizeof(edges[0]);
	MatrixUDG* pG;

	// Զ"ͼ"()
	//pG = new MatrixUDG();
	// е"ͼ"
	pG = new MatrixUDG(vexs, vlen, edges, elen);

	pG->print();   // ӡͼ
	pG->DFS();     // ȱ
	pG->BFS();     // ȱ

	return 0;
}