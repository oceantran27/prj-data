#include <bits/stdc++.h>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <string>
#include <vector>

using namespace std;

void combRecur(vector<vector<int> > &comb, vector<int> &tmp, vector<int> &candidates, int index, int target){
	
	if (target < 0){
		return;
	}
	
	else if ( target == 0 ){
		comb.push_back(tmp);
		return;
	}
	
	else{
		for ( int i = index; i < candidates.size(); i++ ){
			
			if ( i > 0 ){
				if ( candidates[i-1] == candidates[i])
					continue;
			}
			if ( candidates[i] > target )
				break;
			tmp.push_back(candidates[i]);
			combRecur(comb, tmp, candidates, i, target - candidates[i]);
			tmp.pop_back();
		}
		return;
	}
}
	
vector<vector<int> > combinationSum(vector<int> &candidates, int target) {
	
	sort(candidates.begin(), candidates.end());
	
	vector<vector<int> > comb;
	vector<int> tmp;
	
	combRecur(comb, tmp, candidates, 0, target);
	return 	comb;
}

int main(){
	int A[] = { 2, 2, 3, 4, 6};
	vector<int> candidates;
	for ( int i = 0; i< 5; i++ )
		candidates.push_back(A[i]);
	
	vector<vector<int> > comb = combinationSum(candidates, 6);
	for ( int i = 0; i < comb.size(); i++ ){
		for ( int j = 0; j < comb[i].size(); j++ )
			cout << comb[i][j] << " ";
		cout << endl;
	}
}
