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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode *newHead = head->next;
        ListNode *tail = head;
        tail->next = swapPairs(newHead->next);
        newHead->next = tail;
        return newHead;
    }
};