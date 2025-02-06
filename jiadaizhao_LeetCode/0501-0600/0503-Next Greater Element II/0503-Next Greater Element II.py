class Solution:
    def nextGreaterElements(self, nums: List[int]) -> List[int]:
        St = []
        n = len(nums)
        result = [-1] * n
        for i in range(2 * n - 1):
            while St and nums[St[-1]] < nums[i % n]:
                result[St.pop()] = nums[i % n]
            St.append(i % n)
        return result
