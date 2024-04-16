#ifndef NODE_H__
#define NODE_H__

#include <memory>

using namespace std;

/*TODO: convert the Node class, including its member functions, for a template parameter*/
template <class T>
class Node {
  T data;
  shared_ptr<Node<T>> left;
  shared_ptr<Node<T>> right;

public:
  /**
   * constructor
   * @param data: the data to be stored in the node
   */
  Node(T data) : data(data) {}

  /**
   * get the data stored in the node
   * @return the data stored in the node
   */
  T getData() { /*TODO: write your code*/
  return data;
  
   }

  /**
   * set the data stored in the node
   * @param data: the data to be stored in the node
   */
  void setData(T data) { /*TODO: write your code*/
  
  this->data = data;

   }

  /**
   * get the left child node
   * @return the left child node
   */
  shared_ptr<Node<T>> getLeft() { /*TODO: write your code*/
    
    return left;

     }

  /**
   * get the right child node
   * @return the right child node
   */
  shared_ptr<Node<T>> getRight() { /*TODO: write your code*/
  
    return right;
  
   }

  /**
   * set the left child node
   * @param node: the node to be set as the left child
   */
  void setLeft(shared_ptr<Node<T>> node) { /*TODO: write your code*/
  
    left = node;
  
   }

  /**
   * set the right child node
   * @param node: the node to be set as the right child
   */
  void setRight(shared_ptr<Node<T>> node) { /*TODO: write your code*/
  
    right = node;
  
   }
};

#endif //NODE_H__

