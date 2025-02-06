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

static std::mutex g_lock;

/*
lockһ std::mutex ֮unlock
Ѿ㲻ٴlock
*/
void lock_unlock()
{
	//
	g_lock.lock();
	cout << "in id: " << this_thread::get_id() << endl;
	this_thread::sleep_for(chrono::seconds(1));
	cout << "out id: " << this_thread::get_id() << endl;
	//
	g_lock.unlock();
}

void f_lock_guard()
{
	//lock_guardڹʱԶ,˳ʱͻԶ.
	lock_guard<std::mutex> lock(g_lock);
	cout << "in id: " << this_thread::get_id() << endl;
	this_thread::sleep_for(chrono::seconds(1));
	cout << "out id: " << this_thread::get_id() << endl;
}

/*
ִ߳˳һģͨԱ֤ͬһʱֻһ߳ʹ
ע̱߳Ƚ٣ִʱ̣ԲҲͬ˳
*/
int mutex_demo()
{
	std::thread t1(lock_unlock);
	std::thread t2(lock_unlock);
	std::thread t3(lock_unlock);

	t1.join();
	t2.join();
	t3.join();

	std::thread t4(f_lock_guard);
	std::thread t5(f_lock_guard);
	std::thread t6(f_lock_guard);

	t4.join();
	t5.join();
	t6.join();

	return 0;
}