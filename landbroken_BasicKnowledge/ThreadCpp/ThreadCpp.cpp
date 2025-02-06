#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// ThreadCpp.cpp : ̨Ӧóڵ㡣
//

#include "stdafx.h"
#include "ThreadLearning.h"

//̺߳
void func(int a, int b, int c)
{
	std::this_thread::sleep_for(std::chrono::seconds(3));
	cout << a << " " << b << " " << c << endl;
}

int main()
{
	//1 ̴߳
	//hello_world();

	//2 ߳ƶʾ
	//thread_move();

	//3 ʾ
	//mutex_demo();

	//4
	//timed_mutex_demo();

	//5
	//thread_local_demo();

	call_once_demo();

	//ִ̨t2̺߳,ҲΪmainʱ,̺߳δִ쳣
	//std::thread t2(func, 2, 3, 4);
	//t2.detach();
	//cout << "after t2 ,main is runing" << endl;

	//ȡCPUĺ
	cout << "CPU: " << thread::hardware_concurrency() << endl;

	//ע͵׳쳣,Ϊ̶̺߳߳,Ӧñ̶ִ֤̺߳߳ʱȻ.
	//std::thread t_err(func, 3, 4, 5);

    return 0;
}

