class Solution
{
    public:
    // your task is to complete this function
    void sort(Node **head)
    
    {
        Node* p= NULL;
         Node* t1= *head;
          Node* t2=t1->next;
          Node*head2=t2;
          while(t1->next!=NULL && t2->next!=NULL){
              t1->next=t2->next;
              t2->next=p;
              t1=t1->next;
              p=t2;
              t2=t1->next;
          }
          if(t2)
          t2->next=p;
          else
          t1->next=p;
    }
};
