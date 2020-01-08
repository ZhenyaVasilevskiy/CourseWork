#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H
#include <iostream>
#include "Node.h"


using namespace std;


template <class T>
class DoublyLinkedList
{
    int Size;
    Node<T> *head;
    Node<T> *tail;

    void create();

public:

    DoublyLinkedList();
    DoublyLinkedList(const DoublyLinkedList &);
    DoublyLinkedList(DoublyLinkedList &&);
    ~DoublyLinkedList();

    int size() const;
    bool empty()const;
    void delete_all();
    void delete_node(Node <T>*);
    void insert_node(const T& val, int index);
    int search(const T& date);
    void remove(const T&);


    void pop_back();
    void pop_front();
    void push_front(const T & val);
    void push_back(const T & val);
    const T& front();
    const T& back();

    inline friend std::ostream& operator<<(std::ostream& os, const DoublyLinkedList<T>& l)
    {
        if (l.size() == 0)
            cout << "Empty list!" << endl;
        Node<T>* element = l.head->next;
        for (; element != l.tail; element = element->next) os << element->inf << ' ';
        return os;
    }

    inline friend bool operator ==(const DoublyLinkedList<T>& list1, const DoublyLinkedList<T>& list2)
    {
        if (list1.size() == list2.size())
        {
            Node<T>* element1 = list1.head->next;
            Node<T>* element2 = list2.head->next;

            for (; element1 != list1.tail; element1 = element1->next, element2 = element2->next)
            {
                if (element1->inf != element2->inf)
                    return false;
            }
            return true;

        }
        else
            return false;
    }

    inline friend bool operator !=(const DoublyLinkedList<T>& list1, const DoublyLinkedList<T>& list2)
    {
        return !(list1 == list2);
    }


    T& operator [](int);

};



#endif // DOUBLYLINKEDLIST_H
