#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include "stdafx.h"
#include<iostream>
#include<list>
#include"link_list.h"
using namespace std;

SingleCircularLinkedList::SingleCircularLinkedList()
{
	//յѭͷд洢ָȻָͷ
	head = new NODE();
	head->next = head;
	cur = head;
	tail = head;
}

/*
β½
*/
void SingleCircularLinkedList::push_back(const int value)
{
	NODE *add;

	//β巨ѭ
	add = new NODE(value);
	cur->next = add;
	cur = add;

	//һһڵָͷ
	cur->next = head->next;
	tail = head->next;
}

