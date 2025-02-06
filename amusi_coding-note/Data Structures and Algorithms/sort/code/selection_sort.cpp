#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
/* Summary: ѡ
* Author: Amusi
* Date:   208-06-22
*
* Reference: 
*   https://en.wikipedia.org/wiki/Selection_sort
*   https://github.com/xtaci/algorithms/blob/master/include/selection_sort.h
* ѡ˵δҵСԪأŵеʼλãȻٴʣδԪмѰСԪأȻŵеĩβԴƣֱԪؾϡ 
*
*/

#include <iostream>

// ѡ
namespace alg{
	template<typename T>
	static void SelectionSort(T list[], int length)
	{
		// ѭ: length-1ΣΪlength-1Ԫú󣬵lengthԪλòٱ仯
		for (int i = 0; i < length-1; ++i)
		{ 
			int minIndex = i;
			// iλãбΪǰi-1ԪѾ
			for (int j = i; j < length; ++j)
			{
				// ÿδδѡСֵУС
				if (list[j] < list[minIndex])
				{
					minIndex = j;
				}
			}
			int temp = list[minIndex];
			list[minIndex] = list[i];
			list[i] = temp;
		}

	}
}

using namespace std;
using namespace alg;


int main()
{
	int a[8] = { 5, 2, 5, 7, 1, -3, 99, 56 };
	SelectionSort<int>(a, 8);
	for (auto e : a)
		std::cout << e << " ";

	return 0;
}