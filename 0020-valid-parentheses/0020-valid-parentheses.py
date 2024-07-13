class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        mapping = {')': '(', ']': '[', '}': '{'}

        for char in s:
            if char in mapping.values():
                stack.append(char)
            elif char in mapping.keys():
                if stack == [] or stack[-1] != mapping[char]:
                    return False
                stack.pop()
            else:
                return False  # In case of invalid characters

        return not stack

