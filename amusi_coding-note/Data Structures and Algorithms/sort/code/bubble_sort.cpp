#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
/* Summary: ð
* Author: Amusi
* Date:   208-05-27
*
* Reference: 
*	http://en.wikipedia.org/wiki/Bubble_sort
*	https://github.com/xtaci/algorithms/blob/master/include/bubble_sort.h
*   https://zhuanlan.zhihu.com/p/37077924
*
* ð˵ȽڵԪأֵԪؽұߣ෴
*
*/

#include <iostream>

// ðݺ
namespace alg{
	template<typename T>
	static void BubbleSort(T list[], int length)
	{

#if 1
		// 汾1forѭ 
		for (int i = 0; i < length-1; ++i)
		{ 
			for (int j = 0; j < length - i -1; ++j)
			{
				// ԪرȽϴСС
				// if (list[j] < list[j + 1]) : ӴС
				if (list[j] > list[j + 1])
				{
					int temp = list[j + 1];
					list[j + 1] = list[j];
					list[j] = temp;
				}
			}
		}

#else
		// 汾2while+һforѭ
		bool swapped = false;
		while (!swapped)
		{
			swapped = true;
	
			for (int i = 0; i < length - 1; ++i)
			{
				// ԪرȽϴСС
				// if (list[j] < list[j + 1]) : ӴС
				if (list[i] > list[i + 1])
				{
					int temp = list[i + 1];
					list[i + 1] = list[i];
					list[i] = temp;
				}
				swapped = false;
			}
			length--;
		}
			
#endif

	}
}

using namespace std;
using namespace alg;


int main()
{
	int a[8] = { 5, 2, 5, 7, 1, -3, 99, 56 };
	BubbleSort<int>(a, 8);
	for (auto e : a)
		std::cout << e << " ";

	return 0;
}