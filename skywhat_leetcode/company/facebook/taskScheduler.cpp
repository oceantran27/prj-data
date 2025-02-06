#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
/*
 *task scheduler in fixed order
 */

#include<iostream>
#include<vector>

using namespace std;

class Solution{
public:
	int leastInterval(vector<char>& tasks,int n){
		vector<int> m(128,0);
		int time=1;
		for(int i=0;i<tasks.size();++i){
			if(m[tasks[i]]==0){//tasks[i] shows up for the first time
				m[tasks[i]]=time;
				time++;
			}
			else{
				//A A A B B  B  n=2
				//1 4 7 8 11 14
				if(time-m[tasks[i]]<=n){
					time=m[tasks[i]]+n+1;
				}
				m[tasks[i]]=time;
				time++;
			}
		}
		return time-1;
	}
};

//print path
class Solution2{
public:
	int leastInterval(vector<char>& tasks,int n){
		vector<int> m(128,0);
		int time=1;
		for(int i=0;i<tasks.size();++i){
			if(m[tasks[i]]==0){//tasks[i] shows up for the first time
				m[tasks[i]]=time;
				cout<<tasks[i]<<"->";
				time++;
			}
			else{
				//A A A B B  B  n=2
				//1 4 7 8 11 14
				while(time-m[tasks[i]]<=n){
					cout<<"#->";
					time++;
				}
				cout<<tasks[i]<<"->";
				m[tasks[i]]=time;
				time++;
			}
		}
		cout<<"Done."<<endl;
		return time-1;
	}
};

int main(){
	vector<char> tasks={'A','A','A','B','B','B'};
	int n=2;
	Solution2 s;

	int res=s.leastInterval(tasks,n);
	int expected=14;
	cout<<(res==expected)<<endl;

	return 0;
}
