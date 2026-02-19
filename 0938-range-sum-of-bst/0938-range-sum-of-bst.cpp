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
    void sum(TreeNode* root,int l,int h,int &s){
        if(root == NULL){
            return;
        }
        if(root->val >= l && root->val <=h){
            s+=root->val;
        }
        sum(root->left,l,h,s);
        sum(root->right,l,h,s);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int s=0;
        sum(root,low,high,s);
        return s;
    }
};