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
#include<search.h>

/*
@brief 1˳

@˵:˳ʺڴ洢ṹΪ˳洢Ӵ洢Ա

@˼
˳ҲΪβң㷨ݽṹαһ˿ʼ
˳ɨ裬νɨ赽ĽؼֵkȽϣʾҳɹ
ɨûҵؼֵkĽ㣬ʾʧܡ

@Ӷȷ
ҳɹʱƽҳΪÿԪصĸȣ 
ASL = 1/n(1+2+3++n) = (n+1)/2 ;
ҲɹʱҪn+1αȽϣʱ临ӶΪO(n);
ԣ˳ҵʱ临ӶΪO(n)
*/
int SequenceSearch(int a[], int value, int n)
{
	int i;
	for (i = 0; i<n; i++)
		if (a[i] == value)
			return i;
	return -1;
}

