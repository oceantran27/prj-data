#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include<iostream>
#include<vector>
#include<stack>

using namespace std;

//ԭַ,ѡһΪ׼,ǰ벿ֶСڵ,벿 .󷵻ػ׼±
int Partition(vector<int>& nums, int left, int right){
	int mid = nums[right];
	int i = left - 1;
	for (int j = left; j < right; j++){
		//ҵСڵmid
		if (nums[j] <= mid){
			i++;
			//Сڵmidǰ
			swap(nums[i], nums[j]);
		}
	}
	//ѻ׼ֵǰ벿֮
	swap(nums[i+1], nums[right]);
	return i + 1;
}

//ݹʵֿ
void QuickSort1(vector<int>& nums, int left, int right){
	if (left < right){
		int mid = Partition(nums, left, right);
		//ݹǰ벿
		QuickSort1(nums, left, mid-1);
		//ݹ벿
		QuickSort1(nums, mid+1, right);
	}
}

//ǵݹʵ
void QuickSort2(vector<int>& nums, int left, int right){
	if (left < right){
		stack<int> s;
		s.push(left);
		s.push(right);
		while (!s.empty()){
			int r = s.top();
			s.pop();
			int l = s.top();
			s.pop();
			int mid = Partition(nums, l, r);
			//ǰ벿
			if (l < mid - 1){
				s.push(l);
				s.push(mid-1);
			}
			//벿
			if (r > mid + 1){
				s.push(mid+1);
				s.push(r);
			}
		}
	}
}

int main(){
	vector<int> nums1, nums2;
	cout << "ԭ飺" << endl;
	for (int i = 0; i < 200; i++){
		int num = rand() % 200;
		cout << num << " ";
		nums1.push_back(num);
		nums2.push_back(num);
	}
	cout << endl;
	cout << "ݹʵ֣" << endl;
	QuickSort1(nums1, 0, nums1.size()-1);
	for (int i = 0; i < 200; i++)
		cout << nums1[i] << " ";
	cout << endl;
	cout << "ǵݹʵ֣" << endl;
	QuickSort2(nums2, 0, nums2.size() - 1);
	for (int i = 0; i < 200; i++)
		cout << nums2[i] << " ";
	cout << endl;
	while (1);
	return 0;
}