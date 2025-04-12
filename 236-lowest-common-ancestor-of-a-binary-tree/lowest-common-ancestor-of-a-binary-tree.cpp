/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
TreeNode *lca(TreeNode *root,TreeNode *p,TreeNode *q)
{
    if(root==NULL||p==root||q==root)
    return root;
    TreeNode *left=lca(root->left,p,q);
    TreeNode *right=lca(root->right,p,q);
    if(left==NULL)return right;
    else if(right==NULL)return left;
    else
    return root;
}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode *ans=lca(root,p,q);
        return ans;
    }
};