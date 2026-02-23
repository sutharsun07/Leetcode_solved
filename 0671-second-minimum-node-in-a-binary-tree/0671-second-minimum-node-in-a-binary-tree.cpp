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
    void in(TreeNode* root,vector<int> &ans){
        if(root == NULL){
            return;
        }
        in(root->left,ans);
        ans.push_back(root->val);
        in(root->right,ans);
    }
    int findSecondMinimumValue(TreeNode* root) {
        vector<int> ans;
        if(root == NULL){
            return -1;
        }
        in(root,ans);
        sort(ans.begin(),ans.end());
        int minimum=ans[0];
        for(int i=0;i<ans.size();i++){
            if(ans[i] != minimum){
                return ans[i];
            }
        }
        return -1;
    }
};