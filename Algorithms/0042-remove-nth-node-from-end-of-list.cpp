// Problem URL : https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/
// Author      : Tanmay Chopade
// Solved On   : 2025-01-30
// Last Updated: [Optional: Last modification date or version number]

/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * Given the head of a linked list, remove the nth node from the end of the list and return its head.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: head = [1,2,3,4,5], n = 2
 * Output: [1,2,3,5]
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * The number of nodes in the list is sz.
 * 1 <= sz <= 30
 * 0 <= Node.val <= 100
 * 1 <= n <= sz
 *
 **************************************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head -> next == NULL)return NULL;
        ListNode *fast = head, *slow = head;
        while(n--){
            fast = fast -> next;
        }
        if(fast == NULL){
            // ListNode *deletenode = head;
            // delete deletenode;    
            // head = head -> next;
            return head -> next;
        }
        while(fast -> next != NULL){
            fast = fast -> next;
            slow = slow -> next;
        }
        ListNode *deletenode = slow -> next;
        slow -> next = slow -> next ->next;
        delete deletenode;
        return head;
    }
};