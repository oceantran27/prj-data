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

std::mutex m;

//thread_localζţÿһ̶߳Լĸȫֱʵinstance
//ʵıȫֱơ
thread_local int m_cnt = 0;

/*
m_cntÿ߳Լֵ
*/
void f_thread_local()
{
	while (m_cnt<10)
	{
		m.lock();
		m_cnt++;
		std::chrono::milliseconds sleepDuration(10);
		this_thread::sleep_for(sleepDuration);
		cout << "ID:" << this_thread::get_id() << "val=" << m_cnt << endl;
		m.unlock();
	}
}

void thread_local_demo()
{
	m_cnt = 0;
	std::thread t1(f_thread_local);
	std::thread t2(f_thread_local);
	t1.join();
	t2.join();
}