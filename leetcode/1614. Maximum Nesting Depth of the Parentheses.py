
class Solution:
    def maxDepth(self, s: str) -> int:
        depth = 0
        stack = []
        for i in s:
            if i == '(':
                stack.append(i)
            elif i == ')':
                depth = max(depth, len(stack))
                stack.pop()
            

        return depth