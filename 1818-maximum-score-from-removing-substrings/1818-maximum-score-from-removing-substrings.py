class Solution:
    def maximumGain(self, s: str, x: int, y: int) -> int:
        def remove_substrings(s, first, second, points):
            stack = []
            score = 0
            for char in s:
                if stack and stack[-1] == first and char == second:
                    stack.pop()
                    score += points
                else:
                    stack.append(char)
            return ''.join(stack), score

        total_points = 0

        if x > y:
            # Remove "ab" first
            remaining_string, points_ab = remove_substrings(s, 'a', 'b', x)
            total_points += points_ab
            # Then remove "ba"
            remaining_string, points_ba = remove_substrings(remaining_string, 'b', 'a', y)
            total_points += points_ba
        else:
            # Remove "ba" first
            remaining_string, points_ba = remove_substrings(s, 'b', 'a', y)
            total_points += points_ba
            # Then remove "ab"
            remaining_string, points_ab = remove_substrings(remaining_string, 'a', 'b', x)
            total_points += points_ab

        return total_points