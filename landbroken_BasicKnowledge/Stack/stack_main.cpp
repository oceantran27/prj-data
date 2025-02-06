#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
// Stack.cpp : ̨Ӧóڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include"StackDemo.h"
using namespace std;



int main()
{
	ArrStack arrS(5);
	//
	cout << "arrS.Push(a):" << endl;
	arrS.Push(1);
	cout << " " << arrS.GetTop() << " ";
	arrS.Push(2);
	cout << " " << arrS.GetTop() << " ";
	arrS.Push(3);
	cout << " " << arrS.GetTop() << " " << endl;
	//ɾ
	cout << "arrS.Pop():" << endl;
	arrS.Pop();
	cout << " " << arrS.GetTop() << " ";
	arrS.Pop();
	cout << " " << arrS.GetTop() << " ";
	try
	{
		arrS.Pop();
		cout << " " << arrS.GetTop() << " " << endl;
	}
	catch (const std::exception& e)
	{
		cout << "Error: " << e.what() << endl;
	}
	//ջ
	cout << "arrS.IsEmpty(): " << arrS.IsEmpty() << " ";

	system("pause");
    return 0;
}

