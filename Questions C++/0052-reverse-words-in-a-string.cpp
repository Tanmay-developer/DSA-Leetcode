// Problem URL : https://leetcode.com/problems/reverse-words-in-a-string/description/
// Author      : Tanmay Chopade
// Solved On   : 2026-05-23
// Last Updated: [Optional: Last modification date or version number]

/**************************************************************************************************

Problem Description:
-----------------------------------------------------------------------------------------------
Given an input string s, reverse the order of the words.

A word is defined as a sequence of non-space characters. The words in s will be separated by at least 
one space.

Return a string of the words in reverse order concatenated by a single space.

Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned 
string should only have a single space separating the words. Do not include any extra spaces.

 

Example 1:

Input: s = "the sky is blue"
Output: "blue is sky the"
Example 2:

Input: s = "  hello world  "
Output: "world hello"
Explanation: Your reversed string should not contain leading or trailing spaces.
Example 3:

Input: s = "a good   example"
Output: "example good a"
Explanation: You need to reduce multiple spaces between two words to a single space in the reversed string.
 

Constraints:

1 <= s.length <= 104
s contains English letters (upper-case and lower-case), digits, and spaces ' '.
There is at least one word in s.
***************************************************************************************************/

class Solution {
public:
    string reverseWords(string s) {
        istringstream iss(s);
        vector<string> words;
        string word;

        while (iss >> word) {
            words.push_back(word);
        }

        int left = 0, right = words.size() - 1;
        while (left < right) {
            swap(words[left], words[right]);
            left++;
            right--;
        }

        string result;
        for (const string& w : words) {
            if (!result.empty()) {
                result += " ";
            }
            result += w;
        }

        return result;
    }
};