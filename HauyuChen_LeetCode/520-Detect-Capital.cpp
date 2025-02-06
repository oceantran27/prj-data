#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

520. Detect Capital

Given a word, you need to judge whether the usage of capitals in it is right or not.

We define the usage of capitals in a word to be right when one of the following cases holds:

All letters in this word are capitals, like "USA".
All letters in this word are not capitals, like "leetcode".
Only the first letter in this word is capital if it has more than one letter, like "Google".
Otherwise, we define that this word doesn't use capitals in a right way.
Example 1:
Input: "USA"
Output: True
Example 2:
Input: "FlaG"
Output: False
Note: The input will be a non-empty word consisting of uppercase and lowercase latin letters.





class Solution {
public:
    bool detectCapitalUse(string word) {
        int flag=0;
        int cnt=0;
        if(word[0]>='a'&&word[0]<='z'){
            flag = 1;
        }
		
        for(int i=0;i<word.size();i++){
            if(word[i]>='A'&&word[i]<='Z'){
                cnt++;
            }
        }
        
        if(flag==1){
            if(cnt!=0){
                return false;
            }else{
                return true;
            }
        }else{
            if(cnt==1 || cnt==word.size()){
                return true;
            }else{
                return false;
            }
        }
    }
};