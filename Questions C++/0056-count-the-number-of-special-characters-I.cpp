// Problem URL : https://leetcode.com/problems/count-the-number-of-special-characters-i/description/
// Author      : Tanmay Chopade
// Solved On   : 2026-05-26
// Last Updated: [Optional: Last modification date or version number]

/**************************************************************************************************
You are given a string word. A letter is called special if it appears both in lowercase and uppercase 
in word.

Return the number of special letters in word.

 

Example 1:

Input: word = "aaAbcBC"

Output: 3

Explanation:

The special characters in word are 'a', 'b', and 'c'.

Example 2:

Input: word = "abc"

Output: 0

Explanation:

No character in word appears in uppercase.

Example 3:

Input: word = "abBCab"

Output: 1

Explanation:

The only special character in word is 'b'.

 

Constraints:

1 <= word.length <= 50
word consists of only lowercase and uppercase English letters.
**************************************************************************************************/

class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<int> s(word.begin(), word.end());
        int ans = 0;
        for(char c = 'a'; c <= 'z'; c++)
            if(s.count(c) && s.count(c - 'a' + 'A'))ans++;
        return ans;   
    }
};