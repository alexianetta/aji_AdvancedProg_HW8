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
template <class T>
// ----------------
// class definition
// ----------------
class BinarySearchTree {
  /**
   * root of the BST
   */

  shared_ptr<Node<T>> root; // Node-typed shared pointer (shared pointer pointing to a Node object)

public:
  /*
   * constructor, set the root to nullptr
   */
   //template <class T>

  BinarySearchTree();

    

  /*
   * insert data into the BST (using an iterative approach)
   * @data - data to insert
   */
 // void insert(Node* root, int key);
  void insert(T data);
  /*
   * traverse the BST inorder and print out node data (using an iterative approach)
   */
  // template <class T>

  void traverse();
};

// ---------------------------
// member function definitions
// ---------------------------
template <class T>
BinarySearchTree<T>::BinarySearchTree() : root(nullptr) {}

template <class T>

void BinarySearchTree<T>::insert(T data) {
  auto node = make_shared<Node<T>>(data); // create a new node with the entered data

  if (!root) { // empty tree
    root = node;
    return;
  }
  shared_ptr<Node<T>> prev = NULL;
  shared_ptr<Node<T>> temp = root;
  // go to the correct position for inserting the new node
  while (temp) {
    if(temp->getData() > data) {
      prev = temp;
      temp = temp->getLeft();
    } else if(temp->getData() < data) {
      prev = temp;
      temp = temp->getRight();
    }
  }
  // insert the new node as a left child or a right child of the prev (parent) node
  if(prev->getData() > data) {
    prev->setLeft(node);
  } else {
    prev->setRight(node);
  }
}



template <class T>

void BinarySearchTree<T>::traverse() {
  myFile << "Traversal result: ";
  
  stack<shared_ptr<Node<T>>> stack; // the stack data structure in STL is used

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

