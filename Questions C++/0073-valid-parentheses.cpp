// Problem URL : https://leetcode.com/problems/valid-parentheses/description/
// Author      : Tanmay Chopade
// Solved On   : 2026-06-02
// Last Updated: [Optional: Last modification date or version number]

/**************************************************************************************************
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the 
input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"

Output: true

Example 2:

Input: s = "()[]{}"

Output: true

Example 3:

Input: s = "(]"

Output: false

Example 4:

Input: s = "([])"

Output: true

Example 5:

Input: s = "([)]"

Output: false

 

Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'.
**************************************************************************************************/

class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(int i =0; i < s.length(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                st.push(s[i]);
            }
            else{
                if(!st.empty()){
                    char top = st.top();
                    if((s[i] == ')' && top == '(') || (s[i] == '}' && top == '{') || (s[i] == ']' && top == '[')){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
        if(st.empty())return true;
        return false;
    }
};