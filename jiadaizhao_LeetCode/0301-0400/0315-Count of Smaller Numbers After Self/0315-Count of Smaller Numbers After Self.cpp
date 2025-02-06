#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) {
            return {};
        }
        
        vector<int> result(n);
        vector<int> index(n);
        for (int i = 0; i < n; ++i) {
            index[i] = i;
        }
        vector<int> temp(n);
        mergeSort(index, 0, n - 1, nums, temp, result);
        return result;
    }
    
private:
    void mergeSort(vector<int>& index, int start, int end, vector<int>& nums, vector<int>& temp, vector<int>& result) {
        if (start < end) {
            int mid = start + (end - start) / 2;
            mergeSort(index, start, mid, nums, temp, result);
            mergeSort(index, mid + 1, end, nums, temp, result);
            merge(index, start, mid, end, nums, temp, result);
        }
    }
    
    void merge(vector<int>& index, int start, int mid, int end, vector<int>& nums, vector<int>& temp, vector<int>& result) {
        int i = start, j = mid + 1;
        int k = start;
        int count = 0;
        while (i <= mid) {
            while (j <= end && nums[index[j]] < nums[index[i]]) {
                ++count;
                temp[k++] = index[j++];
            }
            result[index[i]] += count;
            temp[k++] = index[i++];
        }
        
        while (j <= end) {
            temp[k++] = index[j++];
        }
        
        for (int i = start; i <= end; ++i) {
            index[i] = temp[i];
        }
    }
};

class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) {
            return {};
        }
        
        vector<int> result(n);
        Node* root = nullptr;
        for (int i = n - 1; i >= 0; --i) {
            root = insert(root, nums[i], i, 0, result);
        }
        return result;
    }
    
private:
    struct Node {
        Node *left;
        Node *right;
        int val;
        int sum;
        int dup;
        Node(int v, int s): left(NULL), right(NULL), val(v), sum(s), dup(1){} 
    };
    
    Node* insert(Node* root, int num, int index, int presum, vector<int>& result) {
        if (root == nullptr) {
            root = new Node(num, 0);
            result[index] = presum;
        }
        else if (root->val == num) {
            ++root->dup;
            result[index] = presum + root->sum;
        }
        else if (root->val > num) {
            ++root->sum;
            root->left = insert(root->left, num, index, presum, result);
        }
        else {
            root->right = insert(root->right, num, index, presum + root->dup + root->sum, result);
        }
        return root;
    }
};
