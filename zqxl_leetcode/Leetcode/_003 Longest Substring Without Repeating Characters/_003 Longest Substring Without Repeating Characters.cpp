#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include <stdio.h>

// ⣬д˼ظַӴ
int lengthOfLongestSubstringWithoutContinuousCharacter(char* s) {
	int i = 1, iMax = 0;
	while (*(++s) != '\0'){
		if (*(s - 1) == *s){
			
			i = 1;
		}
		else{
			i++;
		}
		iMax = iMax < i ? i : iMax;
	}
	return iMax;
}

// 
int checkRepeat(char* s, int p, int q){
	//s[p, p+q)ΪҪظַ
	//صs[p, p+q)ַʼظӴ󳤶
	int i = 0;
	int a[200] = { 0 };
	for (i = 0; i < q; i++){
		if (a[(int)(s[p + i])]){
			break;
		}
		else{
			a[(int)(s[p + i])]++;
		}
	}
	return i;
}
int lengthOfLongestSubstring(char* s) {
	int i = 0, j = 2, max = 0, l = 0;

	if (s[0] == '\0') 
		return 0; 
	else if ((s[1] == '\0')) 
		return 1;
	while (1){
		// жʼַǷΪ\0
		if (s[i + 1] != '\0'){
			j = 1;
			while (1){
				if (s[i + j-1] != '\0'){
					l = checkRepeat(s, i, j);
					max = max < l ? l : max;
					if (l < j) break;
					j++;
				}
				else{
					break;
				}
			}
			i++;
		}
		else{
			break;
		}
	}
	return max;
}

int main(){
	int l=0;
	char s[] = "abcabcbb";
	l = lengthOfLongestSubstring(s);
	return l;
}
