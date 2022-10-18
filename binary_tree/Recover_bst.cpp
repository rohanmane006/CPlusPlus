//https://leetcode.com/problems/recover-binary-search-tree/
class Solution {
    TreeNode *first = nullptr , *sec = NULL , *prev = NULL;
    void findnodes(TreeNode *root)
    {
        if(!root) return;
        findnodes(root->left);
        if(prev != NULL)
        {
                if(prev->val > root->val)
                {
                    if(first == NULL)
                    {
                        first = prev;
                    }
                    sec = root;
                }
            
        }
        prev = root;
        findnodes(root->right);
    }
public:
    void recoverTree(TreeNode* root) {
        findnodes(root);
        swap(first->val , sec->val);
    }
};
