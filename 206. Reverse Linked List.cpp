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
    ListNode* reverseList(ListNode* head) {
        
       
            ListNode* cur=head;
            ListNode* pri=NULL;

            while(cur!=NULL)
            {
                ListNode* temp=cur->next;
                cur->next=pri;
                pri=cur;
                cur=temp;



            }
            
                 return pri;

        
        
    }
};
