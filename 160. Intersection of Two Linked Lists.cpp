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
    ListNode *getIntersectionNode(ListNode *h1, ListNode *h2) {
        ListNode * t1=h1;
        ListNode *t2=h2;
        int c1=0;
        int c2=0;
        while(t1->next!=NULL){
              c1++;
              t1=t1->next;
        }
         while(t2->next!=NULL){
              c2++;
              t2=t2->next;
        }
        int diff=abs(c1-c2);
        if(c1>c2){
            while(diff--){
                h1=h1->next;
                 if(h1==NULL){
                    return NULL;
                }
            }
        }
        else{
            while(diff--){
                h2=h2->next;
                if(h2==NULL){
                    return NULL;
                }

            }
        }
        while(h2!=h1){
           
                h1=h1->next;
                h2=h2->next;
            }
            return h1;
           

        
    }
};
