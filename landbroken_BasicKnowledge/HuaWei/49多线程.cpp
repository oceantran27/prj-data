#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "stdafx.h"

string str;
void ThreadFun1(int num)
{
	str += 'A';
}

void ThreadFun2()
{
	str += 'B';
}

void ThreadFun3()
{
	str += 'C';
}

void ThreadFun4()
{
	str += 'D';
}

int test_49()
{
	int i, num;
	while (cin >> num)
	{
		for (i = 0;i<num;i++)
		{
			//УﲻУ
			//thread t1(ThreadFun1,num);
			//t1.join();
			//thread t2(ThreadFun2);
			//t2.join();
			//thread t3(ThreadFun3);
			//t3.join();
			//thread t4(ThreadFun4);
			//t4.join();
			cout << "ABCD";
		}
		cout << endl;
		//cout<<str<<endl;
	}
	return 0;
}