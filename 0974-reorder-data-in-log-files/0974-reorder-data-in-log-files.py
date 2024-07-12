class Solution:
    def reorderLogFiles(self, logs: List[str]) -> List[str]:
        letter_logs = []
        digit_logs = []
        for log in logs:
            identifier, rest = log.split(" ", 1)
            if rest[0].isalpha():
                letter_logs.append((rest, identifier))
            else:
                digit_logs.append((rest, identifier))

        letter_logs.sort(key=lambda x: (x[0], x[1]))

        sorted_logs = [" ".join([identifier, rest]) for rest, identifier in letter_logs] + \
                      [" ".join([identifier, rest]) for rest, identifier in digit_logs]
        return sorted_logs
