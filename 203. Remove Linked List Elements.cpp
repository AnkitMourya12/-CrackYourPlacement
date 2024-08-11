class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
   ListNode*dum=new ListNode();
    dum->next=head;
   ListNode*cur=dum;
  
   while(cur->next!=0)
   {
       if(cur->next->val==val)
       {
           cur->next=cur->next->next;
           
           
       }
       else
       {
       
           cur=cur->next;
       }
       

   }
       return dum->next; 

}
        


        
    
};
