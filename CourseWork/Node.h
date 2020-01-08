#ifndef NODE_H
#define NODE_H
#include <iostream>

using namespace std;

template <class T>
struct Node
{
    T inf;
    Node* next;
    Node* prev;

    Node(const T& d = T{}, Node* p = nullptr, Node* n = nullptr) : inf{ d }, prev{ p }, next{ n } {}
    Node(T&& d, Node* p = nullptr, Node* n = nullptr) : inf{ move(d) }, prev{ p }, next{ n } {}
};

#endif // NODE_H
