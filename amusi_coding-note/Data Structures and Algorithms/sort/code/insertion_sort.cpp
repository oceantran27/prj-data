#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
/* Summary: Insertion Sort
* Author: Amusi
* Date:   2018-07-16
*
* Reference: 
*   https://en.wikipedia.org/wiki/Insertion_sort
*	
* insertion sortֱֳӲstaright insertion sortǽδԪһ뵽бСδԪأдӺǰɨ裬ҵӦλðȥڴӺǰɨУҪԪŲΪԪṩռ䡣
*
*/

#include <iostream>

// 
namespace alg{
	template<typename T>
	static void InsertionSort(T list[], int length)
	{
		// Ϊ1λÿʼ
		for (int i = 1; i < length; ++i)
		{
			T currentValue = list[i];	// 浱ǰֵ
			int preIndex = i - 1;	// ǰһֵ
			// ѭ: ǰһֵӦԪֵڵǰֵ && ǰһֵڵ0
			while (list[preIndex] > currentValue && preIndex >= 0){
				list[preIndex + 1] = list[preIndex];
				preIndex--;
			}
			list[preIndex + 1] = currentValue;
		}
	}
}

using namespace std;
using namespace alg;


int main()
{
	int a[8] = { 5, 2, 5, 7, 1, -3, 99, 56 };
	InsertionSort<int>(a, 8);
	for (auto e : a)
		std::cout << e << " ";

	return 0;
}