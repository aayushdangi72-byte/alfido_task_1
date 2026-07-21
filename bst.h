#ifndef BST_H
#define BST_H

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
};

class BST {
public:
    BST();
    void insert(int value);
    bool search(int value);
    void inorder();
private:
    TreeNode* root;
    TreeNode* insertRec(TreeNode* node, int value);
    bool searchRec(TreeNode* node, int value);
    void inorderRec(TreeNode* node);
};

#endif
