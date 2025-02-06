#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
/*
@brief Լɪ

nΧһȦÿ˷ֱעΪ12...nҪ1Ŵ1ʼ
k˳Ȧһִ1ʼѭֱֻʣһʱ
˼Ϊʤߡ統n=10,k=4ʱγе˷ֱΪ48273109
1655λõΪʤߡnˣ̼ʤ߱
Ҫõѭɡ
*/

#include "stdafx.h"
#include<iostream>
#include<list>
#include"link_list.h"
using namespace std;

/*
@para
n=
k=Ҫеı
*/
void josephu(int n,int k)
{
	NODE *head, *cur, *add, *tail;
	head = new NODE();
	cur = head;

	//β巨ѭ
	for (int i = 1;i <= n;i++)
	{
		add = new NODE();
		add->data = i;
		cur->next = add;
		cur = add;
	}

	//һһڵָͷ
	cur->next = head->next;
	tail = head->next;

	//ʼģ⣨жҪע⣺Ϊ϶ʣһˣ һݵnext
	while (tail->next != tail)
	{
		for (int i = 1;i<k - 1;i++)
		{
			//ÿkһ
			tail = tail->next;
		}
		//ýڵɾ
		tail->next = tail->next->next;
		tail = tail->next;
	}
	cout << "josephu(" << n << "," << k << ") = " << tail->data << endl;
}

