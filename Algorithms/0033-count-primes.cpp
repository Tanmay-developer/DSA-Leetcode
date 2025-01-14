// Problem URL : https://leetcode.com/problems/count-primes/description/
// Author      : Tanmay Chopade
// Solved On   : 2025-01-14
// Last Updated: [Optional: Last modification date or version number]

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

class Solution {
public:
    int countPrimes(int n) {
        int ans = 0;
        vector<bool> prime(n+1, true);
        prime[0] = prime[1] = false;
        for(int i = 2 ; i < n ; i++){
            if(prime[i])ans++;
            for(int j = 2*i ; j < n ; j += i)
                prime[j] = false;
        }   
        return ans;
    }
};