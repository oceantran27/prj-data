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
    	int countStudents(vector<int>& students, vector<int>& sandwiches) {
	        int a[] = {0, 0};
	        for (int i=0;i<students.size();i++)
	            a[students[i]]+=1;
	        int k = 0;
	        while (k < sandwiches.size()){
	            if (a[sandwiches[k]] > 0)
	                a[sandwiches[k]]-=1;
	            else
	                break;
	            k+=1;}
	        return sandwiches.size()-k;
    
    }
};