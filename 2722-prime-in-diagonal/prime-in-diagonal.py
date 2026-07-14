class Solution:
    def isPrime(self, n):

        if n < 2:
            return False

        for i in range(2, int(n ** 0.5) + 1):
            if n % i == 0:
                return False

        return True

    def diagonalPrime(self, nums):

        n = len(nums)

        ans = 0

        for i in range(n):

            if self.isPrime(nums[i][i]):
                ans = max(ans, nums[i][i])

            if self.isPrime(nums[i][n - i - 1]):
                ans = max(ans, nums[i][n - i - 1])

        return ans