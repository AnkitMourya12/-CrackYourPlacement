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
bool tree(TreeNode * p,TreeNode * q){
    if(p==NULL && q==NULL){
        return true;
    }
    if(p==NULL || q==NULL){
        return false;
    }
    if(p->val!=q->val){
        return false;
    }

    return tree(p->left, q->right) &&  tree( p->right, q->left);
}
    bool isSymmetric(TreeNode* root) {
        if(root==NULL ){
            return true;
        }
        bool x=tree(root->left,root->right);
        return x;
        
        
    }
};
