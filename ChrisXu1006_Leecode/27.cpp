#include <bits/stdc++.h>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

int removeElement(int A[], int n, int elem) {
       int realindex = 0;
       for ( int i = 0; i < n; i++ ){
           if ( A[i] != elem){
               A[realindex] = A[i];
               realindex++;
           }
       }
       return realindex;
   }