// Problem URL : https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays/description/
// Author      : Tanmay Chopade
// Solved On   : 2025-01-14
// Last Updated: [Optional: Last modification date or version number]

/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * You are given two 0-indexed integer permutations A and B of length n.
 * 
 * A prefix common array of A and B is an array C such that C[i] is equal to the count of numbers that 
 * are present at or before the index i in both A and B.
 * 
 * Return the prefix common array of A and B.
 * 
 * A sequence of n integers is called a permutation if it contains all integers from 1 to n exactly once.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: A = [1,3,2,4], B = [3,1,2,4]
 * Output: [0,2,3,4]
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * 1 <= A.length == B.length == n <= 50
 * 1 <= A[i], B[i] <= n
 * It is guaranteed that A and B are both a permutation of n integers.
 *
 **************************************************************************************************/

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        int counter = 0;
        vector<int> freq(n+1,0);
        vector<int> ans(n,0);
        for(int i = 0 ; i < n ; i++){
            freq[A[i]]++;
            if(freq[A[i]] == 2)counter++;
            freq[B[i]]++;
            if(freq[B[i]] == 2)counter++;
            ans[i] = counter;
        }
        return ans;
    }
};