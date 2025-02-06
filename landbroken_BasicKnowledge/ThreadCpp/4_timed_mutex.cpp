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

static std::timed_mutex mutex1;

void work()
{
	//ʱ
	std::chrono::milliseconds timeout(1000);
	unsigned int cnt = 0;
	while (true) {
		//ʱ,100millisecondsʱfalse
		if (mutex1.try_lock_for(timeout)) 
		{
			cout << this_thread::get_id() << ": with the mutex. sleep 250" << endl;
			std::chrono::milliseconds sleepDuration(250);
			this_thread::sleep_for(sleepDuration);
		}
		//ʱִelse
		else 
		{
			cout << this_thread::get_id() << ": without mutex" << endl;

			chrono::milliseconds sleepDuration(100);
			std::this_thread::sleep_for(sleepDuration);

			//һѭִģwith the mutex. sleep 250
			cnt++;
			if (cnt>10)
			{
				cnt = 0;
				mutex1.unlock();
			}
		}
	}
}

int timed_mutex_demo()
{
	std::thread t1(work);
	std::thread t2(work);

	t1.join();
	t2.join();

	return 0;
}