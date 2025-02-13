class Solution {
  public:
    bool solve(Node* node, int target, map<int, int> &mp){
      if(!node)
      return false;
      
      if(mp.find(target-node->data)!=mp.end())
      return true;
      
      mp[node->data]=1;
      
      return solve(node->left, target, mp) || solve(node->right, target, mp);
  }
    bool findTarget(Node *root, int target) {
        map<int,int> mp;
        return solve(root,target,mp);
    }
};
