//
// Created by marin on 05.04.2022.
//

#ifndef TEMPLATE_NODE_H
#define TEMPLATE_NODE_H

template <typename T>
struct Node {
  T value;
  Node<T>* p;
};

#endif  // TEMPLATE_NODE_H
