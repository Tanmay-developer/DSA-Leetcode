// Problem URL : https://leetcode.com/problems/permutation-in-string/description/
// Author      : Tanmay Chopade
// Solved On   : 2025-01-13
// Last Updated: [Optional: Last modification date or version number]

/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.
 * 
 * In other words, return true if one of s1's permutations is the substring of s2.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: s1 = "ab", s2 = "eidbaooo"
 * Output: true
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * 1 <= s1.length, s2.length <= 104
 * s1 and s2 consist of lowercase English letters.
 *
 **************************************************************************************************/

class Solution {
public:

    bool check(int a[26], int b[26]){
        for(int i = 0 ; i < 26 ; i++)
            if(a[i] != b[i])return false;
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int count1[26] = {0};
        for(auto& x:s1)count1[x-'a']++;
        
        int i = 0;
        int windowSize = s1.length();
        int count2[26] = {0};
        while(i < windowSize && i < s2.length())
            count2[s2[i++] - 'a']++;
        
        if(check(count1, count2))return true;

        while(i < s2.length()){
            count2[s2[i]-'a']++;
            count2[s2[i-windowSize]-'a']--;
            i++;
            if(check(count1, count2))return true;
        }
        return false;
    }
};