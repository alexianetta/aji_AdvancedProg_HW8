#ifndef BINARYSEARCHTREE_H__
#define BINARYSEARCHTREE_H__

#include "Node.h"
#include <iostream>
#include <memory>
#include <stack>
#include <fstream> // for filewrite

using namespace std;

extern ofstream myFile; // for filewrite

/*TODO: convert the BinarySearchTree class, including its member functions, for a template parameter*/

// ----------------
// class definition
// ----------------
class BinarySearchTree {
  /**
   * root of the BST
   */
  shared_ptr<Node> root; // Node-typed shared pointer (shared pointer pointing to a Node object)

public:
  /*
   * constructor, set the root to nullptr
   */
  BinarySearchTree();

  /*
   * insert data into the BST (using an iterative approach)
   * @data - data to insert
   */
  void insert(int data);

  /*
   * traverse the BST inorder and print out node data (using an iterative approach)
   */
  void traverse();
};

// ---------------------------
// member function definitions
// ---------------------------
BinarySearchTree::BinarySearchTree() : root(nullptr) {}

void BinarySearchTree::insert(int data) {
  auto node = make_shared<Node>(data); // create a new node with the entered data

  /*TODO: write your code*/
}

void BinarySearchTree::traverse() {
  myFile << "Traversal result: ";
  
  stack<shared_ptr<Node>> stack; // the stack data structure in STL is used

  auto curr = root;
  
  while ((curr != nullptr) || !stack.empty()) {
    while (curr != nullptr) {
      stack.push(curr);
      curr = curr->getLeft();
    }

    curr = stack.top();
    stack.pop();

    myFile << curr->getData() << " ";

    curr = curr->getRight();
  }
}

#endif

