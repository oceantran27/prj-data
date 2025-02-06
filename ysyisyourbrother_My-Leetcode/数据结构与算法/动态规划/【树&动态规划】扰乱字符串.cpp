#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;
/*򵥵˵s1s2scrambleĻ
ôȻһs1ϵĳl1s1ֳs11s12Σ
ͬs21s22.ôҪôs11s21scrambleĲs12s22scrambleģ
Ҫôs11s22scrambleĲs12s21scrambleġ
Ŀе rgeat  great ˵rgeat ɷֳ rg  eat Σ 
great ɷֳ gr  eat Σrg  gr scrambledģ eat  eat Ȼscrambled
*/
//ݹⷨ 
bool isScramble1(string s1, string s2)
{
    if (s1.size() != s2.size()) return false;
    if (s1 == s2) return true;
    string str1 = s1, str2 = s2;
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    if (str1 != str2) return false;
    
    for (int i = 1; i < s1.size(); ++i) {
	    string s11 = s1.substr(0, i);
	    string s12 = s1.substr(i);
	    string s21 = s2.substr(0, i);
	    string s22 = s2.substr(i);
	    if (isScramble(s11, s21) && isScramble(s12, s22)) return true;
	    s21 = s2.substr(s1.size() - i);
	    s22 = s2.substr(0, s1.size() - i);
	    if (isScramble(s11, s21) && isScramble(s12, s22)) return true;
    }
    return false;
}
bool isScramble2(string s1, string s2)
{
	int n1 = s1.size();
	int n2 = s2.size();
	if (n1 == 0 && n2 == 0)
		return true;
	if (n1 == 0 || n2 == 0)
		return false;
	if (n1 != n2)
		return false;

	vector<vector<vector<bool>>> dp(n1 + 1, vector<vector<bool>>(n2 + 1, vector<bool>(n1 + 1, false)));
	for (int i = 0; i<n1; i++)
		for (int j = 0; j<n2; j++)
			if (s1[i] == s2[j])
				dp[i][j][1] = true;

	for (int len = 2; len <= n1; len++)
	{
		for (int i = 0; i<n1 - len + 1; i++)
			for (int j = 0; j<n2 - len + 1; j++)
				for (int k = 1; k<len; k++)
					dp[i][j][len] = dp[i][j][len] || (dp[i][j][k] && dp[i + k][j + k][len - k])
					|| (dp[i][j + len - k][k] && dp[i + k][j][len - k]);
	}
	return dp[0][0][n1];
}
int main()
{
	string a,b;
	cin>>a>>b;
	cout<<isScramble(a,b);
 } 
