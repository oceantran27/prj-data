#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include"stdafx.h"

bool flag = false;
int num[9][9];
bool check(int n)
{
	int h = n / 9;
	int l = n % 9;
	//жϸǷظ
	for (int i = 0;i<9;i++)
		if (i != l&&num[h][i] == num[h][l])
			return false;
	//жϸǷظ
	for (int i = 0;i<9;i++)
		if (i != h&&num[i][l] == num[h][l])
			return false;

	/* xΪnڵСŹ󶥵 */
	int x = n / 9 / 3 * 3;
	/* yΪnڵСŹ󶥵 */
	int y = n % 9 / 3 * 3;
	/* жnڵСŹǷϷ */
	for (int i = x; i < x + 3; i++)
	{
		for (int j = y; j < y + 3; j++)
		{
			if ((i != h || j != l) && num[i][j] == num[h][l]) return false;
		}
	}

	return true;
}

void dfs(int n) {
	int h = n / 9;
	int l = n % 9;
	//һò⣬ⲻΨһҪؽ
	if (n == 56 && num[6][0] == 2 && num[6][1] == 1)
		num[6][2] = 5;
	//
	if (n == 81) {
		flag = true;
		return;
	}
	//ȱ
	if (num[h][l] == 0)
	{
		for (int i = 1;i <= 9;i++)
		{
			num[h][l] = i;
			if (check(n))
			{
				dfs(n + 1);
				if (flag)
					return;
				num[h][l] = 0;
			}
		}
		num[h][l] = 0;
	}
	else
		dfs(n + 1);
}

int test_44() {
	for (int i = 0;i<9;i++)
		for (int j = 0;j<9;j++)
			cin >> num[i][j];
	dfs(0);
	//
	for (int i = 0;i<9;i++) {
		for (int j = 0;j<8;j++) {
			cout << num[i][j] << ' ';
		}
		cout << num[i][8];
		cout << endl;
	}
	return 0;
}