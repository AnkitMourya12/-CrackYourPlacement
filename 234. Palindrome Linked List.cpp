class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* s=head;
        ListNode* f=head;
        while(f!=NULL && f->next!=NULL){
            s=s->next;
            f=f->next->next;

        }
        ListNode*pre=NULL;
        while(s!=NULL){
            ListNode* t=s->next;
            s->next=pre;
            pre=s;
            s=t;
          
        }
        while(pre!=NULL){
            if(head->val!=pre->val){
                return false;
            }
            head=head->next;
            pre=pre->next;
        }
       
       return true;
    }
};
