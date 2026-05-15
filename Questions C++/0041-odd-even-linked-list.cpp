// Problem URL : https://leetcode.com/problems/odd-even-linked-list/description/
// Author      : Tanmay Chopade
// Solved On   : 2025-01-30
// Last Updated: [Optional: Last modification date or version number]

/**************************************************************************************************
 *
 * Problem Description:
 * -----------------------------------------------------------------------------------------------
 * Given the head of a singly linked list, group all the nodes with odd indices together followed by 
 * the nodes with even indices, and return the reordered list.
 * 
 * The first node is considered odd, and the second node is even, and so on.
 * 
 * Note that the relative order inside both the even and odd groups should remain as it was in the input.
 * 
 * You must solve the problem in O(1) extra space complexity and O(n) time complexity.
 *
 * Example:
 * -----------------------------------------------------------------------------------------------
 * Input: head = [1,2,3,4,5]
 * Output: [1,3,5,2,4]
 *
 * Constraints::
 * -----------------------------------------------------------------------------------------------
 * The number of nodes in the linked list is in the range [0, 104].
 * -106 <= Node.val <= 106
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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode *odd = head, *even = head->next, *evenhead = head->next;
        while(even != NULL && even -> next != NULL){
            odd -> next = odd -> next -> next;
            even -> next = even -> next -> next;
            odd = odd ->next;
            even = even -> next;
        }
        odd -> next = evenhead;
        return head;
    }
};