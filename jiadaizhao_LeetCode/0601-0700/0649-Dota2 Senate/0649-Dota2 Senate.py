import collections
class Solution:
    def predictPartyVictory(self, senate: str) -> str:
        Q = collections.deque()
        people = [0, 0]
        ban = [0, 0]
        for s in senate:
            x = s == 'R'
            people[x] += 1
            Q.append(x)
            
        while all(people):
            x = Q.popleft()
            if ban[x]:
                ban[x] -= 1
                people[x] -= 1
            else:
                ban[x ^ 1] += 1
                Q.append(x)
        return "Radiant" if people[1] else "Dire"
