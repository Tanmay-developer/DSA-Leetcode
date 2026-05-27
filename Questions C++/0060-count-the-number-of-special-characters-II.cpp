// Problem URL : https://leetcode.com/problems/count-the-number-of-special-characters-i/description/
// Author      : Tanmay Chopade
// Solved On   : 2026-05-27
// Last Updated: [Optional: Last modification date or version number]

/**************************************************************************************************
You are given a string word. A letter c is called special if it appears both in lowercase and uppercase 
in word, and every lowercase occurrence of c appears before the first uppercase occurrence of c.

Return the number of special letters in word.

 

Example 1:

Input: word = "aaAbcBC"

Output: 3

Explanation:

The special characters are 'a', 'b', and 'c'.

Example 2:

Input: word = "abc"

Output: 0

Explanation:

There are no special characters in word.

Example 3:

Input: word = "AbBCab"

Output: 0

Explanation:

There are no special characters in word.

 

Constraints:

1 <= word.length <= 2 * 105
word consists of only lowercase and uppercase English letters.
**************************************************************************************************/

class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> lastLower(26, -1);
        vector<int> firstUpper(26, -1);

        for(int i = 0; i < word.size(); i++){
            char ch = word[i];
            if(islower(ch))
                lastLower[ch-'a'] = i;
            else{
                if(firstUpper[ch-'A'] == -1)
                firstUpper[ch-'A'] = i;
            }
        }
        int ans = 0;
        for(int i = 0; i < 26; i++)
            if(lastLower[i] != -1 && firstUpper[i] != -1 && lastLower[i] < firstUpper[i])
                ans++;
        return ans;
    }
};