class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        max_count = 0
        
        for i in range(len(s)):
            seen = set()
            count = 0

            for j in range(i, len(s)):
                if s[j] in seen:
                    break
                seen.add(s[j])
                count += 1
            max_count = max(max_count, count)

        return max_count
