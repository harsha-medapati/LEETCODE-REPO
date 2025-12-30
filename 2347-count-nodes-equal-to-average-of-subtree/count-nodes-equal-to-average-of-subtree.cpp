class Solution {
public:

    struct info {
        int child_sum = 0;
        int count = 0;
        int ans = 1;
    };

    info dfs(TreeNode* root) {
    if (root == NULL) return {0, 0, 0};
    if (root->left == NULL && root->right == NULL) return {root->val, 1, 1};
    info p_left = dfs(root->left);
    info p_right = dfs(root->right);
    info curr;
    curr.child_sum = p_left.child_sum + p_right.child_sum + root->val;
    curr.count = p_left.count + p_right.count + 1;
    curr.ans = p_left.ans + p_right.ans;
    if (curr.child_sum / curr.count == root->val) curr.ans += 1;
    return curr;
}

    int averageOfSubtree(TreeNode* root) {
        info add = dfs(root);
        return add.ans;
    }
};