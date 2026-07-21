#include "BST.h"
#include <iostream>
using namespace std;

BST::BST() : root(nullptr) {}

TreeNode* BST::insertRec(TreeNode* node, int value) {
    if (!node) 
    return new TreeNode{value, nullptr, nullptr};
    if (value < node->data)
     node->left = insertRec(node->left, value);
    else
     node->right = insertRec(node->right, value);
    return node;
}

void BST::insert(int value) { 
    root = insertRec(root, value); 
}

bool BST::searchRec(TreeNode* node, int value) {
    if (!node)
     return false;
    if (node->data == value) 
    return true;
    return value < node->data ? searchRec(node->left, value) : searchRec(node->right, value);
}

bool BST::search(int value) {
     return searchRec(root, value); 
    }

void BST::inorderRec(TreeNode* node) {
    if (!node)
     return;
    inorderRec(node->left);
    cout << node->data << " ";
    inorderRec(node->right);
}

void BST::inorder() { 
    inorderRec(root); 
    cout << endl;
 }
