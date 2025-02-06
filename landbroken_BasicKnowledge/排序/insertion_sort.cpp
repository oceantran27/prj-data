#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include "stdafx.h"
#include "sort.h"
#include<math.h>
using namespace std;

/*
@brief ֱӲ
@˼
ͽͬýнһʱ洢ǰֵ
ǰԪرȺʱȰѺԪشʱǰԪصֵŵԪ
λãٵֵ뵽ʵλá

@
ʱ临ӶΪΪʱΪO(n^2)ʱ临ӶΪʱΪO(n)
ƽʱ临ӶΪO(n^2)ռO(1)ȶԣȶ
*/
void InsertionSort(int* data, int length)
{
	int preIndex;
	for (int i = 1; i < length; i++)
	{
		preIndex = i - 1;
		int current = data[i];
		while (preIndex >= 0 && (data[preIndex] > current))
		{
			data[preIndex + 1] = data[preIndex];//һλճռ
			preIndex--;
		}
		data[preIndex + 1] = current;//ȡС
	}
}

//    ϣõֱӲ򣬵dk=1ʱΪֱӲ
//    в
//    ʼʱdkʼÿαȽϲΪdk
void InsertionSort(int* data, int length,int dk)
{
	int preIndex;
	for (int i = dk; i < length; i++)
	{
		preIndex = i - dk;
		int current = data[i];
		while (preIndex >= 0 && (data[preIndex] > current))
		{
			swap(&data[preIndex+dk], &data[preIndex]);//dkλճռ
			preIndex -= dk;
		}
		data[preIndex + dk] = current;//ȡС
	}
}

/*
@brief ֲ
ȽϲĴ۱ȽĻԲöֲҷٱȽϲĴ

//  -------------- ڲ
// ݽṹ ---------- 
// ʱ临Ӷ ---- O(n^2)
// ʱ临Ӷ ---- O(nlogn)
// ƽʱ临Ӷ ---- O(n^2)
// 踨ռ ------ O(1)
// ȶ ------------ ȶ
*/
void InsertionSortDichotomy(int* A, int len)
{
	for (int i = 1; i < len; i++)
	{
		int get = A[i];                  // ץһ˿
		int left = 0;                    // ϵõģԿöַ
		int right = i - 1;               // ұ߽гʼ
		while (left <= right)            // öַλƵλ
		{
			int mid = (left + right) / 2;
			if (A[mid] > get)
				right = mid - 1;
			else
				left = mid + 1;
		}
		for (int j = i - 1; j >= left; j--)    // λұߵƶһλ
		{
			A[j + 1] = A[j];
		}
		A[left] = get;                    // ץƲ
	}
}


/*
@brief ϣ
@describe
Ǽ򵥲ĸĽ档ϣֽС

˼ΪֱӲ˼һСdk,տʼdkΪn/2
вdk=dk/2,ٽвֱdkΪ1ʱһβ򣬴ʱ

ʱ临ӶΪO(n^2)ʱ临ӶΪO(n)ƽʱ临ӶΪO(n^1.3)ռO(1)ȶԣȶ
ϣʱ临Ӷѡȡйأѡȡʵɼʱ临Ӷȡ

*/
void ShellSort(int* data, int n) 
{
	int dk = n / 2;        //    óʼdk
	while (dk >= 1) 
	{
		InsertionSort(data, n, dk);
		dk /= 2;
	} 
}
