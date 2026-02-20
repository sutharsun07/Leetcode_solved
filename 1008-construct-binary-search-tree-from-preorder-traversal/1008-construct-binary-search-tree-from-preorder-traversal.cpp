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
    TreeNode* insert(TreeNode* root,int a){
        if(root == NULL){
            return new TreeNode(a);
        }
        if(a<root->val){
            root->left=insert(root->left,a);
        }
        else{
            root->right=insert(root->right,a);
        }
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root;
        for(int i=0;i<preorder.size();i++){
            root=insert(root,preorder[i]);
        }
        return root;
    }
};