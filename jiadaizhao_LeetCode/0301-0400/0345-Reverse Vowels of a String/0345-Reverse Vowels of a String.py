class Solution:
    def reverseVowels(self, s: str) -> str:
        l = list(s)
        start = 0
        end = len(l) - 1
        def isVowel(c):
            return c.lower() in 'aeiou'
        while start < end:
            while start < end and not isVowel(l[start]):
                start += 1
            while start < end and not isVowel(l[end]):
                end -= 1
            if start < end:
                l[start], l[end] = l[end], l[start]
                start += 1
                end -= 1
        return ''.join(l)
