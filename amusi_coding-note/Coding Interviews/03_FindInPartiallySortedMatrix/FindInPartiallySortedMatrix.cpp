#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*****************************************
Copyright: Amusi
Author:    Amusi
Date:      2018-06-08

Ŀ
һάУÿһжմҵ˳ÿһжմϵµ˳
һһάһжǷи

: άʹѯ
: ѯǷڶά(True, False)


˼·:
	άmatrix, ά: rowsά: cols, ѯֵnum
	1.Ƚάתһάд
	2.жϳʼֵΪ½Ԫmatrix[row][col]row=rows-1, col=0
	3.ά½Ԫmatrix[row][col]ϽԪأֵѯnumбȽϣ
	  matrix[row][col] > num--rowmatrix[row][col] < num++col
	4.ظ3ֱпԱԪء


TODO:
	汾1: ҪΪάкУ̫ܻ

*****************************************/


// 汾1: char[][]ά飨ֶʾ

#include <iostream>

// һ 4*4 Ķά
const int matrix_cols = 4;
int matrix[][matrix_cols] = { { 1, 2, 8, 9 }, { 2, 4, 9, 12 }, { 4, 7, 10, 13 }, {6, 8, 11, 15} };

bool judge_inter_in_array(int search_num, int *matrix, const int matrix_cols, const int matrix_rows);

int main()
{
	int search_num = 9;

	// άתһά鴦
	const int matrix_eles = sizeof(matrix) / sizeof(matrix[0][0]);
	const int matrix_rows = matrix_eles / matrix_cols;

	judge_inter_in_array(search_num, (int*)matrix, matrix_cols, matrix_rows);
	
	
	return 0;
}

/**********************************
: жǷ
: ѯ, ά, , 
: 

***********************************/
bool judge_inter_in_array(int search_num, int *matrix, const int matrix_cols, const int matrix_rows)
{

	bool found = false;
	int row = matrix_rows - 1;
	int col = 0;

	if (matrix!=NULL && matrix_cols > 0 && matrix_rows > 0)
	{
		

		// ޶Χ
		while (col < matrix_cols && row >= 0)
		{
			if (matrix[row*matrix_cols + col] == search_num)
			{
				found = true;
				break;
			}
			else if (matrix[row*matrix_cols + col] < search_num)
				++col;
			else
				--row;
		}
	}
	
	if (found == true)
	{
		std::cout << "True" << std::endl;
		// add: Ԫλ
		std::cout << search_num << " λ "<< row+1 << " У"<< col+1 <<" " <<std::endl;
	}
	else
		std::cout << "False" << std::endl;

	return found;
}

// 汾: vectorά飨ţϵͳʾ

//class Solution {
//public:
//	bool Find(int target, vector<vector<int> > array) {
//		int matrix_rows = array.size();        // ά
//		int matrix_cols = array[0].size();     // ά
//		int row = matrix_rows - 1;
//		int col = 0;
//		// жĶάǷҪ
//		if (matrix_rows == 0 && matrix_cols == 0)
//			return false;
//		// ѭ
//		while (row >= 0 && col < matrix_cols)
//		{    // ȽϵǰԪغʹѯԪشС
//			if (target < array[row][col])
//			{
//				--row;    // 
//			}
//			else if (target > array[row][col])
//			{
//				++col;    // 
//			}
//			else
//				return true;
//		}
//		return false;
//	}
//};