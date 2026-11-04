class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        closeToOpen = {')': '(', ']': '[', '}': '{'}

        for c in s:
            if c in closeToOpen.values():          # opening bracket
                stack.append(c)
            elif c in closeToOpen:                 # closing bracket
                if not stack or stack[-1] != closeToOpen[c]:
                    return False
                stack.pop()

        return not stack