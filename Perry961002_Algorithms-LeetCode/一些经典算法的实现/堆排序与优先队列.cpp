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
#include<string>
#include<algorithm>

using namespace std;

//ӽڵ±
int Left(int i){
	return 2 * i + 1;
}

//ӽڵ±
int Right(int i){
	return 2 * (i + 1);
}

//άһrootΪ,ĩβ±Ϊlen
void MaxHeapify(vector<int>& heap, int root, int len){
	int left = Left(root);
	int right = Right(root);
	int largest;//еֵ
	//ȱȽ
	if (left <= len && heap[left] > heap[root])
		largest = left;
	else
		largest = root;
	//Ƚ
	if (right <= len && heap[right] > heap[largest])
		largest = right;
	//ӽڵи
	if (largest != root){
		swap(heap[root], heap[largest]);
		//֮ƻĴ,ݹȥά
		MaxHeapify(heap, largest, len);
	}
}

//ԵϽ
void BuildMaxHeap(vector<int>& heap){
	//һҶڵ˫׽ڵ
	int lastParent = heap.size() / 2 - 1;
	for (int i = lastParent; i >= 0; i--){
		MaxHeapify(heap, i, heap.size()-1);
	}
}

//
void HeapSort(vector<int>& heap){
	//
	BuildMaxHeap(heap);
	//ÿνѶĩβԪؽ
	for (int i = heap.size() - 1; i >= 1; i--){
		swap(heap[0], heap[i]);
		//ΪѶĩβ,ά
		MaxHeapify(heap, 0, i - 1);
	}
}

//ȶеĶͷԪ
int getFront(vector<int>& Q){
	if (Q.empty())
		return INT_MIN;
	else
		return Q[0];
}

//ɾͷԪ
void popMax(vector<int>& Q){
	if (Q.empty())
		cout << "ӿ,ɾ" << endl;
	else{
		swap(Q[0], Q.back());
		Q.pop_back();
		MaxHeapify(Q, 0, Q.size() - 1);
	}
}

//±indexڵֵk
void Update(vector<int>& Q, int index, int k){
	if (k >= Q[index]){
		Q[index] = k;
		//ά
		while (index > 0 && Q[(index - 1)/ 2] < Q[index]){
			swap(Q[(index - 1) / 2], Q[index]);
			index = (index - 1) / 2;
		}
	}
}

//вڵ
void Insert(vector<int>& Q, int k){
	Q.push_back(INT_MIN);
	Update(Q, Q.size()-1, k);
}

int main(){
	int select;
	cout << "ģѡ0, ģȶѡ1,ѡ" << endl;
	cin >> select;
	if (select == 0){
		vector<int> nums;
		cout << "ǰ";
		for (int i = 0; i < 100; i++){
			nums.push_back(rand() % 100);
			cout << nums.back() << " ";
		}
		cout << endl << endl;
		HeapSort(nums);
		cout << "֮";
		for (int i = 0; i < 100; i++)
			cout << nums[i] << " ";
		cout << endl << endl;
	}
	else{
		vector<int> nums;
		cout << "Ҫȶе";
		for (int i = 0; i < 10; i++){
			nums.push_back(rand() % 15);
			cout << nums.back() << " ";
		}
		cout << endl;
		BuildMaxHeap(nums);
		cout << "ԪΪ" << endl;
		for (int i = 0; i < nums.size(); i++)
			cout << nums[i] << " ";
		cout << endl;
		char c;
		cout << "ҪɾͷԪy/n";
		cin >> c;
		if (c == 'y')
			popMax(nums);
		int insert;
		cout << "Ҫ";
		cin >> insert;
		Insert(nums, insert);
		for (int i = 0; i < nums.size(); i++)
			cout << nums[i] << " ";
		cout << endl;
	}
	system("pause");
}