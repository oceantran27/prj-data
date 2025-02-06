class Solution:
    def minStickers(self, stickers: List[str], target: str) -> int:
        table = [collections.Counter(sticker) for sticker in stickers]
        lens = {'':0}
        def dfs(target):
            if target in lens:
                return lens[target]
            count = collections.Counter(target)
            minLen = -1
            for t in table:
                if t[target[0]] != 0:
                    diff = count - t
                    nextStr = ''.join([k*v for k, v in diff.items()])
                    curr = dfs(nextStr)
                    if curr != -1 and (minLen == -1 or curr + 1 < minLen):
                        minLen = curr + 1
            lens[target] = minLen
            return minLen
        return dfs(target)
