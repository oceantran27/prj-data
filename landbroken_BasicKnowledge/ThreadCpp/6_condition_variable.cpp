#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

//ͬеʵ
#include "stdafx.h"

template <typename T>
class SyncQueue
{
private:
	//ݻ
	std::list<T> m_queue;
	//
	std::mutex m_mutex;
	//Ϊ
	std::condition_variable_any m_notFull;
	//Ϊյ
	std::condition_variable_any m_notEmpty;
	//С
	int m_maxsize;

	//жǷΪ,ΪڲԱʹ,ЩڵǰѾϹ,ڼ
	bool IsFull()
	{
		return m_queue.size() == m_maxsize;
	}

	//жǷΪ
	bool IsEmpty()
	{
		return m_queue.empty();
	}
public:
	SyncQueue(int max) :m_maxsize(max) {  }
	//໺
	void Put(const T& x)
	{
		//unique_locklock_guard,Ǻֻʱͷ,ǰ߿ʱͷ
		std::unique_guard<std::mutex> locker(m_mutex);

		//Ϊȴ,򻺳
		while (IsFull())
		{
			std::cout << "data Full" << std::endl;
			//Ϊ,źűȴ,ʱͷm_mutex,Ȼֱnotify_onenotify_allѺȻȡm_mutex
			m_notFull.wait(m_mutex);
		}
		//໺
		m_queue.push_back(x);
		//Ѵڵȴеķǿ
		m_notEmpty.notify_one();
	}

	//ӻȡ
	void Take(T& x)
	{
	    std:unique_guard<std::mutex> locker(m_mutex);

		//ֱʹַ,ڶ˽еEmpty,Ҳдwhileѭж.
		//m_notEmpty.wait(locker, [this] {return !m_queue.empty();});

		//Ϊȴ,ܴӻȡ
		while (IsEmpty())
		{
			std::cout << "data Empty" << std::endl;
			m_notEmpty.wait(m_mutex);
		}
		//ȡ
		x = m_queue.front();
		//ɾȡ
		m_queue.pop_front();
		m_notFull.notify_one();
	}

	bool Empty()
	{
		std::lock_guard<std::mutex> locker(m_mutex);
		return m_queue.empty();
	}

	bool Full()
	{
		std::lock_guard<std::mutex> locker(m_mutex);
		return m_queue.size() == m_maxsize;
	}

	size_t Size()
	{
		std::lock_guard<std::mutex> locker(m_mutex);
		return m_queue.size();
	}
};