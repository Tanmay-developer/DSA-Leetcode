# Problem URL : https://leetcode.com/problems/count-primes/description/
# Author      : Tanmay Chopade
# Solved On   : 2026-05-26
# Last Updated: [Optional: Last modification date or version number]
'''
/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * Given an integer n, return the number of prime numbers that are strictly less than n.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: n = 10
 * Output: 4
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * 0 <= n <= 5 * 106
 *
 **************************************************************************************************/
'''

class Solution:
    def countPrimes(self, n: int) -> int:
        if n < 2:
            return 0
        ans = 0
        prime = [True] * (n+1)
        prime[0] = prime[1] = False
        for i in range(2, n):
            if prime[i]:
                ans += 1
                for j in range(2*i, n, i):
                    prime[j] = False
        return ans