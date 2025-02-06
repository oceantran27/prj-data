#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
/* Summary: Quick Sort
* Author: Amusi
* Date:   2018-07-28
*
* Reference: 
*   https://en.wikipedia.org/wiki/Quicksort
*	
* quick sortͨһ򽫴бָɶ֣һֵԪؾһֵԪСɷֱּظд˲Դﵽ򡣣̣ǿʹõݹʵ֣
*
*/

#include <iostream>

// ݹ鷨
namespace alg{
	template<typename T>
	static void QuickSort(T list[], int start, int end)
	{
		int i = start;
		int j = end;
		// ֵ棬ȣ>
		if (i >= j)
			return;
		// ׸ֵ׸ֵΪ׼
		// λúҪһҪif i >= jж֮󣬷
		T pivot = list[i];

		// һijֵϵĿ£Ȼֹͣһ
		while (i < j){
			// һѭʵִڻ׼ֵ滻׼λãұСڻ׼ֵλ滻ڻ׼ֵ
			//󣩺ұߵıȽϣ >= pivot, Ҫ󣬲ҪȻj - 1ƣû׼ֵǰһֵȽ; ֵ<pivotôͽλ
			while (i < j && pivot <= list[j])
				--j;
			list[i] = list[j];
			// λú󣬣ңȻںߵֵʼȽϣ <= pivot, Ȼi + 1ĺͺһֵȽ; ֵ>pivotôͽλ
			while (i < j && pivot >= list[i])
				++i;
			list[j] = list[i];
		}
		// бiλΪ׼ֵiжСڻ׼ֵģiұжǴڻ׼ֵģǰ׼ֵΪi֮󲻱
		list[i] = pivot;
		// 
		QuickSort(list, start, i-1);
		// ұ
		QuickSort(list, i+1, end);
	}
}

using namespace std;
using namespace alg;


int main()
{
	int a[8] = { 5, 2, 5, 7, 1, -3, 99, 56 };
	QuickSort<int>(a, 0, sizeof(a)/sizeof(a[0]) - 1);
	for (auto e : a)
		std::cout << e << " ";

	return 0;
}