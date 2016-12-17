/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* invertTree(struct TreeNode* root) {
    if(root == NULL) return NULL;
    struct TreeNode *newleft, *newright;
    newleft = invertTree(root->right);
    newright = invertTree(root->left);
    root->left = newleft;
    root->right = newright;
    return root;
}