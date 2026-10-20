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
    bool check(TreeNode* root , long long Minval , long long Maxval) {
        if(root == NULL) return true;
        if(root->val<=Minval || root->val>=Maxval) return false;
        return check(root->left,Minval,root->val) && check(root->right,root->val,Maxval);
    }
    bool isValidBST(TreeNode* root) {
       return check(root,LLONG_MIN,LLONG_MAX);
    }
};