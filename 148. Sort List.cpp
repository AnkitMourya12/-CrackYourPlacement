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
    ListNode* sortList(ListNode* head) {
        vector<int> v;
        if(head==NULL)
        return head;
        ListNode* p=head;
        int c=0;
        while(p!=NULL)
        {
            v.push_back(p->val);
            p=p->next;
            c++;
        }
        sort(v.begin(),v.end());
         ListNode*temp;
         temp= head;
        for(int i=0;i<c;i++)
        {
          temp->val=v[i];
          temp=temp->next;
    
        }

        return head;
    }
};
