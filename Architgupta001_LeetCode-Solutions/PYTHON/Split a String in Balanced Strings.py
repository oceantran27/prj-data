class Solution:
    def balancedStringSplit(self, s: str) -> int:
        c=cl=cr=0
        for i in s:
            if i == "R":
                cr +=1
            elif i == "L":
                cl+=1
            if cr==cl:
                c+=1
        return c