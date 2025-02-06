#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
/*
 * distinct_subsequences.cpp
 * Copyright (C) 2013 moondark <liaoxl2012@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>

using namespace std;

class Solution {
public:
    int numDistinct(string S, string T) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        			int slen=S.length();
			int tlen=T.length();
			if(tlen==0)
			{
				return 1;
			}
			else if(slen==0)
			{
				return 0;
			}
			int **p=new int*[tlen+1];
			for(int i=0; i<=tlen; i++)
			{
				p[i]=new int[slen+1];
			}
			for(int i=0; i<=tlen; i++)
			{
				for(int j=0; j<=slen; j++)
				{
					p[i][j]=0;
				}
			}
			p[0][0]=1;
			for(int i=1; i<=tlen; i++)
			{
				p[i][0]=0;
			}
			for(int i=1; i<=slen; i++)
			{
				p[0][i]=1;
			}
			for(int i=1; i<=tlen; i++)
			{
				for(int j=1; j<=slen; j++)
				{
					p[i][j]=p[i][j-1];
					if(T[i-1]==S[j-1])
					{
						p[i][j]+=p[i-1][j-1];
					}
				}
			}
			int res=p[tlen][slen];
			for(int i=0; i<=tlen; i++)
			{
				delete [] p[i];
			}
			delete [] p;
			return res;

    }
};

int main(int argc, char* argv[])
{
	
	return 0;
}

