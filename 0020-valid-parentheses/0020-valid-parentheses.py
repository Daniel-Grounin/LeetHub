class Solution:
    def isValid(self, s: str) -> bool:
        stack = []

        def isEmpty():
            if stack == []:
                return True
            return False

        def peek_stack(stack):
            if stack == []:
                return None
            else:
                return stack[-1]

        for item in s:
            if item in "({[":
                stack.append(item)
                print(f'appended: {item}')
            elif item == ')' and peek_stack(stack) == '(':
                stack.pop()
                print(f'popped: {item}')
            elif item == ']' and peek_stack(stack) == '[':
                stack.pop()
                print(f'popped: {item}')
            elif item == '}' and peek_stack(stack) == '{':
                stack.pop()
                print(f'popped: {item}')
            else:
                return False  # If there's a mismatch or unexpected closing bracket

        print(stack)
        return isEmpty()


