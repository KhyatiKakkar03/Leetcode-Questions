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
int diameterOfBinaryTreee(TreeNode* root,int &mxx) {
        if(root==NULL)
        return 0;
        int lh=diameterOfBinaryTreee(root->left,mxx);
        int rh=diameterOfBinaryTreee(root->right,mxx);
        mxx=max(mxx,(lh+rh));
        return 1+max(lh,rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int mxx=0;
        diameterOfBinaryTreee(root,mxx);
        return mxx;
    }
};