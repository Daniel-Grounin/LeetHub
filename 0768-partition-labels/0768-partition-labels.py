class Solution:
    def partitionLabels(self, s: str) -> List[int]:
        start = 0
        end = 0
        partitions = []
        last_occurrence = {char : index for (index, char) in enumerate(s)}

        for i, char in enumerate(s):
            end = max(end, last_occurrence[char])
            if i == end:
                partitions.append(end - start + 1)
                start = i + 1

        return partitions

