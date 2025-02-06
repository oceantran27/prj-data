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
#include "sort.h"

/*
@brief ѡ
//  -------------- ڲȽ
// ݽṹ ---------- 
// ʱ临Ӷ ---- O(n^2)
// ʱ临Ӷ ---- O(n^2)
// ƽʱ临Ӷ ---- O(n^2)
// 踨ռ ------ O(1)
// ȶ ------------ ȶ

ѡǲȶ㷨ȶСԪA[i]ʱ̡
*/
void SelectSort(int* data, int length)
{
	int minIndex = 0;
	for (int i = 0; i < length - 1; i++)
	{
		minIndex = i;
		for (int j = i + 1; j < length; j++)
		{
			if (*(data + j)<*(data + minIndex))
			{
				minIndex = j;
			}
		}
		// ŵеĩβòпܰȶԴң
		// ѡǲȶ㷨
		swap((data + i), (data + minIndex));

	}
}

#pragma region 

void Swap(int A[], int i, int j)
{
	int temp = A[i];
	A[i] = A[j];
	A[j] = temp;
}

void Heapify(int A[], int i, int size)  // A[i]½жѵ
{
	int left_child = 2 * i + 1;         // 
	int right_child = 2 * i + 2;        // Һ
	int max = i;                        // ѡǰҺ֮еֵ
	if (left_child < size && A[left_child] > A[max])
		max = left_child;
	if (right_child < size && A[right_child] > A[max])
		max = right_child;
	if (max != i)
	{
		Swap(A, i, max);                // ѵǰ(ֱ)ӽڵн
		Heapify(A, max, size);          // ݹãӵǰ½жѵ
	}
}

int BuildHeap(int A[], int n)           // ѣʱ临ӶO(n)
{
	int heap_size = n;
	for (int i = heap_size / 2 - 1; i >= 0; i--) // ÿһҶ㿪ʼ½жѵ
		Heapify(A, i, heap_size);
	return heap_size;
}

void HeapSort(int* A, int len)
{
	int heap_size = BuildHeap(A, len);    // һ
	while (heap_size > 1)
	{
		// ѣԪظ1δ
		// ѶԪѵһԪػӶȥһԪ
		// ˴пܰѺԪصȶԴңԶǲȶ㷨
		Swap(A, 0, --heap_size);
		Heapify(A, 0, heap_size);     // µĶѶԪؿʼ½жѵʱ临ӶO(logn)
	}
}

#pragma endregion