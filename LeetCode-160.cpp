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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *A = headA, *B = headB, *C;
        int lenA = 0, lenB = 0;
        while(headA){lenA++;headA = headA->next;}
        while(headB){lenB++;headB = headB->next;}
        int deta = abs(lenA - lenB);
        if(lenA > lenB)
            while(deta--) A = A->next;
        if(lenA < lenB)
            while(deta--) B = B->next;
        while(A){
            if(A == B)
                return A;
            A = A->next;
            B = B->next;
        }
        return false;
    }
};