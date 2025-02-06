#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
// λ.cpp : ̨Ӧóڵ㡣
//

#include "stdafx.h"
#include "BitOperation.h"
#include<iostream>
using namespace std;

int main()
{
	//ӦĶλΪλĽֵΪ1Ϊ0
	//11 & 3=3
	cout << (11 & 3) << endl;
	//ӦĶλֻҪһ11Ϊ0
	//11 | 3 = 11
	cout << (11 | 3) << endl;
	//ͬ0֮1
	//11^3 = 8
	//11=0000 1011,3=0000 0011
	//11^3= 0000 1000
	cout << (11 ^ 3) << endl;
	//5=0000 0000 0000 0101,~5= 1111 1111 1111 1010=-6
	cout << (~5) << endl;
    return 0;
}

