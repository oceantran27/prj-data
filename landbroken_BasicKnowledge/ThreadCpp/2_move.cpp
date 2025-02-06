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

/**
* Ҫһ̣߳壩ǲܵģֻmoveƶ壩
* Чƶ,̶߳tڴκ̡߳t1ʾԭtָ̡߳
*/
void thread_move()
{
	std::thread t(func, 2, 3, 4);

	std::thread t1(std::move(t));
	//t.join();//tָ߳ˣԲܵ
	t1.join();

	//ڰ汾=ЧͬmoveѾƳ
	//std::thread t2(func, 2, 3, 4);
	//std::thread t3;
	//t3 = t2;
}