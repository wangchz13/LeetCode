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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *p1 = head, *p2 = head, *last = NULL;
        while(n--) p2 = p2->next;
        if(p2 == NULL) return head->next;
        while(p2){
            last = p1;
            p1 = p1->next;
            p2 = p2->next;
        }
        last->next = p1->next;
        return head;
    }
};