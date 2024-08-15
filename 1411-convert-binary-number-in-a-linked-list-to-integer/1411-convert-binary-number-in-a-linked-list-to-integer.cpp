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

    int getDecimalValue(ListNode* head) {
        int sum=0;
        ListNode*p=head;
        while(p!=NULL)
        {
            sum=sum*2;
            sum=sum+p->val;
            p=p->next;
        }
        return sum;
        

    }
};