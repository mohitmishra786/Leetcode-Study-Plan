class Solution:
    def reverseWords(self, s: str) -> str:
        l = s.split()
        d = []
        for i in range(len(l)):
            d.append(l[i][::-1])
            
        s = " ".join(d)
        return s
