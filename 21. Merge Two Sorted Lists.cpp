class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*dum=new ListNode();
        ListNode*t=dum;
        ListNode*p1=list1;
        ListNode*p2=list2;

        while(p1!=0 && p2!=0){
            if(p1->val<p2->val){
                t->next=p1;
                p1=p1->next;
            }
            else{
                t->next=p2;
                p2=p2->next;
            }
            t=t->next;
        }
        while(p1!=0){
            t->next=p1;
            p1=p1->next;
            t=t->next;
        }
        while(p2!=0){
            t->next=p2;
            p2=p2->next;
            t=t->next;
        }
        return dum->next;
        
    }
};
