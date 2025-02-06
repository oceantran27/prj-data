# -*- coding:utf-8 -*-
# @Python Version: 3.7
# @Time: 2020/6/14 17:54
# @Author: Michael Ming
# @Website: https://michael.blog.csdn.net/
# @File: leetcode0.test.py.py
# @Reference:
from typing import List


class Solution:
    def findDuplicate(self, paths: List[str]) -> List[List[str]]:
        m = {};
        for p in paths:
            i = p.find(' ')
            content, path, file = "","",""
            path = p[0:i]+'/'
            foundcontent = False
            i += 1
            while i < len(p):
                if p[i]=='(':
                    foundcontent = True
                    i += 1
                    continue
                if p[i]==')':
                    if content not in m:
                        m[content] = set()
                    m[content].add(path+file)
                    foundcontent = False
                    content, file = "", ""
                    i += 2
                    continue
                if not foundcontent:
                    file += p[i]
                else:
                    content += p[i]
                i += 1
        ans = []
        for content in m:
            if len(m[content]) >= 2:
                ans.append(list(m[content]))
        return ans


s = Solution()
a = ["root/a 1.txt(abcd) 2.txt(efsfgh)","root/c 3.txt(abdfcd)","root/c/d 4.txt(efggdfh)"]
s.findDuplicate(a)
