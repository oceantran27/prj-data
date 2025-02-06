#include <bits/stdc++.h>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

//viȥnum ⣨ҲĿ¼ 2
void comb(vector<int> &vi,int num,int index,vector<int> cur,vector<vector<int>>& res){
	//֦1
	if(index>vi.size()-1 ){
		return ;
	}
	//֦2
	if(cur.size()>num){
		return ;
	}

	if(index==vi.size()-1){
		if(cur.size()==num){
			res.push_back(cur);
		}
	}

	//ǰԪؼ
	cur.push_back(vi[index]);
	comb(vi,num,index+1,cur,res);

	//
	cur.pop_back();
	comb(vi,num,index+1,cur,res);
}

int vector_sum(vector<int> vi){
	int sum=0;
	for(auto it=vi.begin();it!=vi.end();it++){
		sum=sum+(*it);
	}
	return sum;
}

int main(){
	//int arr[]={1,2,3,4,5,6,7,8,9,10};
	int arr[]={1,5,7,8,9,6,3,11,20,17};
	const int size=10;
	vector<int> vi(arr,arr+size);

	//mʾɵ
	int sum=0;
	for(int i=0;i<10;i++){
		sum=sum+arr[i];
	}
	int m=sum/2;


	vector<vector<int>> res;
	vector<int> cur;
	//ִcomb֮res汣˴ȥsize/2
	comb(vi,size/2,0,cur,res);

	//Ȼresҵһӽsum/2
	int min=abs(vector_sum(res[0])-m);
	for(int i=0;i<res.size();i++){
		int item_sum=abs(vector_sum(res[i])-m);
		if(item_sum<min){
			min=item_sum;
		}
	}

	//ӽsum/2ĺ
	cout<<min<<endl;

	return 0;
}