/*
 * Name : 朱幸尔(JoeZhu)
 * Date : 2016-07-22
 * Q2   : Add Two Numbers
 */

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head=new ListNode(0);
        ListNode *l3=new ListNode(0);
        int flag_ten=0;
        int num=0;
        while(l1!=NULL||l2!=NULL){
            if (l1==NULL) {
                if (flag_ten==1) {
                    l3->val=l2->val+1;
                    if(l3->val>9){
                        flag_ten=1;
                        l3->val=l3->val-10;
                    }
                    else{
                        flag_ten=0;
                    }
                    if (l2->next==NULL&&flag_ten==1) {
                        l3->next=new ListNode(1);
                        l3=l3->next;
                    }
                    else if(l2->next==NULL&&flag_ten==0){
                        l3->next=NULL;
                    }
                    else{
                        l3->next=new ListNode(0);
                        l3=l3->next;
                    }
                }
                else{
                    l3->val=l2->val;
                    if(l2->next==NULL){
                        l3->next=NULL;
                    }
                    else{
                        l3->next=new ListNode(0);
                        l3=l3->next;
                    }
                }
                l2=l2->next;
            }
            else if (l2==NULL) {
                if (flag_ten==1) {
                    l3->val=l1->val+1;
                    if(l3->val>9){
                        flag_ten=1;
                        l3->val=l3->val-10;
                    }
                    else{
                        flag_ten=0;
                    }
                    if (l1->next==NULL&&flag_ten==1) {
                        l3->next=new ListNode(1);
                        l3=l3->next;
                    }
                    else if(l1->next==NULL&&flag_ten==0){
                        l3->next=NULL;
                    }
                    else{
                        l3->next=new ListNode(0);
                        l3=l3->next;
                    }
                }
                else{
                    l3->val=l1->val;
                    if(l1->next==NULL){
                        l3->next=NULL;
                    }
                    else{
                        l3->next=new ListNode(0);
                        l3=l3->next;
                    }
                }
                l1=l1->next;
            }
            else{
                if(flag_ten==0){
                    l3->val=l1->val+l2->val;
                }
                else{
                    l3->val=l1->val+l2->val+1;
                }
                if(l3->val>9){
                    flag_ten=1;
                    l3->val=l3->val-10;
                }
                else{
                    flag_ten=0;
                }
                num++;
                if(num==1)
                    head=l3;
                l1=l1->next;
                l2=l2->next;
                if (l1==NULL&&l2==NULL&&flag_ten==1) {
                    l3->next=new ListNode(1);
                    l3=l3->next;
                }
                else if(l1==NULL&&l2==NULL&&flag_ten==0){
                    l3->next=NULL;
                }
                else{
                    l3->next=new ListNode(0);
                    l3=l3->next;
                }
            }
        }
        return head;
    }
    
};