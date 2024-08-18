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
int s=0;
    int sumOfLeftLeaves(TreeNode* root) {
        help(root);
        return s;
        
    }
    void help(TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
        if(isleaf(root->left))
        {
            s+=root->left->val;
        }
        help(root->left);
        help(root->right);
        
    }
    bool isleaf(TreeNode* root)
    {
        if(root==NULL)
        {
            return false;
        }
        if(root->left==NULL &&root->right==NULL)
        {
            return true;
        }
        return false;
    }
    
};