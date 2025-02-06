#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <unordered_map>
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#define is_empty "empty"//գֹ̽ͣ 
#define Hash_size 24593//ϣĴСΪ20011
using namespace std;
int Hash(string target)
{
	int value = 0;
	for (int i = 0; i<target.size(); i++)
	{
		value = value * 4 + target[i];//õÿַ 
	}
	return value % Hash_size;
}
bool insert(string *table, string entry)//һ 
{
	int probe = Hash(entry),//ȡϣֵ
		increment = 1, //ʵֶ̽
		probe_count = 0;//̽ﵽĳһʱͿֹͣ
	while (table[probe] != is_empty
		&& table[probe] != entry
		&& probe_count<(Hash_size + 1) / 2) {
		probe_count++;
		probe = (probe + increment) % Hash_size;//ڱѭ 
		increment += 2;
	}
	if (table[probe] == is_empty)
	{
		table[probe] = entry;
		return 1;
	}
	return 0;
}
int search(string *table, string entry)//Ͳ 
{
	int probe = Hash(entry),//ȡϣֵ
		increment = 1, //ʵֶ̽
		probe_count = 0;//̽ﵽĳһʱͿֹͣ
	while (table[probe] != is_empty
		&& table[probe] != entry
		&& probe_count<(Hash_size + 1) / 2) {
		probe_count++;
		probe = (probe + increment) % Hash_size;//ڱѭ 
		increment += 2;
	}
	if (table[probe] == is_empty || !(probe_count<(Hash_size + 1) / 2))
	{
		return -1;//ڵʱ򷵻-1 
	}
	else
	{
		return probe;
	}
}
int main()
{
	int n, m;
	while (cin >> n && n != 0)
	{
		cin >> m;
		string table[Hash_size];
		for (int i = 0; i < Hash_size; i++)
		{
			table[i] = is_empty;
		}
		string temp;
		int pos;
		int count = 0;
		int hold = n;
		while (hold--)
		{
			cin >> temp;
			transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
			insert(table, temp);
		}
		set<string> arr;
		while (m--)
		{
			cin >> temp;
			transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
			arr.insert(temp);
		}
		set<string>::iterator it = arr.begin();
		for (; it != arr.end(); it++)
		{
			pos = search(table, *it);
			if (pos != -1)
			{
				count++;
			}
		}
		cout << n - count << endl;
	}
}
