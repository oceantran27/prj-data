#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <iostream>
#include <algorithm>
using namespace std; 
int GetMaxDigit(int* arr, int n)
{
	int digit = 1;
	int base = 10;
	for (int i = 0; i < n; i++)//ͳnλ 
	{
		while (arr[i] >= base)
		{	
			++digit;
			base *= 10;
		}
	}
	return digit;
}
void LSDSort(int* arr,int n)//ӵλλ 
{ 
	int base = 1;
	int digit = GetMaxDigit(arr, n);
	int *tmp = new int[n]; 
	while (digit--)//ÿһλҪִһ 
	{
		int count[10] = { 0 };
		//ͳĳһλֵͬĸ
		for (int i = 0; i < 10; i++)
		{
			int index = arr[i] / base % 10;
			count[index]++;
		}
		int start[10] = { 0 };//start[0]һΪ0Ϊ0һǴӵһλÿʼ 
		//ͳƸλͬarrгֵλ
		for (int i = 1; i < 10; i++)
		{
			start[i] = count[i - 1] + start[i - 1];
		}
		//Ͱ
		for (int i = 0; i < n; ++i)
		{
			int index = arr[i] / base % 10;
			tmp[start[index]++] = arr[i];
		}
		//tmpеԪؿԭ
		memcpy(arr, tmp, n*sizeof(int));
		base *= 10;
	}
	delete[] tmp;
}
void Print(int* arr, size_t n)
{
	for (size_t i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main()
{
	int arr[10] = { 123, 234, 543, 324, 568, 975, 547, 672, 783, 239 };
	LSDSort(arr, sizeof(arr) / sizeof(arr[0]));
	Print(arr, sizeof(arr) / sizeof(arr[0]));
 } 

