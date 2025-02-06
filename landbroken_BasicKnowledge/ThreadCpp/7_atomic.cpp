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

struct AtomicCounter {
	std::atomic<int> value;

	void increment()
	{
		++value;
	}

	void decrement()
	{
		--value;
	}

	int get()
	{
		return value;
	}
};