class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        mapping = {')': '(', ']': '[', '}': '{'}

        for char in s:
            if char in mapping.values():
                stack.append(char)
                print(f'appended: {char}')
            elif char in mapping.keys():
                if stack == [] or stack[-1] != mapping[char]:
                    return False
                stack.pop()
                print(f'popped: {char}')
            else:
                return False  # In case of invalid characters

        print(stack)
        return not stack 

