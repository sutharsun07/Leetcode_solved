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
    int count(ListNode* head){
        int c=0;
        while(head != NULL){
            c++;
            head=head->next;
        }
        return c;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int a=count(headA);
        int b=count(headB);
        if(a>b){
            while(headA != NULL && a!=b){
                headA=headA->next;
                a--;
            }
        }
        if(b>a){
            while(headB != NULL && a!=b){
                headB=headB->next;
                b--;
            }
        }
        while(headA != NULL && headB != NULL){
            if(headA == headB){
                return headA;
            }
            headA=headA->next;
            headB=headB->next;
        }
        return NULL;
    }
};