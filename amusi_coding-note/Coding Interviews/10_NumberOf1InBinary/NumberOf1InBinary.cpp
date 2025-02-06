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
Date:      2018-06-20

Ŀ
һƱʾ1ĸиòʾ


*****************************************/

class Solution {
public:
     int  NumberOf1(int n) {
         int count = 0;
         while(n!= 0){
             ++count;
             n = n & (n - 1);
         }
         return count;
         
     }
};