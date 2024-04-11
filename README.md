# Introduction

In this homework assignment, you will be implementing a Binary Search Tree (BST). BST is known for efficient searching, insertion, and deletion operations. You can find in-depth knowledge about BST at https://www.geeksforgeeks.org/binary-search-tree-data-structure/.

In addition to learning a new data structure, this homework assignment will explore the use of custom templates. Typically, with any data structure, their operations can be generic relative to the data that is stored. Therefore, this homework assignment will templatize the classes involved with BST.

# Binary Search Tree

BST is a node-based data structure, as shown in the image below. Left nodes are lesser values than their parent node and right nodes are greater.

![bst-21](https://github.com/sskeme/eeee346-s24-hw8/assets/154963758/129f1672-8a92-40b9-ac8d-793921339098)

You will be implementing an iterative insertion operation. A recursive implementation tends to be easier to code but introduces heavy stack usage due to recursion. You can use the code below to adapt it to the C++ classes required in this homework assignment.

```
void insert(Node* root, int key) {
  Node* node = new Node(key);
  if (!root) { // empty tree
    root = node;
    return;
  }
  Node* prev = NULL;
  Node* temp = root;
  while (temp) {
    if(temp->val > key) {
      prev = temp;
      temp = temp->left;
    } else if(temp->val < key) {
      prev = temp;
      temp = temp->right;
    }
  }
  if(prev->val > key) {
    prev->left = node;
  } else {
    prev->right = node;
  }
}
```

There are several ways to traverse a BST. In this homework assignment, the depth-first search - inorder traversal method is used. The relevant function called traverse() is already implemented, but you can get detailed information about this method here: https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/. The traverse() function uses the `stack` data structure provided by C++ Standard Template Library. Check how it is used.

# Tasks

* Convert `Node.h` and `BinarySearchTree.h` to use a template argument instead of `int`.
  * Nodes are implemented by using shared_pointers. Hint: `shared_ptr<Node<int>>` is a shared pointer pointing to Node storing an int. Convert this for a template argument.
* Implement all member functions of the class template Node in `Node.h`.
* Implement the insert() member function of the class template BinarySearchTree in `BinarySearchTree.h`. Recall that member function declarations and member function definitions of a class template must be contained in the same file, which is why they are in the same file.

Do not modify other files.

# Compile and Run

* For Cygwin users: 1) type the following commands on Terminal and 2) provide inputs.

```
g++ -o main *.cpp *.h
```
```
./main
```

* For CLion users: 1) update the CMakeLists.txt file as below, 2) click the Compile and Run button, and 3) provide inputs.

```
add_executable(your_project_name main.cpp BinarySearchTree.h Node.h)
```

Output (printed) messages will be written in the `result.txt` file.

# Inputs

* Line 1: data type (int or char)
* Line 2: data count (or the number of nodes)
* Line 3: data to insert to the BST

Example:

```
int
3
3 2 1
```

# Tests 

There are four test inputs in the `inputs` folder.

Check that the result.txt file (for CLion users: this file is located in the cmake-build-debug folder) is identical to the resulting txt file in the `golden` folder for each test.

# Submit

Since the problem between GitHub Classroom and Codespaces has not been resolved yet, please upload your `BinarySearchTree.h` and `Node.h` files to `myCourses > Assignments > Homework 8`. Do not submit *.docx, *.pdf, *.txt, or *.zip file. 
