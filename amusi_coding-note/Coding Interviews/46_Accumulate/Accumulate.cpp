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
Date:      2018-09-06


Ŀ
1+2+3+...+nҪʹó˳forwhileifelseswitchcaseȹؼּж䣨A?B:C

*****************************************/

class Temp{
public:
    Temp(){++N; Sum+=N;}
    static void Reset() {N=0;Sum=0;}
    static int GetSum() {return Sum;}
private:
    static int N;
    static int Sum;
    
};

// ʼTempе˽б
int Temp::N = 0;
int Temp::Sum = 0;

class Solution {
public:
    
    int Sum_Solution(int n) {
        // way1: öάʵֳ˷
        //bool a[n][n+1];
        //return sizeof(a)>>1;
        
        // way2: 캯ⷨ
        Temp::Reset();
        Temp *a = new Temp[n];    // ѭù캯nΣʵ1+2+...+n
        delete []a;
        a = NULL;
        return Temp::GetSum();
    }
};