/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

TreeNode* helper(vector<int>& nums ,int s,int e){
    if(s>e){
        return NULL;
    }
    int mid=s+(e-s)/2;
 TreeNode* nd=new TreeNode (nums[mid]);
 nd->left=helper( nums,s, mid-1);
 nd->right=helper( nums,mid+1, e);
 return nd;
    
}

    TreeNode* sortedArrayToBST(vector<int>& nums) {
       int n=nums.size();
      TreeNode* head;
      head=helper(nums,0,n-1);
      return head;
        
    }
};
