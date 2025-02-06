## 题目

给定一个包含 n 个整数的数组 nums，判断 nums 中是否存在三个元素 a，b，c ，使得 a + b + c = 0 ？找出所有满足条件且不重复的三元组。

注意：答案中不可以包含重复的三元组。

```
例如, 给定数组 nums = [-1, 0, 1, 2, -1, -4]，

满足要求的三元组集合为：
[
  [-1, 0, 1],
  [-1, -1, 2]
]
```

## 问题

* 先排序
* 以数组中每个元素为三个数中的第一个，在其后找到满足条件的剩下2个
    - 因为已经排序，为了避免重复，所以相同元素只处理一次（也就是说，如果`nums[i] == nums[i - 1]`，说明以`nums[i]`为第一个元素的情况已经处理过，那么跳过，继续处理下一个数）
* 为了找出剩余2个满足要求`target = 0 - nums[i]`的数，使用两个指针l和r，令`sum = nums[l] + nums[r]`
    - 如果`sum > target`，则将`r`向左移动至第一个不等的元素处
    - 如果`sum < target`，则将`l`向右移动至第一个不等的元素处
    - 否则，满足要求，添加到结果中，并将`l`和`r`都移动至第一个不等的元素处

```c++
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size() < 3) return vector<vector<int>>();
        
        sort(nums.begin(),nums.end());
    
        vector<vector<int>> res;
        
        for(int i = 0;i < nums.size() - 2;i++){
            if(i == 0 || nums[i] != nums[i - 1]){
                int target = 0 - nums[i];
                int l = i + 1,r = nums.size() - 1;
                while(l < r){
                    int sum = nums[l] + nums[r];
                    if(sum < target){
                        while(l < r && nums[l + 1] == nums[l])    l++;
                        l++;
                    }
                    else if(sum > target){
                        while(l < r && nums[r - 1] == nums[r])    r--;
                        r--;
                    }  
                    else{
                        vector<int> triplet = {nums[i],nums[l],nums[r]};
                        res.push_back(triplet);
                        while(l < r && nums[l + 1] == nums[l])    l++;
                        while(l < r && nums[r - 1] == nums[r])    r--;
                        l++;r--;
                    }
                }
            }
        }
        
        return res;
    }
};
```
