/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    if(root == NULL) return 0;
    int leftlen = maxDepth(root->left);
    int rightlen = maxDepth(root->right);
    if(leftlen > rightlen) return leftlen+1;
    else return rightlen+1;
}