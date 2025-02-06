class Solution:
    def maxProduct(self, words: List[str]) -> int:
        maxVal = 0
        mask = [0] * len(words)
        for j in range(len(words)):
            for c in words[j]:
                mask[j] |= (1 << (ord(c) - ord('a')))
            for i in range(j):
                if mask[i]&mask[j] == 0:
                    maxVal = max(maxVal, len(words[i]) * len(words[j]))
        return maxVal
