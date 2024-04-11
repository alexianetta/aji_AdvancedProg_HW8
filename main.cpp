#include "BinarySearchTree.h"

ofstream myFile; // for filewrite

/*
 * function template for testing
 * @count: the number of nodes
 */
template <typename T> 
void test(int count) {
  T data; // T can be int or char
  BinarySearchTree<T> tree; // create an object of the BinarySearchTree class
  
  // insert data to the BST
  for (int i=0; i<count; ++i) {
    cin >> data;
    tree.insert(data); // call the insert() member function taking data for each iteration
  }

  // traverse the BST (inorder traversal)
  tree.traverse(); // call the traverse() member function
}

/*
 * main function
 */
int main() {
  myFile.open("result.txt");
  
  string dataType; // store the entered data type of nodes
  int count; // store the number of nodes

  cin >> dataType >> count;

  // call the test() function
  if (dataType == "int") {
    test<int>(count);
  } else if (dataType == "char") {
    test<char>(count);
  }
}

