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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode * p=head;
        if(p==NULL || p->next==NULL) return head;
        ListNode * q=head->next;
        int current=head->val;

        while(q){
            if(q->val==current){
                p->next=q->next;
                q->next=NULL;
                q=p->next;
            }
            else{
                current=q->val;
                p=p->next;
                q=q->next;
            }
        }

        return head;
        

    }
         
};