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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans=new ListNode;
        ListNode *r=ans;
        int carry=0;
        while(l1 || l2){
            int sum=0;
            if(l1!=NULL){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum+=l2->val;
                l2=l2->next;
            }
            sum+=carry;
            carry=sum/10;
            ListNode *node=new ListNode(sum%10);
            r->next=node;
            r=r->next;
        }
        if(carry){
            ListNode *node=new ListNode(1);
            r->next=node;
            r=r->next;
        }

        return ans->next;



        // arsalan's approach
        // ListNode *p=l1;
        // ListNode *q=l2;
        // ListNode *ans=new ListNode;
        // ListNode *r=ans;
        // int carry=0;

        // while(p || q){
        //     ListNode *dummy=new ListNode;
        //     r->next=dummy;
        //     r=r->next;
        //     r->next=NULL;
        //     if(p==NULL){
        //         r->val=q->val;
        //         q=q->next;
        //     }
        //     else if(q==NULL){
        //         r->val=p->val;
        //         p=p->next;
        //     }
        //     else{
        //         r->val=p->val+q->val;
        //         p=p->next;
        //         q=q->next;
        //     }
        //     if(carry){
        //         r->val+=1;
        //         carry=0;
        //     }
        //     if(r->val>9){
        //         r->val=r->val%10;
        //         carry=1;
        //     } 
        // }
        // if(carry){
        //     ListNode *dummy=new ListNode;
        //     r->next=dummy;
        //     r=r->next;
        //     r->next=NULL;
        //     r->val=1;
        // }
        // return ans->next;


        
    }
};