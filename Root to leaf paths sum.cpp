class Solution {
  public:
  int sum=0;
    void dfs(Node* root,int num)
    {
        if(root==NULL)
        {
            return;
        }
        num=num*10+root->data;
        if(root->left==NULL && root->right==NULL)
        {
            sum+=num;
            return;
        }
        dfs(root->left,num);
        dfs(root->right,num);
    }
    int treePathsSum(Node *root) {
        // code here.
        dfs(root,0);
        return sum;
    }
    
};
