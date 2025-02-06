#include <bits/stdc++.h>
#include <string>
#include <unordered_map>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <map>
using namespace std;

void print_graph(int graph[][6], int n) {
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << graph[i][j] << "   ";
		}
		cout << endl;
	}
}

void init_graph(int graph[][6], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			graph[i][j] = -1;
		}
	}
}

vector<int> getnext(int graph[][6],int n,int node) {
	vector<int> nodenext;
	for (int i = 0; i < n; i++) {
		if (graph[node][i] > 0) {
			nodenext.push_back(i);
		}
	}
	return nodenext;
}

void print_mostshortpath(int * shortpath, int n) {
	for (int i = 0; i < n; i++) {
		cout << shortpath[i] << "   ";
	}
	cout << endl;
}

//ӿһάn*nͼbeginǳĽ
int *  get_mostshortpath(int graph[][6],int n,int begin){
	//beginӵ·
	int * cur_shortpath = new int[n];
	for (int i = 0; i < n; i++) {
		cur_shortpath[i] = INT_MAX;
	}

	//ʾѾSļϵĽ
	int * finalnode = new int[n];
	for (int i = 0; i < n; i++) {
		finalnode[i] = 0;
	}

	//beginS ,ǵbeginԼ·Ϊ0
	finalnode[begin] = 1;
	cur_shortpath[begin] = 0;

	//һʼ
	vector<int> nodenext = getnext(graph,n,begin);
	for (int i = 0; i < nodenext.size(); i++) {
		int nnode = nodenext[i];
		cur_shortpath[nnode] = graph[begin][nnode];
	}

	//timesʾҪn-1
	for (int times = 1; times < n; times++) {

		// #1 > Ѱcur_shortpathСֵ,ûм뵽S
		int min_node = begin;
		int min_value = INT_MAX;
		for (int i = 0; i < n; i++) {
			if (min_value > cur_shortpath[i] && finalnode[i]==0 ) {
				min_value = cur_shortpath[i];
				min_node = i;
			}
		}

		// #2 > S
		finalnode[min_node] = 1;

		// #3 > ·
		vector<int> newnodenext = getnext(graph, n, min_node);
		for (int i = 0; i < newnodenext.size(); i++) {
			int newnnode = newnodenext[i];
			if ( (cur_shortpath[newnnode] > cur_shortpath[min_node] + graph[min_node][newnnode])) {
				cur_shortpath[newnnode] = cur_shortpath[min_node] + graph[min_node][newnnode];
			}
		}
	}


	return cur_shortpath;

}

int main() {
	//ʼΪɴ
	const int n = 6;
	int begin = 0;
	int graph[n][n];
	init_graph(graph, 6);
	
	//ÿɴ·
	graph[0][2] = 10;
	graph[0][4] = 30;
	graph[0][5] = 100;
	graph[1][2] = 5;
	graph[2][3] = 50;
	graph[3][5] = 10;
	graph[4][3] = 20;
	graph[4][5] = 60;


	int * shortpath=get_mostshortpath(graph, n, begin);

	//print_graph(graph, 6);
	print_mostshortpath(shortpath,n);

	return 0;
}