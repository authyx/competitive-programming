# https://leetcode.com/problems/valid-anagram/


#liked the simplicity..

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        return sorted(s) == sorted(t) 

