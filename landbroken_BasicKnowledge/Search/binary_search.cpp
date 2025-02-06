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
#include<search.h>

/*
@brief ֲ
ֲң۰ңѭд
@˵
ԪرģҪȽ

@˼
ҲΪ۰ң㷨øֵkмĹؼֱȽϣмαֳӱҳɹȣٸkмؼֵıȽϽȷһĸӱݹУֱҵҽֱûĽ㡣

@Ӷȷ
£ؼʱȽϴΪlog2(n+1)ʱ临ӶΪO(log2n)

@ע:۰ҵǰҪ˳洢ھ̬ұ
һٱ仯۰ܵõЧʡҪƵ
ִвɾݼ˵άСĹ
ǾͲʹáݽṹ
*/
int BinarySearch(int a[], int value, int n)
{
	int low, high, mid;
	low = 0;  
	high = n - 1;
	while (low <= high)
	{
		//֣۰룩mid=low+1/2*(high-low);
		//mid=(low+high)/2
		//1/2=0mid=low+1/2*(high-low)=low
		mid = low + (high - low) / 2;
		if (a[mid] == value)
		{
			//˵
			return mid;
		}
		if (a[mid] > value)
		{
			//˵һûУյ
			high = mid - 1;
		}
		if (a[mid] < value)
		{
			//˵ǰһûУ
			low = mid + 1;
		}
	}
	//˵û
	return -1;
}

/*
@brief ֲ
ֲңݹ汾
*/
int BinarySearch_Recursion(int a[], int value, int low, int high)
{
	if (low>high)
	{
		//˵û
		return -1;
	}
	int mid = low + (high - low) / 2;
	if (a[mid] == value)
		return mid;
	if (a[mid]>value)
		return BinarySearch_Recursion(a, value, low, mid - 1);
	if (a[mid]<value)
		return BinarySearch_Recursion(a, value, mid + 1, high);
}