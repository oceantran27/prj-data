#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int kthGrammar(int N, int K) {
//         Exponential time (really bad algorithm)
//         int ans = 0;
//         long count = 1;
//         dfs(0, 1, count, N, K, ans);
        
//         return ans;
        
        if(N == 1){
            return 0;
        }
        else if(K > pow(2, N-2)){
            int diff = K - pow(2, N-2) - 1;
            if(N%2){
                return kthGrammar(N, pow(2, N-2) - diff);    
            }
            return !kthGrammar(N, pow(2, N-2) - diff);    
        }
        
        return kthGrammar(N-1, K);
        
    }
//     void dfs(int currValue, int row, long int& count, int N, int K, int& ans){
//         if(row == N || count >= K){
//             if(count == K){
//                 ans = currValue;    
//                 count++;
//             }
//             else{
//                 return;    
//             }
//         }
        
//         if(!currValue){
//             dfs(0, row+1, count, N, K, ans);
//             dfs(1, row+1, count, N, K, ans);
//         }
//         else{
//             dfs(1, row+1, count, N, K, ans);
//             dfs(0, row+1, count, N, K, ans);
//         }
//     }
    
};
