#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*****************************************
Copyright: Amusi
Author:    Amusi
Date:      2018-07-09


Ŀ
һ󣬰մ˳ʱ˳δӡÿһ֣磬¾ 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 δӡ1,2,3,4,8,12,16,15,14,13,9,5,6,7,11,10.

*****************************************/

class Solution {
public:
    // ˼·: 
    vector<int> printMatrix(vector<vector<int> > matrix) {
        if (matrix.size()==0)
            return matrix[0];
        vector<vector<int>> resultMatrixTemp;
        
        int rows = matrix.size();        // 
        int columns = matrix[0].size();  // 
        // ʼλ
        int start = 0;    // start = start_x = start_y
        //resultMatrix.resize(rows*columns);
        // ݹϵʽж
        while(columns > 2*start && rows > 2*start){
            resultMatrixTemp.push_back(printMatrixInCircle(matrix, start));
            ++start;
        }
        vector<int> resultMatrix;    // ֵ
        for(int i=0; i<resultMatrixTemp.size(); ++i){
            for(int j=0; j<resultMatrixTemp[i].size(); ++j){
                resultMatrix.push_back(resultMatrixTemp[i][j]);
            }
        }
        return resultMatrix;
    }
    
    vector<int> printMatrixInCircle(vector<vector<int> >matrix, int start){
        if (matrix.size()==0)
            return matrix[0];
        vector<int> resultMatrix;
        int rows = matrix.size();
        int columns = matrix[0].size();
        
        int endX = columns-1-start;
        int endY = rows-1-start;
        // Ҵӡһ
        for(int i=start; i<=endX; ++i){
            int number = matrix[start][i];
            resultMatrix.push_back(number);
        }
        // ϵ´ӡһ
        if(start < endY){
            for(int i=start+1; i<=endY; ++i){
                int number = matrix[i][endX];
                resultMatrix.push_back(number);
            }
        }
         // ҵӡһ
        if(start < endX && start < endY){
            for(int i=endX-1; i>=start; i--){
                int number = matrix[endY][i];
                resultMatrix.push_back(number);
            }
        }
         // µϴӡһ
        if(start < endX && start < endY-1){
            for(int i=endY-1; i>=start+1; i--){
                int number = matrix[i][start];
                resultMatrix.push_back(number);
            }
        }
        return resultMatrix;
    }
};