// Problem URL : https://leetcode.com/problems/valid-palindrome/description/
// Author      : Tanmay Chopade
// Solved On   : 2025-01-13
// Last Updated: [Optional: Last modification date or version number]

/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and 
 * removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters 
 * include letters and numbers.
 * 
 * Given a string s, return true if it is a palindrome, or false otherwise.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: s = "A man, a plan, a canal: Panama"
 * Output: true
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * 1 <= s.length <= 2 * 105
 * s consists only of printable ASCII characters.
 *
 **************************************************************************************************/

class Solution {
public:
    bool isValid(char ch){
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
            return true;
        return false;
    }

    char toLower(char ch){
        if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
            return ch;
        else return ch - 'A' + 'a';
    }

    bool check(string str){
        int s = 0, e = str.length()-1;
        while(s < e)
            if(str[s++] != str[e--])
                return false;
        return true;
    }

    bool isPalindrome(string s) {
        string temp = "";
        for(int i = 0 ; i < s.length(); i++)
            if(isValid(s[i]))
                temp.push_back(s[i]);
        
        for(int i = 0 ; i < temp.length() ; i++)
            temp[i] = toLower(temp[i]);
        
        return check(temp);
    }
};