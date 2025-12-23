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
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
        int c = 0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int n = q.size();
            for(int i=0;i<n;i++)
            {
                if(q.front()->left != NULL)
                {
                    q.push(q.front()->left);
                }
                if(q.front()->right != NULL)
                {
                    q.push(q.front()->right);
                }
                q.pop();
            }
            c++;
        }
        return c;
    }
};