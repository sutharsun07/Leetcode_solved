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
    void ans(TreeNode* t,string &s){
        if(t == NULL){
            s+="#";
            return;
        }
        s+=","+to_string(t->val);
        ans(t->left,s);
        ans(t->right,s);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        string a="";
        string b="";
        ans(root,a);
        ans(subRoot,b);
        return (a.find(b)!=string::npos);
    }
};