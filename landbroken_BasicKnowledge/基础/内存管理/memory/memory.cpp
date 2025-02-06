#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// memory.cpp : ̨Ӧóڵ㡣
//

#include "stdafx.h"
#include <stdlib.h>
#include <string.h>

const int maxCnt = 4;
#define E_OK 0
#define E_NOT_OK 1

struct Phone
{
	int year;//
	int price;//
	int sales;//
	double profit;//
};

#pragma region c

/**
* malloc̬飬ڴ
*/
Phone* createPhoneArrUseMalloc(Phone* pArr) {
	pArr = (Phone*)malloc(sizeof(struct Phone)*maxCnt);
	//ʼ
	memset(pArr, 0, sizeof(struct Phone)*maxCnt);

	return pArr;
}

Phone* deletePhoneArrWithDelete(Phone* pArr) {
	if (pArr != NULL) {
		free(pArr);
		pArr = NULL;
	}
	return pArr;
}

#pragma endregion

#pragma region cpp

/**
 * new̬飬ڴ
 */
Phone* createPhoneArrUseNew(Phone* pArr) {
	pArr = new Phone[maxCnt];
	//ʼ
	memset(pArr, 0, sizeof(struct Phone)*maxCnt);

	return pArr;
}

Phone* deletePhoneArrWithFree(Phone* pArr) {
	if (pArr != nullptr) {
		delete pArr;
		pArr = nullptr;
	}
	return pArr;
}

#pragma endregion

int setValue(Phone* pArr, size_t size) {
	int begin = 2019;
	for (size_t i = 0;i < size;i++) {
		begin = begin + i;
		pArr[i].year = begin;
		pArr[i].price = 10000 - begin;
		pArr[i].sales = 10 - i;
		pArr[i].profit = ((double)pArr[i].price)*0.3*pArr[i].sales;
	}
	return E_OK;
}

int printAllData(Phone* pArr, size_t size) {
	for (size_t i = 0;i < size;i++) {
		printf_s("year = %d, price = %d, sales=%d, profit=%f\n", 
			pArr[i].year, pArr[i].price, pArr[i].sales, pArr[i].profit);
	}
	return E_OK;
}

int main()
{
	Phone* iphone_xs = nullptr;//cppĿָؼ
	Phone* iphone_x = NULL;//c
	iphone_xs = createPhoneArrUseNew(iphone_xs);
	iphone_x = createPhoneArrUseMalloc(iphone_x);
	setValue(iphone_xs, maxCnt);
	setValue(iphone_x, maxCnt);
	printAllData(iphone_xs, maxCnt);
	printAllData(iphone_x, maxCnt);
	iphone_xs = deletePhoneArrWithDelete(iphone_xs);
	iphone_x = deletePhoneArrWithFree(iphone_x);
    return 0;
}

