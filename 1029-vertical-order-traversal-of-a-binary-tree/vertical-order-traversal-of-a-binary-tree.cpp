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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>> nodes;
        queue<pair<TreeNode*,pair<int,int>>> store;
        store.push({root,{0,0}});
        while(!store.empty()){
            auto p=store.front();
            store.pop();
            TreeNode *node=p.first;
            int x=p.second.first;
            int y=p.second.second;
            nodes[x][y].insert(node->val);
            if(node->left)
            {
                store.push({node->left,{x-1,y+1}});
            }
            if(node->right)store.push({node->right,{x+1,y+1}});
        }
        vector<vector<int>> ans;
        for(auto p:nodes)
        {
            vector<int> temp;
            for(auto q:p.second)
            {
                temp.insert(temp.end(),q.second.begin(),q.second.end());
            }
            ans.push_back(temp);
        }
        return ans;
    }
};