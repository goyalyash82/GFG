class Solution {
public:
    bool isBSTUtil(Node* root, int& prev) {
        if (root == NULL)
            return true;

        if (!isBSTUtil(root->left, prev))
            return false;

        if (root->data <= prev)
            return false;

        prev = root->data;

        return isBSTUtil(root->right, prev);
    }

    bool isBST(Node* root) {
        int prev = INT_MIN;
        return isBSTUtil(root, prev);
    }
};
