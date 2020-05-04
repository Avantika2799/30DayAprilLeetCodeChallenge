/*Question-link
https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/529/week-2/3290/
*/

//USING TORTOISE AND HARE APPROACH

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};
