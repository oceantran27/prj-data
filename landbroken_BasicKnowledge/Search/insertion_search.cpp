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
#include<math.h>

/*
@brief 3ֵ
@˼
ڶֲ㷨ҵѡĽΪӦѡ񣬿߲Чʡ
ȻֵҲҡ

@עڱϴ󣬶ؼֱֲַȽϾȵĲұ˵ֵ㷨
ƽܱ۰ҪõĶࡣֲ֮ǳȣô
ֵδǺܺʵѡ

@Ӷȷ
ҳɹʧܵʱ临ӶȾΪO(log2(log2n))

@˼
ڽֵ֮ܲǰȿһ⣬Ϊʲô㷨һҪ۰룬
ķ֮һ۸أ

ȷӢֵ顰appleʶֵǷǰҳ
Ǻҳأ顰zooô飿Ȼ
ԲǴм俪ʼ𣬶һĿĵǰ󷭡

ͬģҪȡֵΧ1 ~ 10000 ֮ 100 ԪشСȷֲ
в5 ȻῼǴ±СĿʼҡ

Ϸ۰ֲҷʽӦģҲ˵ɵʽģ
ֲвҵ£

mid=(low+high)/2, mid=low+1/2*(high-low);

ͨȣǿԽҵĵĽΪ£

mid=low+(key-a[low])/(a[high]-a[low])*(high-low)

Ҳǽı1/2ĽΪӦģݹؼ
λãmidֵı仯ؼkeyҲͼӵؼ˱Ƚϴ

*/
int InsertionSearch(int a[], int value, int low, int high)
{
	//ʱa[high] - a[low]=1쳣ǰж
	if (low==high&&a[low]==value)
	{
		return low;
	}
	while (low<high)
	{
		//Ҫdouble㣬
		//(value - a[low])*1.0 / (a[high] - a[low])ܿ0
		//ûиֵʱoffset󸺣ֵ˵û
		int offset = (value - a[low])*1.0 / (a[high] - a[low])*(high - low);
		int mid = low + floor(offset);
		if (offset<0)
		{
			return -1;
		}
		if (a[mid] == value)
		{
			return mid;
		}
		if (a[mid] > value)
		{
			high = mid - 1;
		}
		if (a[mid] < value)
		{
			low = mid + 1;
		}
	}
	//˵û
	return -1;
}

int InsertionSearch_Recursion(int a[], int value, int low, int high)
{
	if (low>high)
	{
		//˵û
		return -1;
	}
	int offset = (value - a[low])*1.0 / (a[high] - a[low])*(high - low);
	int mid = low + floor(offset);
	if (offset<0)
	{
		//˵û
		return -1;
	}
	if (a[mid] == value)
		return mid;
	if (a[mid]>value)
		return InsertionSearch_Recursion(a, value, low, mid - 1);
	if (a[mid]<value)
		return InsertionSearch_Recursion(a, value, mid + 1, high);
}