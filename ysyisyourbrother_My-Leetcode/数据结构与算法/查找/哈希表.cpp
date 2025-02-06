#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <string>
#define is_delete "delete"//-2ΪԱɾλõ̽鲻ᱻֹ 
#define is_empty "empty"//-1Ϊգֹ̽ͣ 
#define hash_size 245935//ϣĴСΪ20011
using namespace std;
int Hash(string target)
{
	int value=0;
	for(int i=0;i<target.size();i++)
	{
		value=value*4 + target[i];//õÿַ 
	}
	return value%hash_size;
}
bool insert(string *table,string entry)//һ 
{
	int probe=Hash(entry),//ȡϣֵ
	    increment=1, //ʵֶ̽
	    probe_count=0;//̽ﵽĳһʱͿֹͣ
	while(table[probe]!=is_empty
			&&table[probe]!=is_delete
			&&table[probe]!=entry
			&&probe_count<(hash_size+1)/2){
		probe_count++;
		probe=(probe+increment)%hash_size;//ڱѭ 
		increment+=2;
	}
	if(table[probe]==is_empty||table[probe]==is_delete)
	{
		table[probe]=entry;
		return 1;
	}
	else if(table[probe]==entry)
	{
		cout<<entry<<"ڱѴ"<<endl; 
		return 0;
	}
	else
	{
		cout<<"޷"<<endl;
		return 0;
	}		
}
int search(string *table,string entry)//Ͳ 
{
	int probe=Hash(entry),//ȡϣֵ
	    increment=1, //ʵֶ̽
	    probe_count=0;//̽ﵽĳһʱͿֹͣ
	while(table[probe]!=is_empty
			&&table[probe]!=entry
			&&probe_count<(hash_size+1)/2){
		probe_count++;
		probe=(probe+increment)%hash_size;//ڱѭ 
		increment+=2;
	}
	if(table[probe]==is_empty||!(probe_count<(hash_size+1)/2))
	{
		return hash_size;//ڵʱ򷵻رĴС 
	}
	else
	{
		return probe; 
	}
}
bool Delete(string *table,string entry)
{
	int pos=search(table,entry);
	if(pos==hash_size)
	{
		cout<<"Ԫز,ɾʧ"<<endl;
		return 0;
	}
	else
	{
		table[pos]=is_delete;
		return 1;
	}
}

int main()
{
	string table[hash_size];
	for(int i=0;i<hash_size;i++)
	{
		table[i]=is_empty;
	}
	insert(table,"ysy");
	insert(table,"zy");
	insert(table,"520");
	insert(table,"110");
	insert(table,"990");
	cout<<search(table,"ysy")<<endl;
	Delete(table,"ysy");
	cout<<search(table,"ysy");
	
} 
