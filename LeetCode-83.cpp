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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)   return head;
        ListNode *curr = head->next;
        ListNode *next = NULL;
        ListNode *prev = head;
        while(curr){
            next = curr->next;
            if(curr->val == prev->val)
                prev->next = next;
            else
                prev = curr;
            curr = next;
        }
        return head;
    }
};