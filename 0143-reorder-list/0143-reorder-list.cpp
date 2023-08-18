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
    void reorderList(ListNode* head) {
        if (head->next==NULL || head->next->next== NULL) return;
        ListNode *p=head;
        ListNode *q=head;
        while(q->next->next){
            q=q->next;
        }

        while(p!=q){
            q-> next->next=p->next;
            p->next=q->next;
            p=q->next->next;
            q->next=NULL;
            q=p;
            while(q->next && q->next->next){
            q=q->next;
            }            
        }
    }
};