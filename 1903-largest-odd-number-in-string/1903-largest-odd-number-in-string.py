class Solution:
    def largestOddNumber(self, num: str) -> str:
        last_odd = -1

        for i in range(len(num)):
            if int(num[i]) % 2 != 0:
                last_odd = i

        if last_odd == -1:
            return ""

        return num[:last_odd + 1]