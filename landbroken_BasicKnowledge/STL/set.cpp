#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
/*
@introduce
ڲݽṹRed-Black Treeƽ

ڲԪʱԶУѸԪطŵʵλãȷ
ÿڵļֵнڵļֵСнڵļֵ
⣬ȷڵĸ߶ĸ߶ȣ
߶СӶٶ졣

@attention
ظֵͬԪأȡԴ

@function
c++ stlsetԱ:begin()--ָһԪصĵ
c++ stlsetԱ:clear()--Ԫ
c++ stlsetԱ:count()--ĳֵԪصĸ
c++ stlsetԱ:empty()--Ϊգtrue
c++ stlsetԱ:end()--ָһԪصĵ
c++ stlsetԱ:equal_range()--ؼֵȵ޵
c++ stlsetԱ:erase()--ɾеԪ
c++ stlsetԱ:find()--һָ򱻲ҵԪصĵ
c++ stlsetԱ:get_allocator()--ؼϵķ
c++ stlsetԱ:insert()--ڼвԪ
c++ stlsetԱ:lower_bound()--ָڣڣĳֵĵһԪصĵ
c++ stlsetԱ:key_comp()--һԪؼֵȽϵĺ
c++ stlsetԱ:max_size()--ؼɵԪصֵ
c++ stlsetԱ:rbegin()--ָ򼯺һԪصķ
c++ stlsetԱ:rend()--ָ򼯺еһԪصķ
c++ stlsetԱ:size()--ԪصĿ
c++ stlsetԱ:swap()--ϱ
c++ stlsetԱ:upper_bound()--شĳֵԪصĵ
c++ stlsetԱ:value_comp()--һڱȽԪؼֵĺ
*/

#include"stdafx.h"
#include<set>
#include<iostream>
#include"stl_demo.h"
using namespace std;

SetDemo::SetDemo()
{
}

SetDemo::~SetDemo()
{
}

void SetDemo::Insert(int* value,int len)
{
	for (int i = 0; i < len; i++)
	{
		s.insert(value[i]);
	}
}

/*
ǰ
*/
void SetDemo::IteratorOutput()
{
	//ǰ
	//еԪ
	for (it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

/*

*/
void SetDemo::ReverseIteratorOutput()
{
	//ǰ
	//еԪ
	for (rit = s.rbegin(); rit != s.rend(); rit++)
	{
		cout << *rit << " ";
	}
	cout << endl;
}

/*
ɾĳԪ
*/
int SetDemo::ElementDelete(int i)
{
	cout << "before SetDemo::ElementDelete()" << endl;
	this->IteratorOutput();
	s.erase(i);
	return s.size();
}

/*
ɾĳԪ
*/
int SetDemo::IteratorElementDelete()
{
	cout << "before SetDemo::ElementDelete()" << endl;
	this->IteratorOutput();
	s.erase(it);
	return s.size();
}

/*
set
*/
int SetDemo::Clear()
{
	cout << s.size() << endl;
	s.clear();
	cout << s.size() << endl;
	return s.size();
}

/*
ѯvalueǷڣ򷵻һititֵΪfingĽ
*/
bool SetDemo::Find(int value)
{
	set<int>::iterator it;
	it = s.find(value); //ҼֵΪ6Ԫ
	if (it != s.end())
	{
		cout << "Find(" << value << "): " << *it << endl;
		return true;
	}
	else
	{
		cout << "not find it" << endl;
		return false;
	}
}

/*
ҵ⣺ѯvaluesetǲظģ˵find
result>0=0
*/
int SetDemo::Count(int value)
{
	auto result = s.count(value);
	if (!result)
	{
		cout << "does not exist" << endl;
	}
	else
	{
		cout << "Count(" << value << "):" << result << endl;
	}
	return result;
}

bool SetDemo::IsEqual(std::set<int> out)
{
	if (s.size()!=out.size())
	{
		return false;
	}

	std::set<int>::iterator itout;
	itout = out.begin();
	for (it=s.begin(); (it!=s.end())&& (itout!=out.end()); it++, itout++)
	{
		if (*it!=*itout)
		{
			return false;
		}
	}
	return true;
}

std::set<int> SetDemo::GetInnerSet()
{
	return s;
}
