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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
//         vector<int>v;
//         int n=lists.size();

       
        
//         int i=0;
//         while(n>i )
//         { ListNode*p=lists[i];
//             while( p!=0)
//             {
//             v.push_back(p->val);
//             p=p->next;
//             }

//             i++;
//             n++;


//         }
//         sort(v.begin(), v.end());
//          ListNode* result=new ListNode(-1);
         
//          ListNode* temp=result;

// int j=0;
//         while(result!=0)
//         {
//             ListNode* ans=new ListNode(v[j]);
//             result->next=ans;
//             result=result->next;
//            i++;

//         }
//         temp=temp->next;
//         return temp;
vector<int>V;
int n=lists.size();
int i=0;
while(n>i){
    ListNode*p=lists[i];
    while(p!=0){
        V.push_back(p->val);
        p=p->next;

    }
    i++;
    
}

sort(V.begin(),V.end());
ListNode* dumy=new ListNode();
ListNode*temp=dumy;

for(int i=0;i<V.size();i++){
    ListNode*newNode=new ListNode(V[i]);
    temp->next=newNode;
    temp=temp->next;

}
temp->next=NULL;
return dumy->next;

}


        
    
};