import math
import heapq
class Solution:
    def smallestRange(self, nums: List[List[int]]) -> List[int]:
        minNum = math.inf
        maxNum = -math.inf
        pq = []
        for i, num in enumerate(nums):
            minNum = min(minNum, num[0])
            maxNum = max(maxNum, num[0])
            heapq.heappush(pq, (num[0], i, 0))
        
        result = [minNum, maxNum]
        while pq:
            val, row, col = heapq.heappop(pq)
            if maxNum - val < result[1] - result[0]:
                result[0] = val
                result[1] = maxNum            
            if col == len(nums[row]) - 1:
                break
            col += 1
            maxNum = max(maxNum, nums[row][col])
            heapq.heappush(pq, (nums[row][col], row, col))
        return result
