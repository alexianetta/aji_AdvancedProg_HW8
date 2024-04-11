#ifndef NODE_H__
#define NODE_H__

#include <memory>

using namespace std;

/*TODO: convert the Node class, including its member functions, for a template parameter*/

class Node {
  int data;
  shared_ptr<Node> left;
  shared_ptr<Node> right;

public:
  /**
   * constructor
   * @param data: the data to be stored in the node
   */
  Node(int data) : data(data) {}

  /**
   * get the data stored in the node
   * @return the data stored in the node
   */
  int getData() { /*TODO: write your code*/ }

  /**
   * set the data stored in the node
   * @param data: the data to be stored in the node
   */
  void setData(int data) { /*TODO: write your code*/ }

  /**
   * get the left child node
   * @return the left child node
   */
  shared_ptr<Node> getLeft() { /*TODO: write your code*/ }

  /**
   * get the right child node
   * @return the right child node
   */
  shared_ptr<Node> getRight() { /*TODO: write your code*/ }

  /**
   * set the left child node
   * @param node: the node to be set as the left child
   */
  void setLeft(shared_ptr<Node> node) { /*TODO: write your code*/ }

  /**
   * set the right child node
   * @param node: the node to be set as the right child
   */
  void setRight(shared_ptr<Node> node) { /*TODO: write your code*/ }
};

#endif //NODE_H__

