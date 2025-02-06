#include <bits/stdc++.h>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
/*
 * insert_interval.cpp
 * Copyright (C) 2013 moondark <liaoxl2012@gmail.com>
 *
 * http://liaoxl.github.io/blog/20131124/leetcode-ii/
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <vector>

using namespace std;

/**
 * Definition for an interval.
 */
 struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

bool isIntersected(Interval a, Interval b)
{
	if(a.start > b.end || b.start > a.end)
	{
		return false;
	}
	return true;
}

class Solution {
public:
    vector<Interval> insert(vector<Interval> &intervals, Interval newInterval) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        	int len=intervals.size();
        	vector<Interval>::iterator it;
        	
        	if(len==0)
        	{
        	    intervals.push_back(newInterval);
        	    return intervals;
        	}
			
			int i,j;
			for(i=0; i<len; i++)
			{
				if(isIntersected(intervals[i], newInterval))
				{
					intervals[i].start=min(intervals[i].start, newInterval.start);
					intervals[i].end=max(intervals[i].end, newInterval.end);
					break;
				}
			}
			if(i==len)
			{
			    if(newInterval.start>intervals[i-1].end)
			    {
				    intervals.push_back(newInterval);
			    }
			    else if(newInterval.end<intervals[0].start)
			    {
			        it=intervals.begin();
			        intervals.insert(it, newInterval);
			    }
			    else 
			    {
			        for(int k=0; k<len; k++)
			        {
			            if(newInterval.start>intervals[k].end && newInterval.end<intervals[k+1].start)
			            {
			                it=intervals.begin()+k+1;
			                intervals.insert(it, newInterval);
			                break;
			            }
			        }
			    }
			}
			else
			{
				for(j=i+1; j<len; j++)
				{
					if(isIntersected(intervals[i],intervals[j]))
					{
						intervals[i].start=min(intervals[i].start, intervals[j].start);
						intervals[i].end=max(intervals[i].end, intervals[j].end);
						it=intervals.begin()+j;
						intervals.erase(it);
						len=len-1;
						j=j-1;
					}
				}
			}

			return intervals;

    }
};

int main(int argc, char* argv[])
{
	
	return 0;
}

