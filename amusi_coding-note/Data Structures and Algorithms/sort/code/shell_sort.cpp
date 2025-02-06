#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
/* Summary: ϣShell Sort
* Author: Amusi
* Date:   2018-09-23
*
* Reference:
*   https://en.wikipedia.org/wiki/Shellsort
*   https://www.geeksforgeeks.org/shellsort/
*   ϣshell sortԪnԪأȡһincrementСnΪȫԪطΪincrementУоΪincrementԪطͬһУÿһзֱʵֱӲ롣
*
*/

#include <iostream>

// ϣڿٲ
namespace alg{
	template<typename T>
	static void ShellSort(T list[], int n)
	{
		// n/2ΪʼgapȻ𽥼СgapÿСΪϴgapһ룩
		for (int gap = n / 2; gap > 0; gap /= 2){
			// ǰˣÿнв
			for (int i = gap; i < n; i++){
				int temp = list[i];
				int j = 0;
				// 
				for (j = i; j >= gap && list[j - gap]>temp; j -= gap)
					list[j] = list[j - gap];

				list[j] = temp;
			}
		}
	}
}

using namespace std;
using namespace alg;


int main()
{
	int a[8] = { 5, 2, 5, 7, 1, -3, 99, 56 };
	int n = sizeof(a) / sizeof(a[0]);
	ShellSort<int>(a, n);
	for (auto e : a)
		std::cout << e << " ";

	return 0;
}