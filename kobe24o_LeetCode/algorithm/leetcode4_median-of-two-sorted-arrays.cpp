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
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    	int n1 = nums1.size(), n2 = nums2.size(), len;
    	len = n1 + n2;
        vector<int> nv(len);
        int i = 0, j = 0, k = 0;
        while(i < n1 && j < n2)
        {
        	if(nums1[i] < nums2[j])
        		nv[k++] = nums1[i++];
        	else
        		nv[k++] = nums2[j++];
        }
        if(i == n1)
        {
        	while(j < n2)
        		nv[k++] = nums2[j++];
        }
        else
        {
        	while(i < n1)
        		nv[k++] = nums1[i++];
        }
        if(len%2)
        	return nv[len/2];
        return (nv[len/2]+nv[len/2-1])/2.0;
    }
};

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    	int n1 = nums1.size(), n2 = nums2.size(), len;
    	len = n1 + n2;
        vector<int> nv(len);
        int i = 0, j = 0, k, left = -1, right = -1;
        for(k = 0; k <= len/2; ++k)
        {
        	left = right;
        	if(i < n1 && (j >= n2 || nums1[i] < nums2[j]))
        		right = nums1[i++];
        	else
        		right = nums2[j++];
        }
        if(len%2)
        	return right;
        return (left+right)/2.0;        
    }
};

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    	int n1 = nums1.size(), n2 = nums2.size(), len, kth;
    	len = n1 + n2;
    	kth = (len+1)/2;
    	if(len%2)
    		return findKth(nums1,0,n1-1,nums2,0,n2-1,kth);
    	return (findKth(nums1,0,n1-1,nums2,0,n2-1,kth)+findKth(nums1,0,n1-1,nums2,0,n2-1,kth+1))/2.0;      
    }

    int findKth(vector<int>& nums1, int s1, int e1, vector<int>& nums2, int s2, int e2, int kth)
    {
    	int len1 = e1-s1+1;
    	int len2 = e2-s2+1;
    	if(len1 > len2)	//确保传进来的参数len1是较短的数组(它先空)
    		return findKth(nums2,s2,e2,nums1,s1,e1,kth);
    	if(len1 == 0)
    		return nums2[s2+kth-1];
    	if(kth == 1)
    		return min(nums1[s1],nums2[s2]);
    	int i = s1+min(len1,kth/2)-1;
    	int j = s2+min(len2,kth/2)-1;
    	if(nums1[i] > nums2[j])//舍去nums2前面的
    		return findKth(nums1,s1,e1,nums2,j+1,e2,kth-(j-s2+1));
    	else
    		return findKth(nums1,i+1,e1,nums2,s2,e2,kth-(i-s1+1));
    }
};

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(), n2 = nums2.size();
        if(n1 > n2)//确保n1是较短的数组
            return findMedianSortedArrays(nums2, nums1);
        int left = 0, right = n1, allHalf = (n1+n2)/2, mid1, mid2;
        int lmax1, rmin1, lmax2, rmin2;
        while(left <= right)
        {
            mid1 = left+((right-left)>>1);
            mid2 = allHalf - mid1;
            lmax1 = (mid1-1 >= 0) ? nums1[mid1-1] : INT_MIN;
            rmin1 = (mid1 < n1) ? nums1[mid1] : INT_MAX;
            lmax2 = (mid2-1 >= 0) ? nums2[mid2-1] : INT_MIN;
            rmin2 = (mid2 < n2) ? nums2[mid2] : INT_MAX;

            if(lmax1 > rmin2)
                right = mid1-1;
            else if(lmax2 > rmin1)
                left = mid1+1;
            else
            {
                left = right = mid1;
                break;
            }
        }
        int i = left, j = allHalf-left;
        int l = max(
                    i-1 >= 0 ? nums1[i-1] : INT_MIN,
                    j-1 >= 0 ? nums2[j-1] : INT_MIN);
        int r = min(
                    i < n1 ? nums1[i] : INT_MAX,
                    j < n2 ? nums2[j] : INT_MAX);
        if((n1+n2)%2 == 1)
            return r;
        return (l+r)/2.0;
    }  
};