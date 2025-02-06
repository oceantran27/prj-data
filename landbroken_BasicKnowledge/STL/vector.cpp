#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include"stdafx.h"
#include<vector>
#include<iostream>
#include"stl_demo.h"
using namespace std;

VectorDemo::VectorDemo()
{
}

VectorDemo::~VectorDemo()
{
}

void VectorDemo::Initial()
{
	//1)Ĺ캯ʼ
	//ʼһsizeΪ0vector
	vector<int> a;

	//2)Ĺ캯ʼ
	//ʼsize,ÿԪֵΪĬֵ
	//ʼ10ĬֵΪ0Ԫ
	vector<int> b(10);    
	//ʼsize,óʼֵ
	//ʼ10ֵΪ1Ԫ
	vector<int> c(10,1);

	//3)ַͨʼ
	int d[5] = { 1,2,3,4,5 };
	//ͨaĵַʼעַǴ05ҿ䣩
	vector<int> e(d, d + 5);

	//4)ͨͬ͵vectorʼ
	vector<int> f(5, 1);
	//ͨaʼ
	vector<int> g(f);

	//5)ͨinsertʼ
	//insertʼʽͬ͵ĵӦʼĩ䣨ҿ䣩ڵֵ뵽vector
	vector<int> a5(6, 6);
	vector<int> b5;
	//a[0]~a[2]뵽bУb.size()0Ϊ3
	b5.insert(b5.begin(), a5.begin(), a5.begin() + 3);

	//insertҲַͨʵֲ
	int a5_2[6] = { 6,6,6,6,6,6 };
	//aԪز뵽b
	b5.insert(b5.begin(), a5_2, a5_2 + 7);

	//⣬insertԲmֵΪnԪ
	//bʼλô66
	b5.insert(b5.begin(), 6, 6);

	//6)ͨcopyֵ
	vector<int> a6(5, 1);
	int a6_2[5] = { 2,2,2,2,2 };
	vector<int> b6(10);

	/*aԪȫbʼλ,ע⿽Ϊa.begin() ~ a.end()ҿ*/
	copy(a6.begin(), a6.end(), b6.begin());

	//Ҳַɵ
	copy(a6_2, a6_2 + 5, b6.begin() + 5);
}

void VectorDemo::Add(int* data,int raw_len,int column_len)
{
	for (size_t i = 0; i < raw_len; i++)
	{
		for (size_t j = 0; j < column_len; j++)
		{
			arr[i].push_back(data[i*column_len +j]);
		}
	}
}

void VectorDemo::ErgodicOutput()
{
	for (size_t i = 0; i < arr.size(); i++)
	{
		for (size_t j = 0; j < arr[0].size();j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}