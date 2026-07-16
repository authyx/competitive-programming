// old code
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        f = 1
        dex = 0
        if s == "" :
            return 0
        for i in s:
            ret = ""
            for j in s[dex:]:
                if j not in ret:
                    ret += j
                else:
                    break
            if len(ret) > f:
                f = len(ret)
            dex += 1
        return f