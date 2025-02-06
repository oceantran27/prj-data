class Solution:
    def findLongestWord(self, s: str, d: List[str]) -> str:
        def isSubstring(a, b):
            i = j = 0
            while i < len(a) and j < len(b):
                if a[i] == b[j]:
                    i += 1
                j += 1
            return i == len(a)
        
        longestWord = ''
        for word in d:
            if isSubstring(word, s) and (len(word) > len(longestWord) or (len(word) == len(longestWord) and word < longestWord)):
                longestWord = word
        return longestWord
