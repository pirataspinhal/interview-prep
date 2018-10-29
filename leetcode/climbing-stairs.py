class Solution:
    def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """
        cache = [1 for i in range(n+1)]
        for i in range(2, n+1):
            cache[i] = cache[i-1] + cache[i-2]
        return cache[n]
