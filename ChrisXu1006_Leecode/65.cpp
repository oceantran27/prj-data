#include <bits/stdc++.h>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <ctype.h>

using namespace std;

bool isNumber(string s){
	
	int i = 0;

	    // skip the whilespaces
	    for(; s[i] == ' '; i++) {}

	    // check the significand
	    if(s[i] == '+' || s[i] == '-') i++; // skip the sign if exist

	    int n_nm, n_pt;
	    for(n_nm=0, n_pt=0; (s[i]<='9' && s[i]>='0') || s[i]=='.'; i++)
	        s[i] == '.' ? n_pt++:n_nm++;       
	    if(n_pt>1 || n_nm<1) // no more than one point, at least one digit
	        return false;

	    // check the exponent if exist
	    if(s[i] == 'e') {
	        i++;
	        if(s[i] == '+' || s[i] == '-') i++; // skip the sign

	        int n_nm = 0;
	        for(; s[i]>='0' && s[i]<='9'; i++, n_nm++) {}
	        if(n_nm<1)
	            return false;
	    }

	    // skip the trailing whitespaces
	    for(; s[i] == ' '; i++) {}

	    return s[i]==0;  // must reach the ending 0 of the string
	
}

int main(){
	string s = "0e";
	cout << isNumber(s);
}
