class Tree{
    public:
    int start;
    int end;
    Tree* left;
    Tree* right;
    Tree (int s,int e){
        start=s;
        end=e;
        left=NULL;
        right=NULL;
    }
    bool insert(int s,int e){
        Tree * cur=this;
        while(1){
        
            if(s>=cur->end){
             if(!cur->right){
                Tree* node =new Tree(s,e);
                cur->right=node;
                return true;
             }
            
            cur=cur->right;
            }
            else if(e<=cur->start){
             if(!cur->left){
                Tree* node =new Tree(s,e);
                cur->left=node;
                return true;
             }
            
            cur=cur->left;
            }
            else{
                return false;
            }
        }
    }
};

class MyCalendar {
public:
Tree* root;
    MyCalendar() {
        root=NULL;
    }
    
    bool book(int startTime, int endTime) {
        if(!root){
            root=new Tree(startTime,endTime);
            return true;
        }
        return root->insert(startTime,endTime);
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(startTime,endTime);
 */