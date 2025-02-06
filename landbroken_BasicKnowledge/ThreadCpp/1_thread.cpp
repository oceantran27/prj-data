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
#include "ThreadLearning.h"

void print_hello()
{
	cout << "hello world" << endl;
}

void print(string str)
{
	cout << str << endl;
}

void hello_world()
{
	string tmp;

	//ǲĵ
	//̶߳t1,̺߳Ϊhello߳t1ڴԶִ
	thread t1(print_hello);
	//t1߳ID
	std::cout << "ID:" << t1.get_id() << std::endl;
	//ȴt1ִ̺߳н
	//join߳,ֱִ̺߳н,̺߳зֵ,ֵ.
	t1.join();
	//t1.join();joinֻһΣڶλ쳣t1߳Ѿִн

	//ĵ
	//̶߳ta,̺߳Ϊprint
	tmp = "A";
	thread ta(print, tmp);
	ta.join();
	tmp = "B";
	thread tb(print, tmp);
	tb.join();
	tmp = "C";
	thread tc(print, tmp);
	tc.join();
}