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
int findAns(TreeNode *node,int &ans)
{
    if(node==NULL)
    return 0;
    int lh=max(0,findAns(node->left,ans));
    int rh=max(0,findAns(node->right,ans));
    ans=max(ans,node->val+lh+rh);
    return max(lh,rh)+node->val;
}
    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
        findAns(root,ans);
        return ans;
    }
};