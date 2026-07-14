from math import gcd

class Solution:

    def firstDigit(self, n):

        while n >= 10:
            n //= 10

        return n

    def countBeautifulPairs(self, nums):

        count = 0

        n = len(nums)

        for i in range(n):

            for j in range(i + 1, n):

                if gcd(self.firstDigit(nums[i]), nums[j] % 10) == 1:
                    count += 1

        return count