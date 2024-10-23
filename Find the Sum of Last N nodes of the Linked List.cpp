  int sumOfLastN_Nodes(struct Node* head, int n) {
        // Code here
        int n1=1;
        Node*p=head;
        while(p->next!=NULL){
            p=p->next;
            n1++;
        }
        int t=n1-n;
        p=head;
        while(t--){
            p=p->next;
        }
        int sum=0;
        while(p!=NULL){
            sum=sum+p->data;
            p=p->next;
            
        }
        return sum;
    }
};
