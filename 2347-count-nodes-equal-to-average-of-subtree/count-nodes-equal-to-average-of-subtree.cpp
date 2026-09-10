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
    int ans=0;
    pair<int,int> dfs(TreeNode* t){
        if(!t)return {0,0};
        auto [ls,lc] = dfs(t->left);
        auto [rs,rc] = dfs(t->right);
        int s = ls+rs+t->val;
        int c = lc+rc+1;
        if(t->val==s/c)ans++;
        return {s,c};
    }
    
    
    int averageOfSubtree(TreeNode* root) {
        dfs(root);
        return ans;
    }
};