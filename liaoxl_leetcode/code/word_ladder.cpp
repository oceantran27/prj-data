#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
/*
 * word_ladder.cpp
 * Copyright (C) 2013 moondark <liaoxl2012@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <queue>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool changeDistance(string start, string end)
    {
        if(start.length()!=end.length()) return false;
        int count=0;
        for(unsigned int i=0; i<start.length(); i++)
        {
            if(start[i]!=end[i])
            {
                count++;
                if(count>1) return false;
            }
        }
        return count==1;
    }

    int ladderLength(string start, string end, unordered_set<string> &dict) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(start==end) return 0;
        if(changeDistance(start,end)) return 2;
        int step=0;
        queue<string> mq;

        mq.push(start);
        while(!mq.empty())
        {
            step+=1;
            int len=mq.size();
            while(len-->0)
            {
                string tmp=mq.front();
                if(changeDistance(tmp,end))
                {
                    return step+1;
                }
				for(int i=0; i<tmp.length(); i++)
				{
					char c=tmp[i];
					for(int j=0; j<25; j++)
					{
						if(tmp[i]-'a'==j) continue;
						tmp[i]='a'+j;
						if(dict.find(tmp)!=dict.end())
						{
							mq.push(tmp);
							dict.erase(tmp);
						} 
					}
					tmp[i]=c;
				}
                mq.pop();
            }
        }
        return 0;
    }
};


int main(int argc, char* argv[])
{
	
	return 0;
}

