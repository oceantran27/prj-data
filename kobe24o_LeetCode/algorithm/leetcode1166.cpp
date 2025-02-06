#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class FileSystem {
	unordered_map<string,int> m;
public:
    FileSystem() {
    	m["/"] = 0;
    }
    
    bool createPath(string path, int value) {
    	if(m.count(path+"/")) return false;
    	string tmp = path;
    	while(tmp.back() != '/') 
    		tmp.pop_back();
    	if(!m.count(tmp)) return false;
    	m[path+"/"] = value;
    	return true;
    }
    
    int get(string path) {
    	if(m.count(path+'/'))
    		return m[path+'/'];
    	return -1;
    }
};