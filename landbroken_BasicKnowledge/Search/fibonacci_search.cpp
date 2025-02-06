#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
/*
4쳲.cpp

@˼
ҲǶֲҵһ㷨ͨûƽĸѡҵвң
߲Чʡͬأ쳲Ҳһ㷨

۰ңһ㽫Ƚϵkeyֵmid=low+high/2λõԪرȽϣ
ȽϽ

1ȣmidλõԪؼΪ
2>low=mid+1;
3<high=mid-1

쳲۰ҺƣǸ쳲еصзָġ
Ҫʼм¼ĸΪĳ쳲С1n=F(k)-1;

ʼkֵF(k-1)λõļ¼бȽ(mid=low+F(k-1)-1),ȽϽҲΪ

1ȣmidλõԪؼΪ
2>low=mid+1,k-=2;
˵low=mid+1˵ҵԪ[mid+1,high]Χڣ
k-=2 ˵Χ[mid+1,high]ڵԪظΪ
n-(F(k-1))= Fk-1-F(k-1)=Fk-F(k-1)-1=F(k-2)-1
ԿԵݹӦ쳲ҡ
3<high=mid-1,k-=1
˵low=mid+1˵ҵԪ[low,mid-1]Χڣ
k-=1 ˵Χ[low,mid-1]ڵԪظΪF(k-1)-1
ԿԵݹӦ쳲ҡ

@Ӷȷ
£ʱ临ӶΪO(log2n)ӶҲΪO(log2n)
*/

#include "stdafx.h"
#include <memory>
#include  <iostream>
#include<search.h>
using namespace std;

const int max_size = 20;//쳲ĳ

/*һ쳲*/
void Fibonacci(int * F)
{
	F[0] = 0;
	F[1] = 1;
	for (int i = 2;i<max_size;++i)
		F[i] = F[i - 1] + F[i - 2];
}

/*
@brief 쳲ҷ
@
para=aΪҪҵ
para=nΪҪҵ鳤
para=keyΪҪҵĹؼ
*/
int FibonacciSearch(int *a, int n, int key)  
{
	int low = 0;
	int high = n - 1;

	int F[max_size];
	Fibonacci(F);//һ쳲F 

	int k = 0;
	while (n>F[k] - 1)//nλ쳲еλ
		++k;

	int  * temp;//aչF[k]-1ĳ
	temp = new int[F[k] - 1];
	memcpy(temp, a, n * sizeof(int));

	for (int i = n;i<F[k] - 1;++i)
		temp[i] = a[n - 1];

	while (low <= high)
	{
		int mid = low + F[k - 1] - 1;
		if (key<temp[mid])
		{
			high = mid - 1;
			k -= 1;
		}
		else if (key>temp[mid])
		{
			low = mid + 1;
			k -= 2;
		}
		else
		{
			if (mid<n)
				return mid; //˵midΪҵλ
			else
				return n - 1; //mid>=n˵չֵ,n-1
		}
	}
	delete[] temp;
	return -1;
}