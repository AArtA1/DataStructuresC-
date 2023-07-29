#ifndef AVLTREE_AVLTREE_H
#define AVLTREE_AVLTREE_H


#include <iostream>
#include <vector>
#include <algorithm>

struct Node {
    int height;
    Node *left;
    Node *right;
    int value;
    Node(int value) : height(1), left(nullptr), right(nullptr), value(value) {
    }
};

class AVLTree {
public:
    AVLTree() : root_(nullptr), size_(0) {
    }

    int getHeight() {
        return getHeight(root_);
    }

    int getHeight(Node *root) {
        if (root == nullptr) {
            return 0;
        }
        return std::max(getHeight(root->left), getHeight(root->right)) + 1;
    }

    Node *leftRotate(Node *x) {
        auto y = x->right;
        if (x == root_) {
            root_ = y;
        }
        x->right = y->left;
        y->left = x;
        x->height = getHeight(x);
        y->height = getHeight(y);
        return y;
    }
    Node *rightRotate(Node *x) {
        auto y = x->left;
        if (x == root_) {
            root_ = y;
        }
        x->left = y->right;
        y->right = x;
        x->height = getHeight(x);
        y->height = getHeight(y);
        return y;
    }
    Node *balance(Node *root) {
        root->height = getHeight(root);
        auto value = getHeight(root->right) - getHeight(root->left);
        if (value == -2) {
            if (getHeight(root->left->right) - getHeight(root->left->left) > 0) {
                root->left = leftRotate(root->left);
            }
            return rightRotate(root);
        }
        if (value == 2) {
            if (getHeight(root->right->right) - getHeight(root->right->left) < 0) {
                root->right = rightRotate(root->right);
            }
            return leftRotate(root);
        }
        return root;
    }
    void insert(int value) {
        if (find(value) == nullptr) {
            ++size_;
            root_ = insert(root_, value);
        } else {
            return;
        }
    }

    Node *insert(Node *root, int value) {
        if (!root) {
            return new Node(value);
        }
        if (value > root->value) {
            root->right = insert(root->right, value);
        } else {
            root->left = insert(root->left, value);
        }
        return balance(root);
    }

    void erase(int value) {
        if (find(value) == nullptr) {
            return;
        }
        erase(root_, value);
        --size_;
    }
    Node *erase(Node *root, int value) {
        if (root == nullptr) {
            return root;
        }
        if (value < root->value) {
            root->left = erase(root->left, value);
        } else if (value > root->value) {
            root->right = erase(root->right, value);
        } else {
            Node *left = root->left;
            Node *right = root->right;
            delete root;
            if (!right) {
                return left;
            }
            Node *min = minimum(right);
            min->right = eraseMinimum(right);
            min->left = left;
            return balance(min);
        }
        return balance(root);
    }
    int *find(int value) {
        Node *temp = find(root_, value);
        return temp != nullptr ? &temp->value : nullptr;
    }
    Node *find(Node *root, int value) {
        if (root == nullptr) {
            return nullptr;
        }
        if (root->value == value) {
            return root;
        }
        if (root->value < value) {
            return find(root->right, value);
        } else {
            return find(root->left, value);
        }
    }
    Node *minimum(Node *root) {
        while (root->left != nullptr) {
            root = root->left;
        }
        return root;
    }
    Node *eraseMinimum(Node *root) {
        if (root->left == nullptr) {
            return root->right;
        }
        root->left = eraseMinimum(root->left);
        return balance(root);
    }
    int *traversal() {
        std::vector<int> vec;
        temp(root_, vec);
        int *array = new int[size_];
        for (int i = 0; i < size_; ++i) {
            array[i] = vec[i];
        }
        return array;
    }

    void temp(Node *node, std::vector<int> &vec) {
        if (node == nullptr) {
            return;
        }
        temp(node->left, vec);
        vec.push_back(node->value);
        temp(node->right, vec);
    }

    int *lowerBound(int value) {
        std::vector<int> array;
        temp(root_, array);
        int tmp = *std::lower_bound(array.begin(), array.end(), value);
        return find(tmp);
    }

    bool empty() {
        return size_ == 0;
    }

    Node *getRoot() {
        return root_;
    }

    int getSize() {
        return size_;
    }

    void clearMemory(Node *node) {
        if (node) {
            clearMemory(node->right);
            clearMemory(node->left);
            delete node;
        }
    }
    ~AVLTree() {
        clearMemory(root_);
    }

    Node *root_;
    int size_;
};


#endif //AVLTREE_AVLTREE_H
