class Solution {
  public:
  int i=0;
  void solve(Node*root,vector<int>&ans){
      if(!root) return;
     solve(root->left,ans);
     ans.push_back(root->data);
     solve(root->right,ans);
  }
 
  void final(Node*root,vector<int>ans){
      if(!root) return;
      final(root->left,ans); final(root->left);
      root->data=ans[i++];
       final(root->right,ans);
  }
    void correctBST(Node* root) {
        // add code here.
        vector<int>ans;
        solve(root,ans);
        sort(ans.begin(),ans.end());
        final(root,ans);
        
        
    }
};
