class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)
            return false;
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(slow && fast && fast->next){
            if(slow == fast)
                return true;
            slow = slow->next;
            fast = fast->next->next;
            
        }
        return false;
        
    }
};
